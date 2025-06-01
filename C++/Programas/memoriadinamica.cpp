#include <iostream>

int main(){
    int *pNum = NULL; // Um ponteiro recebendo valor de vazio, para adicionar valor ao Heap, em vez do stack. É boa prática fazer isso com todo ponteiro.
    pNum = new int; // o dado new refere ao endereço de memória.
    *pNum = 21;

    std::cout << "Endereço: " << pNum << '\n';
    std::cout << "Valor: " << *pNum << '\n';

    delete pNum; // deletando o pointer, livrando memória do endereço (evita vazamento de dados);

    return 0;
}