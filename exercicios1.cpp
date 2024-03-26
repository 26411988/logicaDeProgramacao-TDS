//   exercicio imprimir nome e idade

#include <iostream>
int main () {

 std::string nome;

    // Solicita que o usuário digite seu nome
    std::cout << "Digite seu nome e idade : ";

    std::getline(std::cin, nome);

    // Imprime a saudação com o nome fornecido
    std::cout << "Olá, " << nome << "! Bem-vindo ao programa.\n";




return 0;

}


