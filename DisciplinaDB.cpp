#include "Disciplina.h"
#include "DisciplinaDB.h"
#include <string>
#define MAX 5
using namespace std;

	DisciplinaDB::DisciplinaDB() {}

	int DisciplinaDB::buscar (Disciplina ** d, string cod) {
		
		for (int i=0; i < MAX; i++) {
		
			if (d[i] != 0 && d[i]->getCodigo() == cod) {
				
				d[i]->print();
			
				return i;
				
				break;
					
			}
		
		}
		
		return -1;
		
	}
	
	int DisciplinaDB::buscarPosicao (Disciplina ** d, string cod) {
		
		for (int i=0; i < MAX; i++) {
		
			if (d[i] != 0 && d[i]->getCodigo() == cod) {
			
				return i;
				
				break;
					
			}
		
		}
		
		return -1;
		
	}
	
	bool DisciplinaDB::incluir (Disciplina ** d, string cod, string nome) {
		
		for (int i=0; i < MAX; i++) {
			
			if (d[i] == 0) {
			
				d[i] = new Disciplina (cod,nome);
				
				return true;
			
			}
		
		}
		
		return false;
	
	}
	
	bool DisciplinaDB::excluir (Disciplina ** d, Aluno ** a, string c) {
		
		int excluir = buscar(d,c);
	
		if (excluir != -1) {
		
			string nomedisc = d[excluir]->getCodigo();
			
			for (int i = 0; i < MAX; i++) {
				
				if (a[i] != 0)
					a[i]->excluirDisciplina(nomedisc);
				//	p[i]->excluirDisciplina(nomedisc);
			
			}
		
			delete d[excluir];
			d[excluir] = 0;
		
			return true;
			
		}
		
		else
			return false;
	
	}
	
	void DisciplinaDB::listar (Disciplina ** d) {
		
		for (int i=0; i < MAX; i++) {
			
			if (d[i] != 0)
				d[i]->print();

		}
	
	}
	
	DisciplinaDB::~DisciplinaDB() {}
