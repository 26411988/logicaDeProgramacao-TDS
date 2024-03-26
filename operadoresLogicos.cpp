#include <iostream>

int main () {
// solicita ao usuario para digitar 2 numero
int a, b;

printf("Digite o primeiro numero (0 ou 1): ");
scanf ("%d", &a);
printf ("Digite o segundo numero ( 0 ou 1): ");
scanf ("%d", &b);



// Operadores AND


printf ("\nOperador AND (&&): \n");
printf("%d && %d = %d\n",a,b, a && b);




// operador or

printf("\nOperador OR (||) : \n");
printf (" %d || %d = %d\n", a, b, a || b);


//  operador  not

printf("\nOperador NOT (!): \n");
printf("!%d = %d\n" , a, !a);
printf("!%d = %d\n" , b , !b);

return 0;

}