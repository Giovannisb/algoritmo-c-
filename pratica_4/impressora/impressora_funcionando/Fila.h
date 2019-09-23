#ifndef FILA_H_
#define FILA_H_

#include <iostream>

using namespace std;

template <class T>
class Fila{
	private:
		//array de itens, capacidade, tamanho, posição inicial, etc.
		T *arr;
		int capacidade;
		int tam;
		int posInit;
		int posFin;
	public:
		Fila(int cap){
			//inicializar array de items, capacidade, tamanho, posição inicial
			this->capacidade = cap;
			this->tam = 0;
			this->posFin = -1;
			this->posInit = 0;
            this->arr = new T[this->capacidade];
		}
		
		~Fila(){
		//destruir array de itens
		delete[] this->arr;
		}
		
		void enfileira(const T & item){
			//adiciona um item ao final da fila; lança "Fila cheia" caso cheia.
			if(this->tam == this->capacidade){
				cout << "Fila cheia" << endl;
                
            }
            else{
                arr[(this->posInit + 1) % this->capacidade] = item;
                this->posFin++;
                this->tam++;
            }
		}
		
		T desenfileira(){
			//remove um item do inicio da fila; lança "Fila vazia" caso vazia
			if(this->posInit >= this->tam){
				cout << "Fila vazia" << endl;
            }
            else{
                this->tam--;
                return this->arr[(this->posInit + 1) % this->capacidade];
            }
		}
		
		int cheia(){
			//retorna um se cheia, 0 caso contrario
			if(this->tam == this->capacidade){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		int vazia(){
			//retorna 1 se vazia, 0 caso contrpario
			if(this->posInit > this->tam){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		int tamanho(){
			//retorna a quantidade de itens atualmente na fila
			return this->tam;
		}
};
#endif

