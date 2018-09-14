#define MAX 5
#include "Aluno.h"

using namespace std;

	Aluno::Aluno (string n, string cpf, string c) {
		
		setNome(n);
		setCpf(cpf);
		setCurso(c);
		
		for (int i=0; i < MAX; i++)
			da[i] = 0;

	}
	
	void Aluno::setCurso (string c) {
		
		curso = c;
		
	} 
	
	string Aluno::getCurso () {
	
		return curso;
	
	}
	
	void Aluno::excluirDisciplina (string nomedisc) {
	
		for (int i=0; i < MAX; i++) {
		
			if (da[i] != 0) {
			
				if (da[i]->getCodigo() == nomedisc) {
				
					da[i] = 0;
				
				}
		
			}
			
		}
	
	}
	
	void Aluno::print () {
		
		Pessoa::print();
		cout << "	 curso: " 		<<   getCurso()    << endl;
		cout << "...................................." << endl;
		
		cout << "............disciplinas............." << endl;
		for (int i=0; i < MAX; i++) {
		
			if (da[i] != 0) {
			
				cout << "	   codigo: " << da[i]->getCodigo() << endl;
				cout << "...................................." << endl;
				
			}
			
		}
		
	}
