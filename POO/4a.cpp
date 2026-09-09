#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string palavras;

    while (true){
        cout << "Introduza uma palavra(s)" << endl;
        getline(cin, palavras);

        istringstream my_stream(palavras);

        string palavra;

        if (palavras == "fim"){
            break;
        }


        while (my_stream >> palavra) {

            string palavraRe = "";

            for(int i=palavra.length() - 1; i>=0; i--){
                palavraRe += palavra[i];
            }

            cout << palavraRe;

            if (palavra == palavraRe){
                cout << " palíndromo";
            }

            palavraRe = "";
            cout << endl;

        }

        cout << "Carregue ENTER para prosseguir";
        getline(cin, palavra);
    }

    return 0;

}