#include <iostream>
#include "Pessoa.h"

using namespace std;

	Pessoa::Pessoa(string n, string c) {
		
		setNome(n);
		setCpf(c);
		
	}

	void Pessoa::setCpf(string c) {
	
		cpf = c;
				
	}
	
	void Pessoa::setNome(string n) {
		
		nome = n;
		
	} 
	
	string Pessoa::getCpf() {
		
		return cpf;
		
	}
	
	string Pessoa::getNome() {
	
		return nome;
	
	}
	
	const void Pessoa::print() {
	
		cout << "...................................." << endl;
		cout << "	  nome:	" << getNome()      << endl;
		cout << "	   cpf: " << getCpf()       << endl;
	
	}
