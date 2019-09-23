#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"

using namespace std;

int main(int argc, char** argv) {
	// Parte 1
	int x = 5, y = 10, z = 30;
	swap(x, y);
	cout << "Minimo entre " << x << " e " << y << " eh "
	<< minimo(x, y) << endl;
	cout << "Maximo entre " << y << " e " << z << " eh "
	<< maximo(y, z) << endl;
	cout << "minimo" << endl;
	
	// Parte 2
	float x1 = 5.5, y1 = 10.15, z1 = 30.7;
	swap(x1, y1);
	cout << "Minimo entre " << x1 << " e " << y1 << " eh "
	<< minimo(x, y) << endl;
	cout << "Maximo entre " << y1 << " e " << z1 << " eh "
	<< maximo(y1, z1) << endl;
	cout << "minimo" << endl;
	
	// Parte 3
	Arranjo<int> arr(10);
	arr.set(4, 5);
	arr.set(7, 15);
	arr.set(8, 22);
	arr.exibir();
	
	//parte 4
	Arranjo<float> arr2(5);
	arr2.set(1,5.4);
	arr2.set(4, 10.7);
	arr2.set(7, 3.1);
	arr.exibir();
	
	// Parte 5
	Arranjo<Aluno> turma(3);
	turma.set(0, Aluno("Joao","1234"));
	turma.set(1, Aluno("Maria","5235"));
	turma.set(2, Aluno("Jose","2412"));
	turma.exibir();
}
