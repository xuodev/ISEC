#include <iostream>
using namespace std;
int main() {
    unsigned int idade;
    char nome[20];
    printf("Insira o seu Nome \n");
    scanf("%s", &nome);
    printf("Insira a sua Idade \n");
    scanf("%d", &idade);

    printf("O Seu nome é %s, e a sua idade é %d \n", nome, idade);
    return 0;
}