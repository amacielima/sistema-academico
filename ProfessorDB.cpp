#include <string>
#include "Professor.h"
#include "ProfessorDB.h"
#define MAX 5
using namespace std;

	ProfessorDB::ProfessorDB() {}
	
	bool ProfessorDB::incluir (Professor ** p, string n, string cpf, string c) {
		
		for (int i=0; i < MAX; i++) {
			
			if (p[i] == 0) {
			
				p[i] = new Professor (n,cpf,c);
				
				return true;
			
			}
		
		}
		
		return false;
	
	}
	
	int ProfessorDB::buscar (Professor ** p, string nome) {
		
		for (int i=0; i < MAX; i++) {
		
			if (p[i] != 0 && p[i]->getNome() == nome) {
				
				p[i]->print();
			
				return i;
				
				break;
					
			}
		
		}
		
		return -1;
		
	}
	
	bool ProfessorDB::excluir (Professor ** p, Disciplina ** d, string n) {
	
		int excluir = buscar(p,n);
	
		if (excluir != -1) {
			
			 string nomeprof = p[excluir]->getNome();
			
			for (int i = 0; i < MAX; i++) {
				
				if (d[i] != 0) {
				
					d[i]->excluirProfessor(nomeprof);
				
				}
				
			}
		
			delete p[excluir];
			p[excluir] = 0;
		
			return true;
		
		}
		
		
		else
		return false;
	
	}
	
	void ProfessorDB::listar (Professor ** p) {
		
		for (int i=0; i < MAX; i++) {
			
			if (p[i] != 0)
				p[i]->print();
				
		}
	
	}
	
	ProfessorDB::~ProfessorDB() {}
