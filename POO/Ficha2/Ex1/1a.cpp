#include <iostream>
#include <string>
#include <cctype>

using namespace std;

namespace UserInterface {
    bool dadosSaoValidos(string valor) {
        return (isupper(valor[0]));
    }
}

namespace DataStore {
    bool dadosSaoValidos(string valor) {
        return(valor.length() >= 5 && valor.length() <= 10 ? 1 : 0);
    }
}

int main() {
    bool testeUI = UserInterface::dadosSaoValidos("Ola");
    bool testeData = DataStore::dadosSaoValidos("Ola");
    cout <<"UI " << testeUI << " : Data : " << testeData;
}