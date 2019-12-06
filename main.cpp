#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include "pilha.h"

using namespace std;

int main(){
    
    //n = 9, pois na pilha os elementos estao de 0 a 9
    int n = 9;
    
    Pilha pilha1(n);
    Pilha pilha2(n);
    Pilha pilha3(n);

    int contador = 0;

    // gerando numeros aleatorios para a Pilha_1
    pilha1.gerar_aleatorio();

    while(true){

        cout << "\n\n";
        cout << "\n---------------------------------------------------------------";
        cout << "\n                   O JOGO DAS 3 PILHAS                         ";
        cout << "\n      Objetivo: ordenar os numeros em uma unica pilha          ";
        cout << "\n---------------------------------------------------------------";
        cout << "\n";

        // preenchendo as Pilhas
        cout << "\nA Pilha_1: \n";
        cout << pilha1.print_pilha();
        if (pilha1.pilha_ordenada()){
            cout << "\nParabens a Pilha_1 esta ordenada!";
            break;
        }

        cout << "\n\nA Pilha_2: \n";
        cout << pilha2.print_pilha();
        if (pilha2.pilha_ordenada()){
            cout << "\nParabens a Pilha_2 esta ordenada!";
            break;
        }
        
        cout << "\n\nA Pilha_3: \n";
        cout << pilha3.print_pilha();
        if (pilha3.pilha_ordenada()){
            cout << "\nParabens a Pilha_3 esta ordenada!";
            break;
        }

        cout << "\n\n\nOPCOES:";
        cout << "\n0 - sair";
        cout << "\n1 - movimentar as pilhas";

        cout << "\n\nInforme sua opcao: ";
        int opc;
        cin >> opc;
        
        if (opc == 0) {
            break;
        }
        if (opc == 1) {
            cout << "\nEscolha DE qual pilha deseja TIRAR o elemento: ";
            cout << "\nopcao 1: Pilha_1 \nopcao 2: Pilha_2 \nopcao 3: Pilha_3\n";
            int s;
            cin >> s;
            
            cout << "\nEscolha PARA qual pilha deseja COLOCAR o elemento: ";
            cout << "\nopcao 1: Pilha_1 \nopcao 2: Pilha_2 \nopcao 3: Pilha_3\n";
            int e;
            cin >> e;

            if (s == 1 && e == 2){
                pilha2.push(pilha1.pop());
                contador += 1;
            } else if (s == 1 && e == 3) {
                pilha3.push(pilha1.pop());
                contador += 1;
            } else if (s == 2 && e == 1) {
                pilha1.push(pilha2.pop());
                contador += 1;
            } else if (s == 2 && e == 3) {
                pilha3.push(pilha2.pop());
                contador += 1;
            } else if (s == 3 && e == 1) {
                pilha1.push(pilha3.pop());
                contador += 1;
            } else if (s == 3 && e == 2) {
                pilha2.push(pilha3.pop());
                contador += 1;
            } else{
                cout << "\nESCOLHAS INCORRETAS. OPCOES DE 1 A 3";
                continue;
            }
        }
    }
    cout << "\n\nO jogo teve " << contador << " movimentos entre as pilhas.\n";
    cout << "\n\n\n------ Obrigado por jogar ------\n\n";

    return 0;
}
