#include <iostream>
#include <stdexcept>

using namespace std;

class ListaOrdenada {
private:
	int * items;
	int tamanho, capacidade;
public:
	ListaOrdenada(int cap) {
		this->capacidade = cap;
		this->tamanho = 0;
		items = new int[cap];
	}

	~ListaOrdenada() {
		delete [] items;
	}

	void insere(int key) {
		int idx;
		items[this->tamanho++] = key;
		while(!valida()){
			for(int i = 0; i < this->tamanho - 1; i++){ 
				if(items[i] > items[i + 1]){
					idx = items[i];
					items[i] = items[i + 1];
					items[i + 1] = idx;
				}
			}
		}
	}

	int buscaSequencial(int key) {
		int aux = 0;
		bool val;
		for(int j = 0; j < this->tamanho; j++){
			if(items[j] == key){
				aux = j;
				val = true;
				//break;
			}
		}
		
		if(val){
			return aux;
		}
		else{
			return -1;
		}
	}

	int buscaBinaria(int item) {
		return buscaBinaria(0, tamanho - 1, item);
	}

	int valida() {
		for (int i = 0; i < tamanho - 1; i++) {
			if (items[i] > items[i + 1]) return 0;
		}
		return 1;
	}

	void exibe() {
		for (int i = 0; i < tamanho; i++) {
			cout << i << ": " << items[i] << endl;
		}
		cout << endl;
	}
	
	void remove(int index){
		if(index >= 0 && index < this->tamanho - 1){
			for(int i = index; i < this->tamanho - 1; i++){
				items[i] = items[i + 1];
			}
			this->tamanho--;
		}
		else{
			throw underflow_error("Item inválido");
		}
	}

private:

	int buscaBinaria(int inicio, int final, int item) {
		int meio;
		while(inicio <= final){
			meio = (inicio + final) / 2;
			if(item == items[meio]){
				return meio;
			}
			
			if(items[meio] < item){
				inicio = meio + 1;
			}
			
			else{
				final = meio - 1;
			}
		}
		return -1;
	}

};


int main () {

	ListaOrdenada lista(10);

	int elementos [] = {10, 5, 25, 1, 5, 13, 50, 99, 33, 12};

	for (int i = 0; i < 10; i++) {
		lista.insere(elementos[i]);
	}

	cout << "Lista válida: " << (lista.valida()?"sim":"não") << endl;
	lista.exibe();

	int teste [] = {5, 7, 16, 99, 45, 12, 33, 1, 60, 6};

	for (int i = 0; i < 10; i++) {
		cout << "Buscando " << teste[i] << ": sequencial = " << lista.buscaSequencial(teste[i]) << " binaria = " << lista.buscaBinaria(teste[i]) << endl;

	}
	
	lista.remove(5);
	lista.exibe();
} 


