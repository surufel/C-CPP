#include <iostream>


// Esse código é pseudo-randomico, não é totalmente randomico, mas é bem próximo
// mas sua prática é eficaz para casos como jogos de dados, que é o caso que vamos usar.

int main(){
    srand(time(NULL)); // gerador de numero aleatório, ele vai utilizar uma seed (que geralmente é o calendario), vamos passar como NULL

    int num = (rand() % 20) + 1; // A função rand vai gerar um número de 0 a 32.767. Para filtrar, por exemplo, em um dado, colocaremos módulo com o lado máximo de um dado
    // Nesse caso, será 20. O +1 é usado para o dado não ir de 0 a 19, e sim, de 1 a 20.

    std::cout << num; 

    return 0;


}