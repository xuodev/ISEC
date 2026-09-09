#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome;
    cout << "Introduza o seu nome" << endl;
    getline(cin,nome);
    string nomeCompare;
    string nomeCompleto;
    int count = 0;

    nome += ' ';
    for (const char carater: nome) {
        if (carater == ' '){
            cout << nomeCompare << endl;
            if (nomeCompare == "Fernando") {
                cout << "Eu conheco o Fernando" << "\n";
            }
            nomeCompare = "";
        }else{
            nomeCompare += carater;
        }
    }

}
