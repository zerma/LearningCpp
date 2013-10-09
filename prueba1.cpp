//Librería de introducción y salidad de datos
#include <iostream>
//Con esto se declara el uso de la librería iostram para todas las funciones
using namespace std;

int suma(int x, int y)
{
	return x+y;
}

int duplica(int x)
{
	return x*2;
}

int main()
{
	int x=0;
	//cout imprime en pantalla
	cout << "Introduce un entero" << endl;
	//cin obtiene un dato desde el teclado
	cin >> x;
	cout << "El valor de X es " << duplica(x) << endl;
}