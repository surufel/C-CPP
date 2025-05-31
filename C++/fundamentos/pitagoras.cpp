#include <iostream>
#include <cmath>

//    z = std::max(x, y); resulta no maximo
//    z = std::min(x, y); resulta no minimo
//    z = pow(2,4);  2⁴ = 16
//    z = sqrt(9); reuslta em 3
//    abs(-9); resulta em 9
//    z = round(3.14) -> 3
//    z = ceil(9.9) -> 10
//    z = floor(9.9) -> 9

int main(){

    double a;
    double b;
    double c;

    std::cout << "Vamos fazer calculinhos, qual é o valor de a?: " << '\n';
    std::cin >> a;
    std::cout << "e qual é o valor de b?: " << '\n';
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "bora de pitas dog, isso dai resulta em: " << c << '\n';
    return 0;
}