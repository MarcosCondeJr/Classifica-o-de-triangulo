#include <stdio.h>
#include <locale.h>

void triangulo(int lado1,int lado3, int lado2){
   
    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
    printf("Os lados informados não formam um triângulo.\n");
      } else {
    // Classifica o triângulo
    if (lado1 == lado2 && lado2 == lado3) {
      printf("Triângulo equilátero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      printf("Triângulo isósceles\n");
    } else {
      printf("Triângulo escaleno\n");
    }
  }
           
}

int main() {
   
  float lado1, lado2, lado3;

  printf("Digite o lado 1 do triângulo: ");
  scanf("%f", &lado1);

  printf("Digite o lado 2 do triângulo: ");
  scanf("%f", &lado2);

  printf("Digite o lado 3 do triângulo: ");
  scanf("%f", &lado3);

  triangulo( lado1, lado3,  lado2);
   
  return 0;
}
