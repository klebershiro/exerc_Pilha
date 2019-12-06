#include <stdlib.h>

using namespace std;

class Pilha {
private:
    int * pilha;
    int topo;
    int maximo;

public:
    Pilha();
    Pilha(int n);
    bool empty();
    bool full();

    string print_pilha();

    bool push(int elem);
    int pop();

    bool gerar_aleatorio();
    bool pilha_ordenada();
};
