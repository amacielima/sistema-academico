#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef menumatricula
#define menumatricula

#include "MenuPrincipal.h"
#include "Cadastro.h"

	class MenuMatricula : Cadastro {
		
		public:
			
		MenuMatricula() {};
		
		void OpcaoMatricula () {
		
			cout << "...................................." << endl;
			cout << "...........menu matricula..........." << endl;
			cout << "...................................." << endl;
			cout << "...............aluno................" << endl;
			cout << "                                    " << endl;
			cout << "	1 - matricular aluno			 " << endl;
			cout << "	2 - cancelar matricula			 " << endl;
			cout << "                                    " << endl;
			cout << ".............professor.............." << endl;
			cout << "                                    " << endl;
			cout << "	3 - cadastrar disciplina		 " << endl;
			cout << "	4 - cancelar cadastro			 " << endl;
			cout << "                                    " << endl;
			cout << "...................................." << endl;
			cout << "                                    " << endl;
			cout << "	0 - voltar ao menu principal  	 " << endl;
			cout << "                                    " << endl;
			cout << "...................................." << endl;
		
		}
		
		void Menu (Aluno ** a , Disciplina ** d, Professor ** p) {
		int opcao;
			
			do {
				
				OpcaoMatricula();
				
				cout << "	digite a opcao desejada:   "; cin >> opcao;
				cout << "...................................." << endl;
			
				if (opcao == 1) {
					
					system("cls");
					
					string nome="NULL", cod="NULL";
					
					cout << "...................................."  << endl;
					cout << ".........matricular aluno..........."  << endl;
					cout << "	nome do aluno: "; 		  	  cin  >>  nome;
					cout << "	nome da disciplina: ";  	  cin  >>   cod;
					cout << "...................................."  << endl;
					
					if (matricularAluno(a, d, nome, cod))
						cout << "	matricula feita com sucesso.	  " << endl;
					
					else
						cout << " aluno / disciplina nao cadastrados. " << endl;
						
					cout << "...................................." << endl;
			
					system("pause");
					
				}
				
				if (opcao == 2) {
					
					system("cls");
					
					string nome="NULL", cod="NULL";
					
					cout << "...................................."  << endl;
					cout << "........cancelar matricula.........."  << endl;
					cout << "	nome do aluno: ";			  cin  >>  nome;
					cout << "	cod. da disciplina: ";		  cin  >>   cod;
					cout << "...................................."  << endl;
					
					if (cancelarMatricula(a, d, nome, cod))
					cout << "	matricula cancelada.		  " 	<<endl;
					
					else
					cout << " aluno / disciplina nao cadastrados. " <<endl;
						
					cout << "...................................." << endl;
				
					system("pause");
					
				}
				
				if (opcao == 3) {
					
					system("cls");
				
					string nome="NULL", cod="NULL";
				
					cout << "...................................."  << endl;
					cout << "........cadastrar professor........."  << endl;
					cout << "	nome do prof.: ";			  cin  >>  nome;
					cout << "	cod. da disciplina: ";		  cin  >>   cod;
				
					if (cadastrarProfessor(p, d, nome, cod))
					cout << "	cadastro efetuado.		  " 		<<endl;
					
					else
					cout << " professor / disciplina nao cadastrados. " <<endl;
						
					cout << "...................................." << endl;
			
					system("pause");
				
				}
				
				if (opcao == 4) {
				
					system("cls");
					
					string nome="NULL", cod="NULL";
					
					cout << "...................................."  << endl;
					cout << ".........cancelar cadastro.........."  << endl;
					cout << "	nome do prof.: ";			  cin  >>  nome;
					cout << "	cod. da disciplina: ";		  cin  >>   cod;
					cout << "...................................."  << endl;
					
					if (cancelarCadastro(p, d, nome, cod))
					cout << "	cadastro cancelado.		  " 		<<endl;
					
					else
					cout << " professor / disciplina nao cadastrados. " <<endl;
						
					cout << "...................................." << endl;
					
					system("pause");
				
				}
				
				system("cls");
			
			} while (opcao != 0);
			
		}
			
	};

#endif
