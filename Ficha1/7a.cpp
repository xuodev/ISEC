#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() { string numeroExt; string numeroInt; string numerosExt[] = {"um", "dois", "tres", "quatro", "cinco","seis", "sete", "oito", "nove", "dez"}; string numerosInt[] = {"1","2","3","4","5","6","7","8","9","10"}; string numero;

    while (true){

        bool encontrado = false; cout << "Introduza um numero (inteiro)" << endl; getline(cin, numeroInt);

        cout << "Introduza um numero (extenso)" << endl; getline(cin, numeroExt);

        if (numeroExt == "fim"){ break; }

        for(int i=1; i<=10; i++){ if (numeroInt == numerosInt[i]){ if(numeroExt == numerosExt[i]){ encontrado = true; break; } } }

        if (encontrado){ cout << "certo!"; }else{ cout << "errado!"; }

        cout << "Clique ENTER para continuar" << endl; getline(cin,numero); }

    return 0;

}