#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char contra[12], nombre[20];
    int co, precio, cantidad, total, co2;
    co = 0;
    co2 = 0;
    
    do {
        co = co + 1;
        cout << "usuario:\n";
        cin >> nombre;
        cout << "contraseña:\n";
        cin >> contra;   
        if (strcmp(contra, "2b32") == 0 && strcmp(nombre, "Aylin") == 0) {
            cout << "Bienvenido al sistema\n";
            break;
        }
        if (co >= 3) {
            cout << "Has excedido el número máximo de intentos\n";
            return 0;
        }
    } while (co < 3);

    do {
        cout << "introduzca el precio del articulo\n";
        cin >> precio;
        if (precio < 0) {
            cout << "ingrese un numero positivo\n";
            continue;
        }

        if (precio == 0) {
            break;
        }

        cout << "introduzca la cantidad de unidades vendidas\n";
        cin >> cantidad;

        if (cantidad < 0) {
            cout << "ingrese un numero positivo\n";
            continue;
        }

        total = precio * cantidad;
        co2 += total;

    } while (cantidad > 0);

    cout << "El importe total es de " << co2 << "\n";

    return 0;
}