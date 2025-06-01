#include<iostream>

char op;
double C,F;
char repetir;
// 1.8 * C = F - 32
int main(){
std::cout << "**************************************************" << '\n';
std::cout << '\n';
std::cout << "CONVERSOR DE CELSIUS-FAHRENHEINT"  << '\n';
std::cout << "C -> CELSIUS | F -> FAHRENHEINT" << '\n';
std::cout << '\n';
std::cout << "**************************************************" << '\n';
std::cout << "INSIRA A TEMPERATURA A SER CONVERTIDA:";
std::cin >> op;

if(op == 'C' || op == 'c')
{
    std::cout << "INFORME A TEMPERATURA EM CELSIUS A SER CONVERTIDA: ";
    std::cin >> C;
    F = C * 1.8 + 32;
std::cout << "**************************************************" << '\n';
    std::cout << "A TEMPERATURA, EM FAHRENHEINT, É: " << F << '\n';
std::cout << "**************************************************" << '\n';
}
else if(op = 'F' || op == 'f')
{
    std::cout << "INFORME A TEMPERATURA EM FAHRENHEINT A SER CONVERTIDA: ";
    std::cin >> F;
    C = (F - 32) / 1.8;
std::cout << "**************************************************" << '\n';
    std::cout << "A TEMPERATURA, EM CELSIUS, É: " << C << '\n';
std::cout << "**************************************************" << '\n';
}
else
{
    std::cout << "Temperatura inválida." << '\n';
}
} 