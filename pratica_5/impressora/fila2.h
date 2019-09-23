#ifndef FILA2_H_
#define FILA2_H_

#include <iostream>

using namespace std;

template <class T>
struct Node {
	T dados;
	struct Node * prox;
};

template <class T> class Fila{
	private:
		int cap;
		int tam;
		Node<T> *inicio;
		Node<T> *fim;
		
	public:
		Fila(int capacidade){
			this->cap = capacidade;
			this->tam = 0;
			this->inicio = NULL; 
			this->fim = NULL;
		}
		
		/*~FIla(){
			delete this;
		}*/
		
		void enfileira(const T & item){
			if(this->tam < this->cap){
				Node<T> *fila = new Node<T>;
				fila->dados = item;
				fila->prox = NULL;
				if(this->inicio == NULL){
					this->inicio = fila;
				}
				else{
					this->fim->prox = fila;
				}
				this->fim = fila;
				this->tam++;
			}
			else{
				cout << "estouro de fila" << endl;
			}
		}
		
		T desenfileira(){
			if(this->tam > 0){
				Node<T> *aux = this->inicio;
				this->inicio = this->inicio->prox;
				if(this->inicio == NULL){
					this->fim =  NULL;
				}
				this->tam--;
				return aux->dados;
			}
			else{
				cout << "fila vazia" << endl;
			}
		}
		
		int cheia(){
			if(this->tam == this->cap){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		int vazia(){
			if(this->tam ==0){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		int tamanho(){
			return this->tam;
		}
};
#endif
