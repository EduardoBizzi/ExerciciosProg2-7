#include <iostream>
#include <string>
using namespace std;

typedef struct {
    int horas;
    int min;
} Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    Horario horario;
    Data data;
    string texto;
} Compromisso;

void compromissos (Compromisso *y){
    cout << "Escreva a hora" << endl;
    cin >> y->horario.horas;
    cout << "Escreva os minutos:" << endl;
    cin >> y->horario.min;
    cout << "Teste" << endl;
    cout << "Escreva o dia, mes e ano respectivamente:" << endl;
    cin >> y->data.dia >> y->data.mes >> y->data.ano;
    cout << "Descreva o seu compromisso:" << endl;
    cin.get();
    getline (cin,y->texto);
}

int main(){
    int x;
    cout << "Escreva as informações dos seus próximos compromissos." << endl << "Quantos compromissos voce ira marcar?" << endl;
    cin >> x;
    Compromisso y[x];
    for(int i = 0;i < x;i++){
        compromissos(&y[i]);
    }
}