#include "DataStore.h"

namespace DataStore {
    bool dadosSaoValidos(std::string valor) {
        return (valor.length() >= 5 && valor.length() <= 10);
    }
}