#include <iostream>
#include <string>
#include <cctype>


namespace UserInterface {
    bool dadosSaoValidos(std::string valor) {
        return (isupper(valor[0]));
    }
}

namespace DataStore {
    bool dadosSaoValidos(std::string valor) {
        return(valor.length() >= 5 && valor.length() <= 10 ? 1 : 0);
    }
}

using namespace UserInterface;
int main() {

    bool testeUI = dadosSaoValidos("Ola");
    bool testeData = DataStore::dadosSaoValidos("Ola");
    std::cout <<"UI " << testeUI << " : Data : " << testeData;
}