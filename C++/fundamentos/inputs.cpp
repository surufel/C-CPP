#include<iostream>
// << (operador de inserção) >> (operador de extração)
int main()
{

std::string name;
std::string frase;

std::cout << "qual teu nome dog??: " << '\n';
std::cin >> name; // é como se o input (>>) apontasse ao que seria ele, e o output recebesse a mensagem e imprimisse ela
std::cout << "Oi " << name << " dog" << '\n';

std::cout << "Fala uma frase ai mermao: " << '\n';
std::getline(std::cin >> std::ws, frase);
std::cout << frase << '\n';


    return 0;
}