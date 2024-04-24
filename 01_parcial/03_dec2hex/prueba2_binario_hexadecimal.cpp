#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	
	int num1;
	int num2;
	
	cout << "Eliga una opcion: " << endl;
	cout << "1) Binarios a Letras y Decimales" << endl;
	cout << "2) Decimales a Binarios a Hexadecimales" << endl;
	
	
	cin >> num2;
	
	switch (num2) {
		
	case 1:	
	cout << "Introduzca el binario de alguno de estos numeros o letras " << endl;
	cout << " 0 = 0000" << endl;
	cout << " 1 = 0001" << endl;
	cout << " 2 = 0010" << endl;
	cout << " 3 = 0011" << endl;
	cout << " 4 = 0100" << endl;
	cout << " 5 = 0101" << endl;
	cout << " 6 = 0110" << endl;
	cout << " 7 = 0111" << endl;
	cout << " 8 = 1000" << endl;
	cout << " 9 = 1001" << endl;
	cout << " A = 1010" << endl;
	cout << " b = 1011" << endl;
	cout << " C = 1100" << endl;
	cout << " d = 1101" << endl;
	cout << " E = 1110" << endl;
	cout << " F = 1111" << endl;
	cout << "Convertir decimales a binario a hexadecimal" << endl;
	cin >> num1;

  if (num1 == 0000) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 0001) {
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << " ";
      cout << endl;
  } else if (num1 == 0010) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
	  cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 0011) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 0100) {
      cout << " ";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
  } else if (num1 == 0101) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 0110) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 0111) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
  } else if (num1 == 1000) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 1001) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 1010) {
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << " ";
      cout << endl;
  } else if (num1 == 1011) {
      cout << " ";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 1100) {
    cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 1101) {
      cout << " ";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << "|";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 1110) {
    cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
  } else if (num1 == 1111) {
    cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << "-";
      cout << " ";
      cout << endl;
      cout << "|";
      cout << " ";
      cout << " ";
      cout << endl;
      cout << " ";
      cout << " ";
      cout << " ";
      cout << endl;
  } else {
    cout << "Numero Invalido" << endl;
  }break;


	case 2:
		cout << "Ingrese el numero decimal: " << endl;;
		int n;
		int bin = 0;
		int cont = 1;
   
		cin >> n;
    
		while(n > 0){
			bin = bin + (n % 2) * cont;
			cont = cont * 10;
			n = n / 2;
		}
    
    
    long int rem, quot;
	int i=1, j, temp;
	char hexdecnum[100];
	
	quot = bin;
	while(quot != 0) {
		temp = quot % 16;
		
		if( temp < 10) {
			temp = temp + 48;
		} else {
			temp = temp + 55;
		}
		hexdecnum[i++]= temp;
		quot = quot / 16;
	}
	cout << "El valor numero en binario es: " << bin << endl;
	for(j = i - 1 ;j > 0 ;j --) {
		cout << "El numero en hexadecimal es: " << hexdecnum[j];


  break;
}
  return 0;
}
}
