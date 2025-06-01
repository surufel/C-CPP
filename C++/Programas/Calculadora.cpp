#include <iostream>

using std::cout;
double x;
double y;
double res;
char op;

int main(){
cout << "#########################################################" << '\n';
cout << '\n';
cout << "CALCULADORA SIMPLES" << '\n';
cout << "INSIRA UM OPERADOR ARITMETICO (+, -, *, /)" << '\n';
cout << '\n';
cout << "#########################################################" << '\n';
std::cin >> op;
switch(op){
    case '+':
    cout << "INSIRA O SEU PRIMEIRO NUMERO" << '\n';
    std::cin >> x;
    cout << "INSIRA O SEU SEGUNDO NUMERO" << '\n';
    std::cin >> y;
    res = x+y;
    cout << "O RESULTADO E: " << res;
    break;
    case '-':
    cout << "INSIRA O SEU PRIMEIRO NUMERO" << '\n';
    std::cin >> x;
    cout << "INSIRA O SEU SEGUNDO NUMERO" << '\n';
    std::cin >> y;
    res = x-y;
    cout << "O RESULTADO E: " << res << '\n';
    break;
    case '*':
    cout << "INSIRA O SEU PRIMEIRO NUMERO" << '\n';
    std::cin >> x;
    cout << "INSIRA O SEU SEGUNDO NUMERO" << '\n';
    std::cin >> y;
    res = x*y;
    cout << "O RESULTADO E: " << res << '\n';
    break;
    case '/':
    cout << "INSIRA O SEU PRIMEIRO NUMERO" << '\n';
    std::cin >> x;
    cout << "INSIRA O SEU SEGUNDO NUMERO" << '\n';
    std::cin >> y;
    res = x/y;
    (y == 0) ? cout << "Divisão por zero não tem valor determinado." << '\n' : cout << "O RESULTADO E: " << res << '\n';
    break;
    default:
        cout << "Operador desconhecido" << '\n';
        break;
}
return 0;
}

