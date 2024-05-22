#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	
	string texto;
	string clave = "benito";
	
	cout << "Bienvenido a la validacion" << endl;
	cout << "Ingresa la clave de acceso" << endl;
	cin >> texto;
	
	if (texto == clave)
	{
		cout << "La validacion es correcta" << endl;
		return 0;
	}
	else
	{	
		cout << "Error" << endl;
		return 5;
	}

}

