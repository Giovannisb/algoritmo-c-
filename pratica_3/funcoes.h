#ifndef _funcoes_H_
#define _funcoes_H_

#include <iostream>
#include <string>

template <class T> void trocar(T & a, T & b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <class T> T maximo( T & a, T &  b){
	return (a > b) ? a : b;
}

template <class T> T minimo(T & a, T & b){
	return (a < b) ? a : b;
}


#endif 
