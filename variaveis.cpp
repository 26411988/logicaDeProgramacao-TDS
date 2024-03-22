#include <iostream>
int main () {
// declarando variaveis
int numero = 10;
float pi = 3.14159;
char letra = 'a';
std::string nome = "Ana";
bool istrue = true;


// exibe printf para formatar  e imprimir  os valores  das variaveis

printf ( "numero: %d\n", numero );
printf ("pi: %.2f\n", pi);
printf ("letra: %c\n", letra);
printf ("nome: %s\n", nome.c_str());
printf ("isTrue: %d\n", istrue);

//  retorne para indicar sucesso

return 0;

  }