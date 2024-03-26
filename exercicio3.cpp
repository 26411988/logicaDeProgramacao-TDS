#include <iostream>

int main() {
    int numero;

    // Solicita que o usuário digite um número
    std::cout << "Digite um número: ";

    // cin = usada para armazenar na variavel do numero
    std::cin >> numero;
   

    // Calcula e imprime o dobro do número fornecido std::cout << *2
    std::cout << "O dobro do número é: " << (numero * 2) << std::endl; 

    return 0;
}