#include "veiculo.h"

/*void Veiculo::setNumRodas(int num_rodas){
    Roda *Qrodas = new Roda[num_rodas];
    this->rodas = &Qrodas[0];
}

int Veiculo::getNumRodas(){
    Roda *aux = this->rodas;

    int cont = 0;
    while(aux->rodas == 1){
        cont++;
        aux++;
    }

    return cont;
}*/

string Veiculo::getNome(){
    return this->nome;
}

void Terrestre::setCapacidadeMax(int cap_pass){
    this->cap_pass = cap_pass;
}

int Terrestre::getCapacidadeMax(){
    return this->cap_pass;
}

void Aquatico::setCargaMax(float carga_max){
    this->carga_max = carga_max;
}

float Aquatico::getCargaMax(){
    return this->carga_max;
}

void Aereo::setVelocidadeMax(float vel_max){
    this->vel_max = vel_max;
}

float Aereo::getVelocidadeMax(){
    return this->vel_max;
}

void Veiculo::mover(){
	cout << "Veiculo " << nome << " moveu" << endl;
}

void Terrestre::mover(){
    cout << "Veiculo terrestre " << nomeTerr << " moveu." << endl; 
}

void Aquatico::mover(){
    cout << "Veiculo aquatico " << nomeAqua << " moveu." << endl; 
}

void Aereo::mover(){
    cout << "Veiculo aereo " << nomeAereo << " moveu." << endl; 
}

void Anfibio ::mover(){
    Terrestre::mover();
	Aquatico::mover(); 
}
