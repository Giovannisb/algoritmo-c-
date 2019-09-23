#ifndef _VEICULO_H_
#define _VEICULO_H_

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
// instanciar o array de items com new (pratica 1) e seta tamanho;
}
virtual ~Arranjo() {
// destruir o array de items (prática 1);
}
virtual T get(int idx) {
// retornar um item do array a partir do indice;
}
virtual void set(int idx, const T & item) {
// set o item do array apontado pelo indice usando =
}
virtual void exibir();
};
template<class T>
void Arranjo<T>::exibir() {
// exibir cada item numa linha da forma "<idx>: <item>"
}

#endif
