#ifndef _VEICULO_H_
#define _VEICULO_H_

#include <iostream>
#include <string>

using namespace std;

class Roda{
    public:
    int rodas;

        Roda(){
            cout << "Roda montada" << endl;
            this->rodas = 1;
        }

        ~Roda(){
            cout << "Roda desmontada." << endl;
        }
};

class Veiculo{
    protected:
        string nome;
        Roda *rodas;
    public:
        Veiculo(const char *nome){
        this->nome = nome;
        cout << "Veiculo " << this->nome << " construido" << endl;
        this->rodas = NULL;
        }

        virtual ~Veiculo(){
            cout << "O veiculo " << nome << " foi destruido" << endl;
            delete [] rodas;
        }
        void setNumRodas(int);
        int getNumRodas();
        string getNome();
        virtual void mover() = 0;

};

class Terrestre : virtual public Veiculo{
    private:
        string nomeTerr;
        int cap_pass;
    protected:
        Terrestre() : Veiculo("anfi"){
        }
    public:
        Terrestre(const char *nome) : Veiculo(nome){
            this->nomeTerr = nomeTerr;
            this->cap_pass = 5;

            cout << "Veiculo terrestre " << nomeTerr << " criado" << endl;
        }
        
        virtual ~Terrestre(){
        	cout << "O veiculo terrestre " << nomeTerr << " foi destruido" << endl;
		}

        void setCapacidadeMax(int cap_pass);
        int getCapacidadeMax();
        void mover();
};

class Aquatico : virtual public Veiculo{
    private:
        string nomeAqua;
        float carga_max;
	protected:
        Aquatico() : Veiculo("anfi"){
        }
    public:
         Aquatico(const char *nome) : Veiculo(nome){
            this->nomeAqua = nomeAqua;
            this->carga_max = 10;

            cout << "Veiculo aquatico " << nomeAqua << " criado" << endl;
        }
        
        virtual ~Aquatico(){
        	cout << "O veiculo aquatico " << nomeAqua << " foi destruido" << endl;
		}

        void setCargaMax(float carga_max);
        float getCargaMax();
        void mover();
};

class Aereo : public Veiculo{
    private:
        string nomeAereo;
        float vel_max;

    public:
        Aereo(const char *nome) : Veiculo(nome){
            this->nomeAereo = nomeAereo;
            this->vel_max = 100;

            cout << "Veiculo aereo " << nomeAereo << " criado" << endl;
        }
        
        virtual ~Aereo(){
        	cout << "O veiculo aereo " << nomeAereo << " foi destruido" << endl;
		}

        void setVelocidadeMax(float vel_max);
        float getVelocidadeMax();
        void mover();
};

class Anfibio : public Aquatico, public Terrestre{
	private:
        string nomeAnfibio;
    public:
		Anfibio(const char *nome) : Veiculo(nome), Terrestre(), Aquatico(){
			cout << "Veiculo anfibio criado" << endl;
		}

        virtual ~Anfibio(){
			cout << "O veiculo Anfibio: "<< nomeAnfibio <<" foi Destruido!" << endl;
		}

		virtual void mover();
};

#endif 
