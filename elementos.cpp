#include <iostream>  // Biblioteca estándar para entrada y salida
using namespace std;

string clasificarElemento(int z) {
    if (z <= 2) {  
        return "Gas noble";
    } else if (z >= 3 && z <= 10) {  
        return "No metal";
    } else if (z >= 11 && z <= 18) {  
        return "Metal alcalino o alcalinotérreo";
    } else if (z >= 19 && z <= 36) {  
        return "Metaloide o no metal";
    } else {  
        return "Elemento pesado";
    }
}

int main() {
    int z;  


    cout << "Ingrese el Número de Quintaesencia: ";
    cin >> z;

 
    cout << "Categoría mística del elemento: " << clasificarElemento(z) << endl;

    return 0;  
