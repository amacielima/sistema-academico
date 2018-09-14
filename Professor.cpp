#define MAX 5
#include <iostream>
#include "Professor.h"

using namespace std;

	Professor::Professor (string n, string cpf, string c) : Pessoa (n, cpf) {
		
		setCargo(c);
	
		for (int i=0; i < MAX; i++)
	 		dp[i] = 0;
	 
	}
	
	void Professor::setCargo (string c) {
		
		cargo = c;
		
	} 
	
	string Professor::getCargo () {
	
		return cargo;
	
	}
	
	
	void Professor::excluirDisciplina (string nomeprof) {
	
		for (int i=0; i < MAX; i++) {
		
			if (dp[i] != 0) {
			
				if (dp[i]->getCodigo() == nomeprof) {
				
					dp[i] = 0;
				
				}
		
			}
			
		}
	
	}
	
	void Professor::print () {
		
		Pessoa::print();
		cout << "	 cargo: " 		<<   getCargo()    << endl;
		cout << "...................................." << endl;
		
		cout << "............disciplinas............." << endl;
		
		for (int i=0; i < MAX; i++) {
		
			if (dp[i] != 0) {
			
				cout << "	   codigo: " << dp[i]->getCodigo() << endl;
				cout << "...................................." << endl;				
				
			}
			
		}
		
	}
