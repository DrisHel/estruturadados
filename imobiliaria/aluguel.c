#include <stdio.h>
#include <stdlib.h>

typedef struct apartamento{
    int numero;
    int andar;
    int n_comodos;
    double v_aluguel;
    double v_condominio;
    int n_box;
}Apartamento;

void mostraDadosApartamento(Apartamento  apto){
    printf("\n Dados de um apartamento. ");
     printf("\n\t Numero= %d Andar= %d Box= %d", apto.numero,apto.andar,apto.n_box);
      printf("\n\t Valor Aluguel= %.2f Valor Condominio= %.2f ",apto.v_aluguel,apto.v_condominio);
       printf("\n\t Numero de comodos= %d\n ",apto.n_comodos);

};

void alterarValorAluguel(Apartamento * apto){
    printf("\n Informe o novo falor do aluguel:");
    scanf("%lf",&apto->v_aluguel);
}


int main() {

  Apartamento apto_201 = { 201, 2,5,800,250,10};
  Apartamento apto_301;


  apto_301.numero = 301;
  apto_301.andar=3;
  apto_301.n_comodos=5;
  apto_301.v_aluguel=1000;
  apto_301.v_condominio=250;
  apto_301.n_box=15;

  mostraDadosApartamento(apto_201);
  mostraDadosApartamento(apto_301);

}