#include <iostream>
using namespace std;
int main()
{
    int hora;
    cout<<"Ingrese la hora en formato 24hrs. ";
    do
    {
      cin>>hora;
      if (hora>24)
       {
          cout<<"No es una hora \n"<<"por favor vuelva a ingresar la hora. "<<endl;
       }   
      else if (hora>12 && hora<19)
	    {
	     cout<<"BUENAS TARDES";
         break;
	    }
       else if  (hora<12 && hora>1)
	   {
	      cout<<"BUENOS DIAS";
           break;
	   }
      else if (hora>19 && hora<=24)
       {
    	 cout<<"BUENAS  NOCHES";
         break;
       } 
    } while (hora);
	return 0;
}
