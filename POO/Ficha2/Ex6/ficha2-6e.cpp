#include <iostream>
#include <stdexcept>

using namespace std;

const int LINHAS = 3;
const int COLUNAS = 4;

struct Tabela {
    int matriz[LINHAS][COLUNAS];
};

enum Operacao {
    LER,
    ESCREVER
};

void preencherTabela(Tabela& t, int valor) {
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            t.matriz[i][j] = valor;
}

void listarTabela(const Tabela& t) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++)
            cout << t.matriz[i][j] << "\t";
        cout << endl;
    }
}

void acederElementoEx(Tabela& t,
                      int linha,
                      int coluna,
                      int& valor,
                      Operacao op) {

    if (linha < 0 || linha >= LINHAS ||
        coluna < 0 || coluna >= COLUNAS) {
        throw out_of_range("Indices invalidos");
    }

    if (op == LER)
        valor = t.matriz[linha][coluna];
    else
        t.matriz[linha][coluna] = valor;
}

/*--------------------------------------------------
   testa() SEM capturar a excecao
   A excecao propaga-se para main()
---------------------------------------------------*/
void testa(Tabela& t, int linha, int coluna) {
    int valor;

    acederElementoEx(t, linha, coluna, valor, LER);

    cout << "Valor lido = " << valor << endl;
}

int main() {
    Tabela t;
    preencherTabela(t, 10);

    cout << "Tabela:\n";
    listarTabela(t);

    cout << "\n--- Caso 1: dados validos ---\n";

    try {
        testa(t, 1, 2);
    }
    catch (const exception& e) {
        cout << "Excecao capturada em main(): "
             << e.what() << endl;
    }

    cout << "\n--- Caso 2: dados invalidos ---\n";

    try {
        testa(t, 10, 20);
    }
    catch (const exception& e) {
        cout << "Excecao capturada em main(): "
             << e.what() << endl;
    }

    return 0;
}