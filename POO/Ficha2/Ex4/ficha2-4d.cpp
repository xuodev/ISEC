#include <iostream>
using namespace std;

/* =====================================================
   1. PASSAGEM POR CÓPIA
   A variável original NÃO é alterada.
   ===================================================== */
void porCopia(int x)
{
    x = 100;
}

/* =====================================================
   2. PASSAGEM POR REFERÊNCIA
   A variável original É alterada.
   ===================================================== */
void porReferencia(int &x)
{
    x = 100;
}

/* =====================================================
   3. REFERÊNCIA NORMAL
   Só aceita variáveis (lvalues).
   ===================================================== */
void referenciaNormal(int &x)
{
    cout << "Referencia normal: " << x << endl;
}

/*
Exemplo inválido:

referenciaNormal(5);

ERRO:
Uma referência normal (int &) não pode referir
um valor literal.
*/

/* =====================================================
   4. REFERÊNCIA CONSTANTE
   Pode receber variáveis e literais.
   ===================================================== */
void referenciaConstante(const int &x)
{
    cout << "Referencia constante: " << x << endl;
}

/*
Valido:

referenciaConstante(5);

Como é const, não podemos fazer:

x = 10; // ERRO
*/

/* =====================================================
   5. TROCA USANDO REFERÊNCIAS
   Exemplo clássico de passagem por referência.
   ===================================================== */
void troca(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

/* =====================================================
   6. RETORNO DE FUNÇÃO POR REFERÊNCIA
   Retorna uma referência válida.
   ===================================================== */
int& maior(int &a, int &b)
{
    if (a > b)
        return a;

    return b;
}

/* =====================================================
   7. EXEMPLO ERRADO DE RETORNO POR REFERÊNCIA
   NÃO FAZER ISTO.
   ===================================================== */
/*
int& funcErrada()
{
    int x = 5;
    return x;
}

Quando a função termina, x deixa de existir.
A referência fica inválida.
*/

/* =====================================================
   MAIN
   ===================================================== */
int main()
{
    cout << "===== PASSAGEM POR COPIA =====" << endl;

    int a = 5;

    porCopia(a);

    cout << "a = " << a << endl; // continua 5


    cout << "\n===== PASSAGEM POR REFERENCIA =====" << endl;

    int b = 5;

    porReferencia(b);

    cout << "b = " << b << endl; // passa a 100


    cout << "\n===== REFERENCIA NORMAL =====" << endl;

    int c = 20;

    referenciaNormal(c);

    // referenciaNormal(5); // ERRO


    cout << "\n===== REFERENCIA CONSTANTE =====" << endl;

    referenciaConstante(c);
    referenciaConstante(5); // OK


    cout << "\n===== TROCA POR REFERENCIA =====" << endl;

    int x = 5;
    int y = 10;

    troca(x, y);

    cout << "x = " << x << endl; // 10
    cout << "y = " << y << endl; // 5


    cout << "\n===== RETORNO POR REFERENCIA =====" << endl;

    int n1 = 20;
    int n2 = 30;

    maior(n1, n2) = 100;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;


    cout << "\n===== PONTEIRO PODE MUDAR DE ALVO =====" << endl;

    int p1 = 1;
    int p2 = 2;

    int *ptr = &p1;

    cout << "*ptr = " << *ptr << endl;

    ptr = &p2; // agora aponta para p2

    cout << "*ptr = " << *ptr << endl;


    cout << "\n===== REFERENCIA NAO PODE MUDAR DE ALVO =====" << endl;

    int r1 = 5;
    int r2 = 10;

    int &ref = r1;

    ref = r2;

    cout << "r1 = " << r1 << endl;
    cout << "r2 = " << r2 << endl;

    /*
    ref continua a referir r1.

    A instrução:

        ref = r2;

    não faz a referência passar para r2.

    Apenas copia o valor de r2 para r1.
    */


    cout << "\n===== PONTEIRO PODE SER NULLPTR =====" << endl;

    int *ptrNulo = nullptr;

    if (ptrNulo == nullptr)
    {
        cout << "Ponteiro nulo." << endl;
    }


    cout << "\n===== REFERENCIA DEVE SER INICIALIZADA =====" << endl;

    /*
    int &r; // ERRO

    Uma referência tem sempre de estar ligada
    a uma variável válida.
    */


    return 0;
}