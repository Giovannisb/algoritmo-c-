#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>
#include <stdexcept>

using namespace std;

template <class T> class Pilha {
    private: // propriedades para array de items, capacidade e topo da pilha
        T *arr;
        int capacity;
        int topo;

    public:
        Pilha(int capacidade) { 
			// instancia array de items, inicializa capacidade e topo
            this->capacity = capacidade;
            this->arr = new T[this->capacity];
            this->topo = -1;
        }

        ~Pilha() {
            delete[] this->arr;// destroy array de items
        }

        void empilha(T item) {
            // empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
            if(this->topo < this->capacity - 1){
            	this->topo += 1;
                this->arr[this->topo] = item;
            }
            else{
                throw underflow_error("Overflow");
            }
        }

        T desempilha() {
            // remove um item do topo da pilha; lança “Pilha vazia” se vazia
            if(this->topo >= 0){
            	int idx = this->topo;
                this->topo -= 1;
                return this->arr[idx];
            }
            else{
                throw underflow_error("Underflow");
            }
        }
};

#endif

