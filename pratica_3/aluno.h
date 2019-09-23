#ifndef _aluno_h_
#define _aluno_h_

class Aluno {
	private:
		string nome;
		string mat;
	public:
		Aluno() {}
		Aluno(const char * nome, const char * mat) : nome(nome), mat(mat){
			this->nome = nome;
			this->mat = mat;
		}
	
		friend class Arranjo<Aluno>;
};

//template<>
//void Arranjo<Aluno>::set(int idx, const Aluno & aluno) {
	// atribua nome e mat do item do array a partir de aluno
//	this->items[idx] = aluno;
//}
template<>
void Arranjo<Aluno>::exibir() {
	// exiba cada aluno do array no formato "idx : mat = nome"
	for(int cont = 0; cont <= this->tamanho - 1; cont++){
		cout<< cont << " : " << this->get(cont).nome << endl;
	}
}

#endif
