#include <iostream>
#include <stdexcept>

using namespace std;

/* Dimensões da matriz */
const int LINHAS = 3;
const int COLUNAS = 4;

/* Estrutura */
struct Tabela {
    int matriz[LINHAS][COLUNAS];
};

/* Preencher a tabela */
void preencherTabela(Tabela& t, int valor) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            t.matriz[i][j] = valor;
        }
    }
}

/* Listar a tabela */
void listarTabela(const Tabela& t) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << t.matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

/* Tipo de operação */
enum Operacao {
    LER,
    ESCREVER
};

/* =====================================================
   1) Versão SEM exceções
   ===================================================== */
bool acederElemento(Tabela& t, int linha, int coluna,
                    int& valor, Operacao op) {
    if (linha < 0 || linha >= LINHAS ||
        coluna < 0 || coluna >= COLUNAS) {
        return false;
    }

    if (op == LER)
        valor = t.matriz[linha][coluna];
    else
        t.matriz[linha][coluna] = valor;

    return true;
}

/* =====================================================
   2) Versão COM exceções
   ===================================================== */
void acederElementoEx(Tabela& t, int linha, int coluna,
                      int& valor, Operacao op) {
    if (linha < 0 || linha >= LINHAS ||
        coluna < 0 || coluna >= COLUNAS) {
        throw out_of_range("Indices invalidos.");
    }

    if (op == LER)
        valor = t.matriz[linha][coluna];
    else
        t.matriz[linha][coluna] = valor;
}

/* Programa de teste */
int main() {
    Tabela t;

    preencherTabela(t, 5);

    cout << "Tabela inicial:\n";
    listarTabela(t);

    cout << "\n=== SEM EXCECOES ===\n";

    int valor = 99;

    // Escrever
    if (acederElemento(t, 1, 2, valor, ESCREVER))
        cout << "Atualizacao efetuada.\n";
    else
        cout << "Erro: indices invalidos.\n";

    // Ler
    valor = 0;

    if (acederElemento(t, 1, 2, valor, LER))
        cout << "Valor lido: " << valor << endl;
    else
        cout << "Erro: indices invalidos.\n";

    cout << "\nTabela apos atualizacao:\n";
    listarTabela(t);

    cout << "\n=== COM EXCECOES ===\n";

    try {
        valor = 123;
        acederElementoEx(t, 2, 3, valor, ESCREVER);

        valor = 0;
        acederElementoEx(t, 2, 3, valor, LER);

        cout << "Valor lido: " << valor << endl;

        // Teste de erro
        acederElementoEx(t, 10, 10, valor, LER);
    }
    catch (const out_of_range& e) {
        cout << "Excecao: " << e.what() << endl;
    }

    return 0;
}