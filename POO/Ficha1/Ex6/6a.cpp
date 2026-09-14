#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string numerosExt[] = {"um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez"};
    string numerosInt[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

    string nomeFicheiro;
    cout << "Introduza o nome do ficheiro: ";
    getline(cin, nomeFicheiro);

    ifstream ficheiro(nomeFicheiro);

    if (!ficheiro.is_open()) {
        cout << "Erro ao abrir o ficheiro!" << endl;
        return 1;
    }

    string numero;

    while (ficheiro >> numero) {
        bool encontrado = false;


        for (int i = 0; i < 10; i++) {
            if (numero == numerosInt[i]) {
                encontrado = true;
                cout << numerosExt[i] << endl;
                break;
            }
        }

        if (!encontrado) {
            for (int i = 0; i < 10; i++) {
                if (numero == numerosExt[i]) {
                    encontrado = true;
                    cout << numerosInt[i] << endl;
                    break;
                }
            }
        }

        if (!encontrado) {
            cout << "numero invalido" << endl;
        }
    }

    ficheiro.close();
    return 0;
}