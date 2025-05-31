#include <iostream>

/* converte a data de um para outro
 implicita = automática
 explicita = precede o valor com o novo tipo de dado*/


int main(){

double x = (int) 3.14;
std::cout << x << '\n';

char foda = 100;
std::cout << foda << '\n'; // imprime valores em ASCII -- nesse caso, a letra 'd' que é representada por 100 em binário.

return 0;

}