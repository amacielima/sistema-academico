#include "Cadastro.h"
#include "AlunoDB.h"
#include "DisciplinaDB.h"
#include <string>
#define MAX 5
using namespace std;
			
	bool Cadastro::matricularAluno (Aluno ** a, Disciplina ** d, string nome, string cod) {
		
		AlunoDB ab;
		DisciplinaDB db;

		int idn = ab.buscar(a, nome);
		int idd = db.buscar(d, cod);
	
		if (idn != -1 && idd != -1) {
			
			for(int i=0; i < MAX; i++) {
				
				if (a[idn]->da[i] == 0) {
					
					a[idn]->da[i] = new Disciplina (d[idd]->getCodigo(), d[idd]->getDescricao());
					d[idd]->ad[i] = new Aluno (a[idn]->getNome(), a[idn]->getCpf(), a[idn]->getCurso());
				
					return true;
				
					break;
					
				}
				
			}
	
		}
		
		else
		return false;
		
	}
		
	bool Cadastro::cancelarMatricula (Aluno ** a, Disciplina ** d, string nome, string cod) {

		AlunoDB ab;
		DisciplinaDB db;

		int idn = ab.buscar(a, nome);
		int idd = db.buscar(d, cod);
		
		if (idn != -1 && idd != -1) {
		
			for (int i=0; i < MAX; i++) {
			
				if (a[idn]->da[i]->getCodigo() == a[idn]->da[idd]->getCodigo()) {
				
					delete a[idn]->da[i];
					delete d[idd]->ad[i];
				
					a[idn]->da[i] = 0;
					d[idd]->ad[i] = 0;
				
					return true;
					
					break;
					
				}
				
			}
		
		}
		
		else
		return false;
		
	}
	
	bool Cadastro::cadastrarProfessor (Professor ** p, Disciplina ** d, string nome, string cod) {
	
		ProfessorDB pb;
		DisciplinaDB db;

		int idp = pb.buscar(p, nome);
		int idd = db.buscar(d, cod);
	
		if (idp != -1 && idd != -1) {
			
			for(int i=0; i < MAX; i++) {
				
				if (p[idp]->dp[i] == 0) {
					
					p[idp]->dp[i] = new Disciplina (d[idd]->getCodigo(), d[idd]->getDescricao());
					d[idd]->pd[i] = new Professor (p[idp]->getNome(), p[idp]->getCpf(), p[idp]->getCargo());
				
					return true;
				
					break;
					
				}
				
			}
	
		}
		
		else
		return false;
	
	}
	
	bool Cadastro::cancelarCadastro (Professor ** p, Disciplina ** d, string nome, string cod) {

		ProfessorDB pb;
		DisciplinaDB db;

		int idp = pb.buscar(p, nome);
		int idd = db.buscar(d, cod);
		
		if (idp != -1 && idd != -1) {
		
			for (int i=0; i < MAX; i++) {
			
				if (p[idp]->dp[i]->getCodigo() == p[idp]->dp[idd]->getCodigo()) {
				
					delete p[idp]->dp[i];
					delete d[idd]->pd[i];
				
					p[idp]->dp[i] = 0;
					d[idd]->pd[i] = 0;
				
					return true;
					
					break;
					
				}
				
			}
		
		}
		
		else
		return false;
		
	}
	
	int Cadastro::verificaMatricula(Aluno ** a, Disciplina ** d, string nomealuno, string coddisc) {
	
		AlunoDB ab;
		DisciplinaDB db;

		int idn = ab.buscarPosicao(a, nomealuno);
		int idd = db.buscarPosicao(d, coddisc);
	
		if (idn == -1 || idd == -1)
			return -1;
			
		for (int i=0; i < MAX; i++) {
		
			if (a[idn]->da[i] != 0 && a[idn]->da[i]->getCodigo() == a[idn]->da[idd]->getCodigo()) {
			
				return i;
				
				break;
				
			}
			
		}
		
		return -1;
	
	}
	
	bool Cadastro::lancarNota (Aluno ** a, Disciplina ** d, string nomealuno, string coddisc, double p1, double p2, double fator) {
		
		double media = ( (p1 + p2) / 2) * fator;
		
		AlunoDB ab;
		DisciplinaDB db;

		int idn = ab.buscarPosicao(a, nomealuno);
		int idd = db.buscarPosicao(d, coddisc);
		
		int v = verificaMatricula(a, d, nomealuno, coddisc);
			
		if (v != -1) {
		
			a[idn]->da[v]->setNota(media);
		
		}
		
		else
		return false;
	
	}
	
	bool Cadastro::historicoEscolar(Aluno ** a, string nomealuno) {
		
		AlunoDB ab;
		int idn = ab.buscarPosicao(a, nomealuno);
		
		if (idn == -1)
		return false;
	
		
		cout << "...................................." << endl;
		cout << "	nome do aluno: " <<	a[idn]->getNome() << endl;
		cout << "...................................." << endl;
		cout << "...........disciplina(s)............" << endl;
		
		for (int i=0; i < MAX; i++) {
		
			if(a[idn]->da[i] != 0) {
			
				cout << "...................................." << endl;
				cout << "	disciplina: " << a[idn]->da[i]->getDescricao() << endl;
				cout << "	codigo: " << a[idn]->da[i]->getCodigo() << endl;
				cout << "	nota (media): " << a[idn]->da[i]->getNota() << endl;
				cout << "...................................." << endl;
			
			}
		
		}
		
		return true;
	
	}
