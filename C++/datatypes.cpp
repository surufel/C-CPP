#include <iostream>

int main(){

int x; // inteiros
int y;
x = 5;
y = 8;
int sum;
sum = x+y;

std::cout << x << '\n';
std::cout << y << '\n';
std::cout << sum << '\n';

char nota = 'A'; // char - só um caractere
std::cout << nota << '\n';

bool legal = true;// booleano - verdadeiro ou falso

std::string nome = "Tiburcio";
std::cout << nome << '\n';

// como citar variável com string de texto?

int idade = 65;

std::cout << "Tiburcio tem " << idade << " anos de idade." << '\n';


}