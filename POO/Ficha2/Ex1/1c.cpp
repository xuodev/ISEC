#include <iostream>
#include "UserInterface.h"
#include "DataStore.h"

int main() {
    std::string entrada = "Ola";

    bool testeUI = UserInterface::dadosSaoValidos(entrada);
    bool testeData = DataStore::dadosSaoValidos(entrada);

    std::cout << "UI " << testeUI << " : Data : " << testeData << std::endl;

    return 0;
}