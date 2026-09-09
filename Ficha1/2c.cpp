#include <iostream>
using namespace std;
int main() {
    int idade;
    char nome[20];
    cout << "Insira o seu nome \n";
    cin.getline(nome, 20);
    cout << "Insira a sua idade \n";
    cin >> idade;

    while (true) {
        if (idade < 0) {
            cin.clear();
            cout << "Insira a sua idade \n";
            cin >> idade;
        }else {
            break;
        }
    }

    cout << "O seu nome e " << nome << " e a sua idade e " << idade;
    return 0;
}