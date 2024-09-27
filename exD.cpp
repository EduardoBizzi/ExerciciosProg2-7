#include <iostream>
#include <ctime>
using namespace std;

typedef struct{
    int carta;
    int naipe;
}Carta;

int main(){
    Carta x;
    string naipes[4], cartas[13];
    naipes[0] = " de ouro.";
    naipes[1] = " de espada.";
    naipes[2] = " de copas.";
    naipes[3] = " de paus.";
    cartas[0] = "A";
    cartas[1] = "2";
    cartas[2] = "3";
    cartas[3] = "4";
    cartas[4] = "5";
    cartas[5] = "6";
    cartas[6] = "7";
    cartas[7] = "8";
    cartas[8] = "9";
    cartas[9] = "10";
    cartas[10] = "J";
    cartas[11] = "Q";
    cartas[12] = "K";

    srand(time(NULL));

    cout << "Jogador 1:" << endl;
    for(int i = 0;i < 5;i++){
        x.carta = rand() % 13;
        x.naipe = rand() % 4;
    

        cout << cartas[x.carta] << naipes[x.naipe] << endl;
    }
    cout << endl;

    cout << "Jogador 2:" << endl;
    for(int i = 0;i < 5;i++){
        x.carta = rand() % 13;
        x.naipe = rand() % 4;

       cout << cartas[x.carta] << naipes[x.naipe] << endl;
    }

}