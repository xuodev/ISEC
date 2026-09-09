#include <iostream>
#include <string>
using namespace std;
int main() {
    int idade;
    string nome;
    cout << "Insira o seu nome \n";
    getline(cin, nome);
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

    cout << "O seu nome e " << nome << " e a sua idade e " << idade << endl;
    cout << "O seu nome tem " << nome.length() << " caracteres" << endl;

    for (int i = 0; i < nome.length(); i++) {
        cout << nome[i] << endl;
    }

    cout << "-----" << endl;

    for (const char carater : nome) {
        cout << carater << "\n";
    }

    return 0;
}