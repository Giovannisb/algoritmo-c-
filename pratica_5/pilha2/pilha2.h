#ifndef _pilha2_H_
#define _pilha2_H_

#include <iostream>
using namespace std;

template <class T> struct Node {
	T dados;
	struct Node * prox;
};

template <class T> class Pilha {
	
	private:
		int cap;
		int item; 
		Node<T> *topo;
		
		
	public:
		Pilha(int capacidade){
			this->topo = NULL;
			this->cap = capacidade;
			this->item = 0;		
		}
		
		~Pilha(){
			while(this->topo != NULL){
				Node<T> *aux = this->topo;
				this->topo = this->topo->prox;
				delete aux;
			}
			delete topo;
		}
		
		void empilha(T i) {
			if(this->item < this->cap){
				Node<T> *pilha = new Node<T>;
				pilha->dados = i;
				pilha->prox = this->topo;
				this->topo = pilha;	
				this->item++;
			}else{
				cout << "pilha cheia" << endl;
			}
		}
		
		T desempilha(){
			if(this->item > 0){
				Node<T> *aux = this->topo;
				this->topo = this->topo->prox;
				this->item--;			
				return aux->dados;
			}else {
				cout << "pilha vazia" << endl;
			}
		}
};


#endif
