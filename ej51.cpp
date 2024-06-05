#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char nombre[20];
  char contra[20];
  int intentos = 0;
  do {
    cout<<"introduzca su nombre ";
    cin>>nombre;
    cout<<"introduzca su contraseña ";
    cin>>contra;
    if (strcmp(nombre, "aylin") == 0 && strcmp(contra, "2b32") == 0) {
      cout<<"Bienvenido al sistema"<<endl;
      break;
    } else 
    {
      intentos++;
      cout<<"Datos incorrectos intentos restantes"<< 3 - intentos<<endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout<<"Ha superado el número máximo de intentos permitidos";
  }
  float Unidad, cantidad, ventaTotal = 0;
   cout<<"si quiere terminar ingrese 0 "<<endl;
  do {
    cout<<"Introduzca la cantidad vendida ";
    cin>>cantidad;
    cout<<"Introduzca el precio del artículo"<<endl;
    cin>>Unidad;
    ventaTotal +=Unidad * cantidad;
    cout<<"hasta ahora ha vendido: "<<ventaTotal<<endl;
  } while (Unidad != 0);
  cout<<"venta total del dia: "<<ventaTotal<<endl;
  return 0;
