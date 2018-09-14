#include <iostream>
#include <cstdlib>
#include <string>
#define MAX 5
using namespace std;

#ifndef menudisciplina
#define menudisciplina


#include "Disciplina.h"
#include "DisciplinaDB.h"
#include "Aluno.h"
#include "AlunoDB.h"

	class MenuDisciplina : public DisciplinaDB {
	
		public:
			
		MenuDisciplina() {};
		
		void OpcaoDisciplina () {
		
			cout << "...................................." << endl;
			cout << "..........menu disciplina..........." << endl;
			cout << "	1 - incluir disciplina			 " << endl;
			cout << "	2 - excluir disciplina			 " << endl;
			cout << "	3 - buscar  					 " << endl;
			cout << "	4 - listar						 " << endl;
			cout << "	0 - voltar ao menu principal	 " << endl;
			cout << "...................................." << endl;
		
		}
		
		void Menu (Disciplina ** d, Aluno ** a) {
		
			int opcao;
			
			do {
				
				OpcaoDisciplina();
				
				cout << "	digite a opcao desejada: ";   cin >> opcao;
				cout << "...................................." << endl;
			
				if (opcao == 1) {
					
					system("cls");
					
					string codigo="NULL", desc="NULL";
			
					cout << ".............incluir................" << endl;
					cout << "	digite o codigo: ";    	 	 cin >> codigo;
					cout << "	digite a descricao: "; 		   cin >> desc;
					cout << "...................................." << endl;
					
					if (incluir(d, codigo, desc) != 0)
					cout << " disciplina inserida com sucesso!  "  << endl;
				
					else
					cout << "	lista cheia.					"  << endl;
				
					cout << "...................................." << endl;
					
					system("pause");
					
				}
			
				if (opcao == 2) {
					
					system("cls");
					
					string codigo="NULL";
					
					cout << ".............excluir................" << endl;
					cout << "	digite o codigo:  "; 		 cin >> codigo;
					cout << "...................................." << endl;
					
					if (excluir(d, a, codigo))
					cout << "	disciplina removida com sucesso!"  << endl;
				
					else
					cout << "	nome nao encontrado.			"  << endl;
				
					cout << "..................................."  << endl;
					
					system("pause");
					
				}
				
				if (opcao == 3) {
					
					system("cls");
					
					string codigo="NULL";
				
					cout << ".............buscar................." << endl;
					cout << "	digite o codigo:  "; 		 cin >> codigo;
					cout << "...................................." << endl;
					
					if (buscar(d, codigo) == -1)
						cout << "	codigo nao encontrado.		"  << endl;
				
					cout << "...................................." << endl;
					
					system("pause");
					
				}
				
				if (opcao == 4) {
					
					system("cls");
					
					cout << "..............listar................" << endl;
					listar(d);
					
					system("pause");
					
				}
				
				system("cls");
							
			} while(opcao != 0);
			
		}
		
	};
	
#endif
