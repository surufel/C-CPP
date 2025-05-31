#include <iostream>

const double pi = 3.14159265; // Se ele tem const, se eu declarar novamente para mudar, nada ocorre. Isso é uma boa prática de segurança, já que ocasiona em erro mudar.
double raio = 5;
double circunferencia = 2 * pi * raio;

namespace primeiro{
    int x = 1;
}
namespace segundo{
    int x = 2;
}

int main(){
    // using namespace std; -- me permite não ter que digitar o prefixo std:: nos outros comandos. pode causar conflito
    // uma maneira segura é usar std::string e std::cout.

    using std::cout;
    using std::string;
    // vou evitar o uso dela, para aprender o normal.

    cout << circunferencia << "cm" << '\n';

    // Namespace previne conflitos de nomes em projetos largos. Cada variavel necessita de um nome diferente, o namespace permite variaveis com nomes iguais, portanto
    // que o namespace seja diferente.

    int x = 0;

    cout << x; // se não usar nenhum namespace, ele retorna a variável local (no nosso caso, o 0)
    cout << primeiro::x;

    // mas posso declarar 'using' para alterar o local.

    using namespace segundo;

    cout << x;

    return 0;

}