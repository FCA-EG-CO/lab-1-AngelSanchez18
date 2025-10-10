#include <iostream>
using namespace std;
int main(){
    float km;
    cout << "Ingrese el numero de kilometros recorridos: ";
    cin >> km;
    float millas = km * 0.621;
    cout << "Su distancia recorrida en millas es: " << millas << endl;
    return 0;
}