#define MAX 5
#include "Disciplina.h"

using namespace std;

	Disciplina::Disciplina (string c, string d) {
		
		setCodigo(c);
		setDescricao(d);
		
		for (int i=0; i < MAX; i++)
			ad[i]=0;
			
		for (int j=0; j < MAX; j++)
			pd[j]=0;
		
	}

	void Disciplina::setCodigo (string c) {
	
		codigo = c;
				
	}
	
	string Disciplina::getCodigo () {
		
		return codigo;
		
	}
	
	void Disciplina::setDescricao (string d) {
		
		descricao = d;
		
	} 
	
	string Disciplina::getDescricao () {
	
		return descricao;
	
	}
	
	void Disciplina::excluirAluno (string nomealuno) {
	
		for (int i=0; i < MAX; i++)	{
		
			if (ad[i] != 0) {
		
				if (ad[i]->getNome() == nomealuno) {
				
					ad[i] = 0;
				
				}
		
			}
			
		}
	
	}
	
	void Disciplina::excluirProfessor (string nomeprof) {
	
		for (int i=0; i < MAX; i++)	{
		
			if (pd[i] != 0) {
		
				if (pd[i]->getNome() == nomeprof) {
				
					pd[i] = 0;
				
				}
		
			}
			
		}
	
	}
	
	void Disciplina::print () {
	
		cout << "...................................." << endl;
		cout << "	   codigo disciplina: "	<< getCodigo() 	  << endl;
		cout << "	descricao disciplina: " << getDescricao() << endl;
		cout << "...................................." << endl;
		
		cout << "............professor..............." << endl;
		
		for (int j=0; j < MAX; j++) {
		
			if (pd[j] != 0) {
			
				cout << "	nome:	" << pd[j]->getNome() 	   << endl;
				cout << "...................................." << endl;
			
			}
			
		}
		
		
		cout << ".............alunos................." << endl;
		
		for (int i=0; i < MAX; i++) {
		
			if (ad[i] != 0) {
			
				cout << "	nome:	" << ad[i]->getNome() 	   << endl;
				cout << "...................................." << endl;
			
			}
			
		}
			
	}
	
	void Disciplina::setNota (double n) {
		
		nota = n;
		
	} 
	
	double Disciplina::getNota () {
	
		return nota;
	
	}
