#include <iostream>

int main(){

    // Igual a C, sem mistérios.

    int idade = 28;

    if(idade >= 100){
        std::cout << "Idoso não entra, se manca" << '\n';
    }
    else if(idade > 18){
        std::cout << "Esse é veio, chega maisssnnn" << '\n';
    }
    else if(idade = 18){
        std::cout << "Bem na faixa, brota com nóis" << '\n';
    }
    else{
        std::cout << "filhote nao cola c nois" << '\n';
    }

    int diasemana = 7;
    switch(diasemana)
    {
    case 1:
        std::cout << "belo domingo";
        break;
    case 2:
        std::cout << "bela segunda";
        break;
            case 3:
        std::cout << "bela terça";
        break;
        case 4:
        std::cout << "bela quarta";
        break;
        case 5:
        std::cout << "bela quinta";
        break;
        case 6:
        std::cout << "sextouu";
        case 7:
        std::cout << "belo sabado";
        break;
    default:
        std::cout << "coloca um numero de 1-7 dog";
        break;
    }
    return 0;   
}