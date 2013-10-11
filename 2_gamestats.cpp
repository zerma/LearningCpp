//Game Stats
//Declaración e inicialización de variables

#include <iostream>
using namespace std;

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "\nPuntuación: " << score << endl;
	cout << "Distancia: " << distance << endl;
	cout << "Jugar de nuevo: " << playAgain << endl;
	cout << "¿Escudos?: " << shieldsUp << endl;
	cout << "Vidas: " << lives << endl;
	cout << "Aliens asesinados: " << aliensKilled << endl;
	cout << "Temperatura del motor: " << engineTemp << endl;

	int fuel;
	cout << "\n¿Cuanto combustible? ";
	cin >> fuel;
	cout << "Combustible: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nBonus: " << bonus << endl;

	return 0;
}