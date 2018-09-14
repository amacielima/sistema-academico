#include <iostream>
#include <cstdlib>
#include <string>
#define MAX 5
using namespace std;

#ifndef menualuno
#define menualuno

#include "AlunoDB.h"
#include "DisciplinaDB.h"

	class MenuAluno : public AlunoDB {
			
		public:
		
		MenuAluno () {};
		
		void OpcaoAluno () {
		
			cout << "...................................." << endl;
			cout << "............menu aluno.............." << endl;
			cout << "	1 - incluir aluno 				 " << endl;
			cout << "	2 - excluir aluno				 " << endl;
			cout << "	3 - buscar 					  	 " << endl;
			cout << "	4 - listar						 " << endl;
			cout << "	0 - voltar ao menu principal	 " << endl;
			cout << "...................................." << endl;
		
		}
		
		void Menu(Aluno ** a, Disciplina ** d) {
					
			int opcao;
			
			do {
				
				OpcaoAluno();
				
				cout << "	digite a opcao desejada:   "; cin >> opcao;
				cout << "...................................." << endl;
			
				if (opcao == 1) {
					
					system("cls");
				
					string nome="NULL", cpf="NULL", curso="NULL";
		
					cout << ".............incluir................" << endl;
					cout << "	digite o nome: ";  	 		 cin  >>  nome;
					cout << "	digite o cpf: ";  			 cin  >>   cpf;
					cout << "	digite o curso:	";           cin  >> curso;
					cout << "...................................." << endl;
					
					if (incluir(a, nome, cpf, curso))
					cout << "	aluno inserido com sucesso!		"  << endl;
				
					else
					cout << "	lista cheia.					"  << endl;
				
					cout << "...................................." << endl;
					
					system("pause");
						
				}
			
				if (opcao == 2) {
					
					system("cls");
					
					string nome="NULL";
				
					cout << ".............excluir................" << endl;
					cout << "	digite o nome:	";  		 cin  >>  nome;
					cout << "...................................." << endl;
					
					if (excluir(a, d, nome))
					cout << "	aluno removido com sucesso!		"  << endl;
				
					else
					cout << "	nome nao encontrado.			"  << endl;
				
					cout << "..................................."  << endl;
				
					system("pause");
					
				}
				
				if (opcao == 3) {
					
					system("cls");
				
					string nome="NULL";
				
					cout << "..............buscar................" << endl;
					cout << "	digite o nome:	";  		 cin  >>  nome;
					cout << "...................................." << endl;
									
					if (buscar(a, nome) == -1)
					cout << "		 nome nao encontrado.  	   	"  << endl;
				
					cout << "...................................." << endl;
					
					system("pause");
				
				}
				
				if (opcao == 4) {
					
					system("cls");
				
					cout << ".............listar................." << endl;
					
					listar(a);
					
					system("pause");
				
				}
				
				system("cls");
							
			} while (opcao != 0);
			
		}
		
	};
	
#endif
