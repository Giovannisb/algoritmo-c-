#ifndef _arranjo_H_
#define _arranjo_H_

#include <iostream>
#include <string>

using namespace std;

template <class T>
	class Arranjo {
	private:
		int tamanho; // tamanho do arranjo
		T * items; //items do arranjo
	public:
		Arranjo(int tam) {
			this->tamanho = tam;
			this->items = new T[this->tamanho];
		
		cout << "Arranjo criado com " << this->tamanho << " elementos" << endl;
	// instanciar o array de items com new (pratica 1) e seta tamanho;
	}
	virtual ~Arranjo() {
	// destruir o array de items (prática 1);
	cout << "Arranjo destruido" << endl;
	delete [] items;
	}
	virtual T get(int idx) {
	// retornar um item do array a partir do indice;
	return this->items[idx];
	}
	virtual void set(int idx, const T & item) {
	// set o item do array apontado pelo indice usando =
	this->items[idx] = item;
	}
	virtual void exibir();
};
template<class T>
void Arranjo<T>::exibir() {
	for(int cont = 0; cont <= this->tamanho - 1; cont++){
		cout << cont << " : " << this->get(cont) << endl;
	}
// exibir cada item numa linha da forma "<idx>: <item>"
}

#endif
