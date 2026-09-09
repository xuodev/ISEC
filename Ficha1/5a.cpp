#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main() {

    string numerosExt[] = {"um", "dois", "tres", "quatro", "cinco","seis", "sete", "oito", "nove", "dez"};
    string numerosInt[] = {"1","2","3","4","5","6","7","8","9","10"};
    string numero;

    while (true){

        bool encontrado = false; cout << "Introduza um numero" << endl; getline(cin, numero);

        for (int i=0; i<=10;i++){ if (numero == numerosInt[i]){ encontrado = true; cout << numerosExt[i] << endl; break; } }

        if(!encontrado){ for(int i=0; i<10;i++){ if (numero == numerosExt[i]){ encontrado = true; cout << numerosInt[i] << endl; break; }
        } } if (encontrado == false){ cout << "numero invalido" << endl; continue; }

        cout << "Clique ENTER para continuar" << endl; getline(cin,numero); }

    return 0;

}