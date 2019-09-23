#include "veiculo.h"

void Veiculo::setNumRodas(int num_rodas){
    
    delete [] this->rodas;

    this->rodas = new Roda[num_rodas];
    this->totalRodas = num_rodas;
}

int Veiculo::getNumRodas(){
    return this->totalRodas;
}

string Veiculo::getNome(){
    return this->nome;
}