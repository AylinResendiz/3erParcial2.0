#include <iostream>
using namespace std;
int main()
{
    int hora;
    cout<<"Ingrese la hora ";
    cin>>hora;
    if (hora>12 && hora<19)
	{
	cout<<"BUENAS TARDES";
	}
    else if  (hora<12 && hora>1)
	{
	cout<<"BUENOS DIAS";
	}
    else if (hora>19 && hora<24)
    {
    	cout<<"BUENAS  NOCHES";
    }
	return 0;
}
