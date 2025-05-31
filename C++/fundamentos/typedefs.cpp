#include <iostream>

// typedef int numero_t; -- o "_t" é só uma prática para deixar claro que é um dado com typedef utilizado.
// typedef std::string texto_t;

/*
usar 'using' funciona da mesma forma, para esse cenário, se utilizaria
using numero_t = int;
using texto_t = std::string;

using funciona melhor em templates
typedef é usado quando tem benefícios claros, e para ajudar com leitura. 
*/

using numero_t = int;
using texto_t = std::string;

int main(){

numero_t idade = 18;
texto_t nome = "Tiburcio";

std::cout << idade << '\n';
std::cout << nome << '\n';

return 0;
}