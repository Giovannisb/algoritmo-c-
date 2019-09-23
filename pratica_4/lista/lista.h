#ifndef LISTA_H_
#define LISTA_H_

#include <iostream>
#include <stdexcept>

using namespace std;

template <class T>
class Lista {
	private:
        // itens da lista, capacidade e tamanho atual
		T *arr;
		int cap;
		int tam;

    public:

    Lista(int capacidade) {
        // inicilização do array, capacidade e tamanho
        this->cap = capacidade;
        this->tam = 0;
        this->arr = new T[capacidade];
    }

    ~Lista() {
        //destruição do array
        delete[] arr;
    }

    void adiciona (const T & item) {
        // adiciona um item ao final da lista; lança “Lista cheia” caso cheia
        if(this->tam < this->cap){
        	this->arr[this->tam++] = item;
        }
        else{
            throw underflow_error("Overflow");
        }

    }

    T pega(int idx) {
        // pega um item pelo indice (começa em 1);
        // lança “Item inválido” se  inválida
        if(idx > 0 && idx <= this->tam){
            return this->arr[idx-1];
        }
		else{
			throw underflow_error("Invalido");
        }
    }

    void insere (int idx, const T & item) {
        // insere um item na posição indicada (a partir de 1).
        // lança “Lista cheia” caso cheia
        // lança “Item inválido” se posição inválida
        // desloca itens existentes para a direita
        if((idx > 0 && idx <= this->tam) && (this->tam < this->cap)){
        	for(int i = this->tam; i >= idx; i--){
            	arr[i] = arr[i - 1];
        	}
        	arr[idx - 1] = item;
        	this->tam++;
        }
        else{
			throw overflow_error("Overflow");
		}
    }


    void remove(int idx) {
        // remove item de uma posição indicada
        // lança “Item inválido” se posição inválida
        // desloca itens para a esquerda sobre o item removido
        if(idx > 0 && idx <= this->tam){
            for(int i = idx - 1; i < this->tam - 1; i++){
            	this->arr[i] = this->arr[i+1];
        	}
        	this->tam--;
        }
        else{
        	throw underflow_error("Invalido");
		}
    }

    void exibe() {
        // exibe os itens da saida padrão separados por espaços
        for(int cont = 0; cont< this->tam; cont ++){
            cout<< arr[cont] << " ";
    	}
        cout<< endl;
    }
};
#endif
