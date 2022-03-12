#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string nombre;
    string apellido;
    string nombreApellido = "";
 
    cout << "\nNombre: "; cin >> nombre;
    cout << "Apellido: "; cin >> apellido;
 
    nombreApellido += nombre + " " + apellido;
 
    cout << "\nNombre completo: " << nombreApellido << endl;
 
    return 0;
}
