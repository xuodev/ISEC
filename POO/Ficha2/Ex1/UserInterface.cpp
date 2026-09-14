#include "UserInterface.h"
#include <cctype>

namespace UserInterface {
    bool dadosSaoValidos(std::string valor) {
        if (valor.empty()) {
            return false;
        }
        return isupper(static_cast<unsigned char>(valor[0]));
    }
}