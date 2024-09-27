#include <iostream>
using namespace std;

typedef struct{
    float x;
    string i;
}Numeroimaginario;

void soma (Numeroimaginario a, Numeroimaginario b){
    if(a.i == b.i){
        a.x += b.x;
        cout << "Soma: " << a.x << " " << a.i;
    }
    else{
        cout << a.x << a.i << " + " << b.x << b.i << endl;
    }
}

void subtracao (Numeroimaginario a, Numeroimaginario b){
    if(a.i == b.i){
        a.x -= b.x;
        cout << "Subtracao: " << a.x << " " << a.i;
    }
    else{
       cout << a.x << a.i << " - " << b.x << b.i << endl;
    }
}

void multiplicacao (Numeroimaginario a, Numeroimaginario b){
    if(a.i == b.i){
        a.x *= b.x;
        cout << "Multiplicacao: " << a.x << b.i;
    }
    else{
        a.x *= b.x;
        cout << "Multiplicacao: " << a.x << a.i << b.i;
    }
}

int main(){
    Numeroimaginario z, w;
    cin >> z.x >> z.i;
    cin >> w.x >> w.i;
    soma(z,w);
    subtracao(z,w);
    multiplicacao(z,w);

}