#include <iostream>

int main(){
    std::cout << "Hello, World!" << std::endl; 
// Explicando: O std (standard) output vai resultar o valor, o valor resultado é feito pelo sinal de output (<<) que indica na direita o que seria o output.
// O std:endl salta uma linha, indica que é o fim de uma linha.
    std::cout << "Eu adoro programar" << '\n'; // O \n pode ser utilizado dessa forma, para evitar escrever muito. PORÉM, o std::endl limpa o buffer de output.
    std::cout << "De fato, é interessante!";
    return 0;
}

