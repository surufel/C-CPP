#include <iostream>

int main(){
    std::string usuario;
    std::cout << "Digite o seu nome: ";
    std::getline(std::cin, usuario); 

    if (usuario.empty()){
        std::cout << "Você não inseriu um nome." << '\n';
        return 0;
    }

    if (usuario.length() > 21){
        std::cout << "Seu nome não pode ultrapassar 21 caracteres." << '\n';
        return 0;
    }
    else{
        usuario.append("@gmail.com"); // Essa função adiciona algo ao fim de uma string.
        std::cout << "Bem vindo, " << usuario << '\n';
    }

    //std::cout << usuario.at(0); -- Dita a letra na posição 0, ou seja, na primeira letra
    //std::cout << usuario.insert(0, '$') -- Adiciona uma letra na posição indicada, nesse caso, iria imprimir um "$..."
    //std::cout << usuario.find(' ') -- Ele descobre o index (posição) do caractere citado em parentesis, no caso, a posição onde encontrar o espaço no usuario.
    //name.erase(0, 3) -- Ele apaga parte do nome, o primeiro argumento é onde começa, e o segundo é onde termina. (No caso, vai de 0 até 3)

     usuario.clear(); // Limpa a string do buffer, se usar antes do cout, assim que o cout for chamar a variável, nada vai sair.


return 0;
}