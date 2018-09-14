#include <string>
#include "Aluno.h"
#include "AlunoDB.h"
#define MAX 5
using namespace std;

	AlunoDB::AlunoDB() {}
	
	bool AlunoDB::incluir (Aluno ** a, string n, string cpf, string c) {
		
		for (int i=0; i < MAX; i++) {
			
			if (a[i] == 0) {
			
				a[i] = new Aluno (n,cpf,c);
				
				return true;
			
			}
		
		}
		
		return false;
	
	}
	
	int AlunoDB::buscar (Aluno ** a, string nome) {
		
		for (int i=0; i < MAX; i++) {
		
			if (a[i] != 0 && a[i]->getNome() == nome) {
				
				a[i]->print();
			
				return i;
				
				break;
					
			}
		
		}
		
		return -1;
		
	}
	
	int AlunoDB::buscarPosicao (Aluno ** a, string nome) {
	
		for (int i=0; i < MAX; i++) {
		
			if (a[i] != 0 && a[i]->getNome() == nome) {
			
				return i;
				
				break;
					
			}
		
		}
	
		return -1;
		
	}
	
	bool AlunoDB::excluir (Aluno ** a, Disciplina ** d, string n) {
	
		int excluir = buscar(a,n);
	
		if (excluir != -1) {
			
			string nomealuno = a[excluir]->getNome();
			
			for (int i = 0; i < MAX; i++) {
				
				if (d[i] != 0)
					d[i]->excluirAluno(nomealuno);			
			
			}
		
			delete a[excluir];
			a[excluir] = 0;
		
			return true;
		
		}
		
		
		else
		return false;
	
	}
	
	void AlunoDB::listar (Aluno ** a) {
		
		for (int i=0; i < MAX; i++) {
			
			if (a[i] != 0)
				a[i]->print();
				
		}
	
	}
	
	AlunoDB::~AlunoDB() {}
