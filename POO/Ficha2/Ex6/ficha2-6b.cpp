#include <iostream>
using namespace std;

/* Dimensões conhecidas em tempo de compilação */
const int LINHAS = 3;
const int COLUNAS = 4;

/* Estrutura Tabela */
struct Tabela {
    int matriz[LINHAS][COLUNAS];
};

/* Obtém o valor de um elemento da matriz */
bool obterValor(const Tabela& t, int linha, int coluna, int& valor) {
    if (linha < 0 || linha >= LINHAS ||
        coluna < 0 || coluna >= COLUNAS) {
        return false; // índices inválidos
    }

    valor = t.matriz[linha][coluna];
    return true;
}

/* Atualiza o valor de um elemento da matriz */
bool atualizarValor(Tabela& t, int linha, int coluna, int novoValor) {
    if (linha < 0 || linha >= LINHAS ||
        coluna < 0 || coluna >= COLUNAS) {
        return false; // índices inválidos
    }

    t.matriz[linha][coluna] = novoValor;
    return true;
}

/* Preenche toda a matriz com um valor */
void preencherTabela(Tabela& t, int valor) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            t.matriz[i][j] = valor;
        }
    }
}

/* Lista o conteúdo da tabela */
void listarTabela(const Tabela& t) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << t.matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

/* Programa de teste */
int main() {
    Tabela t;

    preencherTabela(t, 5);

    cout << "Conteudo da tabela:\n";
    listarTabela(t);

    return 0;
}