#include <iostream>
#include <cstdlib>
#include <string>
#define MAX 5
using namespace std;

#ifndef menuacademico
#define menuacademico

#include "Professor.h"
#include "ProfessorDB.h"
#include "Disciplina.h"
#include "DisciplinaDB.h"
#include "Aluno.h"
#include "AlunoDB.h"
#include "Cadastro.h"

	class MenuAcademico: public Cadastro {
	
		public:
			
		MenuAcademico() {};
		
		void OpcaoAcademico() {
		
			cout << "...................................." << endl;
			cout << "...........menu academico..........." << endl;
			cout << "	1 - listagem geral				 " << endl;
			cout << "	2 - lancamento de notas			 " << endl;
			cout << "	3 - historico escolar			 " << endl;
			cout << "	0 - voltar ao menu principal	 " << endl;
			cout << "...................................." << endl;
		
		}
		
		void Menu (Aluno ** a, Disciplina ** d, Professor ** p) {
		
			int opcao;
			AlunoDB adb;
			ProfessorDB pdb;
			
			do {
				
				OpcaoAcademico();
			
				cout << "	digite a opcao desejada: ";   cin >> opcao;
				cout << "...................................." << endl;
			
				if (opcao == 1) {
					
					system("cls");
					
					cout << "...................................." << endl;
					cout << "...........listagem geral..........." << endl;
					cout << "...................................." << endl;
					cout << "..............aluno(s).............." << endl;
					adb.listar(a);
					cout << "............professor(es)..........." << endl;
					pdb.listar(p);
					
					system("pause");
					
				}
			
				if (opcao == 2) {
					
					system("cls");
					
					double p1, p2, k;
					string nome = "NULL", cod = "NULL";
					
					cout << "...................................." << endl;
					cout << "............lancar notas............" << endl;
					cout << "	nome do aluno: ";			   cin >> nome;
					cout << "	cod. disciplina: ";			   	cin >> cod;
					cout << "...................................." << endl;
					cout << "	nota p1: ";			   			 cin >> p1;
					cout << "	nota p2: ";			   			 cin >> p2;
					cout << "	fator k: ";			   			  cin >> k;
					cout << "...................................." << endl;
					
					if (lancarNota(a,d,nome,cod,p1,p2,k))
					cout << " nota lancada com sucesso. " <<endl;
					
					else
					cout << " falha no lancamento. " <<endl;
					
					system("pause");
					
				}
				
				if (opcao == 3) {
					
					system("cls");
					
					string nome = "NULL";
					
					cout << "...................................." << endl;
					cout << "..............historico............." << endl;
					cout << "...................................." << endl;
					cout << "	nome do aluno: ";			   cin >> nome;
					cout << "...................................." << endl;
					
					if(!historicoEscolar(a,nome))
					cout << "	aluno nao cadastrado. " << endl;
					
					system("pause");
					
				}
				
				system("cls");
							
			} while (opcao != 0);
			
		}
		
	};
	
#endif
