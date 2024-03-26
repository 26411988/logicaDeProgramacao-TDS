
#include <stdio.h>

int main() {
    int numero =5;
    int resultado = ((numero > 3) && (numero < 10));
    printf("Resultado: %d \n", resultado);
    // Verifica se o número está entre 3 e 10




    
    if (numero > 3 && numero < 10) {
        printf("%d é maior que 3 e menor que 10.\n", numero);

    } else {
        printf("%d não satisfaz as condições.\n", numero);
    }

    return 0;
}