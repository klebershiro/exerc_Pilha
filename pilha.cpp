#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"

using std::string;
using std::stringstream;


Pilha::Pilha(){}

Pilha::Pilha(int n){
    topo = -1;
    pilha = new int[n];
    maximo = n;
}


bool Pilha::empty() {
    return (topo == -1);
}

bool Pilha::full(){
    return topo == maximo - 1;
}


string Pilha::print_pilha(){
    stringstream imprimi_pilha;

    imprimi_pilha << "";
    if (empty()){
        imprimi_pilha << "A Pilha esta vazia.";
    } else {
        imprimi_pilha << "[";
        for (int i = 0; i <= topo; i++){
            imprimi_pilha << pilha[i] << " ";
        }
        imprimi_pilha << "]";
    }
    return imprimi_pilha.str();
}


bool Pilha::push(int elem){
    if (full())
        return false;
    topo++;
    pilha[topo] = elem;
    return true;
}

int Pilha::pop(){
    if (empty())
        return 0;
    int elem = pilha[topo];
    topo--;
    return elem;
}


bool Pilha::gerar_aleatorio(){
    if (full())
        return false;
    
    srand(time(0));
    while (topo != 9){
        topo++;
        int numero_aleatorio = rand() % 100;
        pilha[topo]= numero_aleatorio;
    } 
    return true;
}


bool Pilha::pilha_ordenada(){
    if (full()){
        for (int i = 1; i <= 11; i++){
            if (pilha[i-1] > pilha[i]){
                return true;
            }
            return false;
        }
    }
    return false;
}