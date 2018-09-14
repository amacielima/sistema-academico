#include <iostream>
#include <cstdlib>
#include <string>
#define MAX 5
using namespace std;

#ifndef menuprofessor
#define menuprofessor

#include "AlunoDB.h"
#include "ProfessorDB.h"
#include "DisciplinaDB.h"

	class MenuProfessor : public ProfessorDB {
			
		public:
		
		MenuProfessor () {};
		
		void OpcaoProfessor () {
		
			cout << "...................................." << endl;
			cout << "..........menu professor............" << endl;
			cout << "	1 - incluir professor			 " << endl;
			cout << "	2 - excluir professor			 " << endl;
			cout << "	3 - buscar 					  	 " << endl;
			cout << "	4 - listar						 " << endl;
			cout << "	0 - voltar ao menu principal	 " << endl;
			cout << "...................................." << endl;
		
		}
		
		void Menu(Professor ** p, Disciplina ** d) {
					
			int opcao;
			
			do {
				
				OpcaoProfessor();
			
				cout << "	digite a opcao desejada:   "; cin >> opcao;
				cout << "...................................." << endl;
			
				if (opcao == 1) {
					
					system("cls");
				
					string nome = "NULL", cpf = "NULL", cargo = "NULL";
		
					cout << ".............incluir................" << endl;
					cout << "	digite o nome: ";  	 		 cin  >>  nome;
					cout << "	digite o cpf: ";  			 cin  >>   cpf;
					cout << "	digite o cargo:	";           cin  >> cargo;
					cout << "...................................." << endl;
					
					if (incluir(p, nome, cpf, cargo))
					cout << "  professor inserido com sucesso!	"  << endl;
				
					else
					cout << "	lista cheia.					"  << endl;
				
					cout << "...................................." << endl;
					
					system("pause");
						
				}
			
				if (opcao == 2) {
					
					system("cls");
					
					string nome = "NULL";
				
					cout << ".............excluir................" << endl;
					cout << "	digite o nome:	";  		 cin  >>  nome;
					cout << "...................................." << endl;
					
					if (excluir(p, d, nome))
					cout << "  professor removido com sucesso!	"  << endl;
				
					else
					cout << "	nome nao encontrado.	"  		   << endl;
				
					cout << "..................................."  << endl;
				
					system("pause");
				
				}
				
				if (opcao == 3) {
					
					system("cls");
				
					string nome = "NULL";
				
					cout << "..............buscar................" << endl;
					cout << "	digite o nome:	";  		 cin  >>  nome;
					cout << "...................................." << endl;
									
					if (buscar(p, nome) == -1)
					cout << "	nome nao encontrado.  	   	"  	   << endl;
				
					cout << "...................................." << endl;
					
					system("pause");
				
				}
				
				if (opcao == 4) {
					
					system("cls");
				
					cout << ".............listar................." << endl;
					listar(p);
					
					system("pause");
				
				}
				
				system("cls");
							
			} while (opcao != 0);
			
		}
		
	};
	
#endif
