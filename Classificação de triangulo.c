#include <stdio.h>
#include <locale.h>

void triangulo(int lado1,int lado3, int lado2){
   
    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
    printf("Os lados informados n�o formam um tri�ngulo.\n");
      } else {
    // Classifica o tri�ngulo
    if (lado1 == lado2 && lado2 == lado3) {
      printf("Tri�ngulo equil�tero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      printf("Tri�ngulo is�sceles\n");
    } else {
      printf("Tri�ngulo escaleno\n");
    }
  }
           
}

int main() {
   
  float lado1, lado2, lado3;

  printf("Digite o lado 1 do tri�ngulo: ");
  scanf("%f", &lado1);

  printf("Digite o lado 2 do tri�ngulo: ");
  scanf("%f", &lado2);

  printf("Digite o lado 3 do tri�ngulo: ");
  scanf("%f", &lado3);

  triangulo( lado1, lado3,  lado2);
   
  return 0;
}
