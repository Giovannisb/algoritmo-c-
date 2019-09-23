#ifndef _VEICULO_H_
#define _VEICULO_H_

#include <iostream>
#include <string>

using namespace std;

class Roda{
    public:

        Roda(){
            cout << "Roda montada" << endl;
        }

        ~Roda(){
            cout << "Roda desmontada." << endl;
        }
};

class Veiculo{
    private:
        string nome;
        Roda *rodas;
        int totalRodas;
    public:
        Veiculo(const char *nome){
        this->nome = nome;
        cout << "Veiculo " << this->nome << " construido" << endl;
        this->rodas = NULL;
        }

        ~Veiculo(){
            cout << "O veiculo " << nome << " foi destruido" << endl;
            delete [] rodas;
        }
        void setNumRodas(int num_rodas);
        int getNumRodas();
        string getNome();

};

#endif 