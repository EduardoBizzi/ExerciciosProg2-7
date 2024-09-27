#include <iostream>
using namespace std;

struct Vetor{
 float x;
 float y;
 float z;
};

void somadestruct (Vetor u, Vetor v){
    float a, b, c;
    a = v.x + u.x;
    b = v.y + u.y;
    c = v.z + u.z;
    cout << "Soma dos valores:" << endl
        << a << endl
        << b << endl
        << c << endl;
}

int main(){
   Vetor v, u;
   cin >> v.x >> v.y >> v.z
    >> u.x >> u.y >> u.z;
    somadestruct(v,u);
}