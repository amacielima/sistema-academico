#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef menuprincipal
#define menuprincipal

#include "Aluno.h"
#include "Disciplina.h"
#include "Professor.h"

#include "MenuAluno.h"
#include "MenuDisciplina.h"
#include "MenuMatricula.h"
#include "MenuProfessor.h"
#include "MenuAcademico.h"

	class MenuPrincipal {
	
		private:
			
		Aluno 		* a[MAX];
		Disciplina  * d[MAX];
	 	Professor   * p[MAX];
			
		public:
			
		MenuPrincipal () {
		
			for (int i = 0; i < MAX; i++)
			a[i] = 0;
	
			for (int j = 0; j < MAX; j++)
			d[j] = 0;
			
			for (int k = 0; k < MAX; k++)
			p[k] = 0;
		
		};
		
		void OpcaoPrincipal () {
		
			cout << "...................................." << endl;
			cout << "..........menu principal............" << endl;
			cout << "	1 - menu aluno	 				 " << endl;
			cout << "	2 - menu disciplina				 " << endl;
			cout << "	3 - menu professor			  	 " << endl;
			cout << "	4 - menu matricula			  	 " << endl;
			cout << "	5 - menu academico			  	 " << endl;
			cout << "	0 - encerrar					 " << endl;
			cout << "...................................." << endl;
		
		}
		
		void Menu () {
			
			int opcao;
			
			MenuAluno ma;
			MenuDisciplina md;
			MenuMatricula mm;
			MenuProfessor mp;
			MenuAcademico mc;
			
			do {
				
				OpcaoPrincipal();
				
				cout << "	digite a opcao desejada:   "; cin >> opcao;
				cout << "...................................." << endl;
			
				if (opcao == 1) {
					
					system("cls");
					
					ma.Menu(a, d);
					
					system("pause");
					
				}
				
				if (opcao == 2) {
					
					system("cls");
					
					md.Menu(d,a);
					
					system("pause");
				
				}
				
				if (opcao == 3) {
					
					system("cls");
					
					mp.Menu(p,d);
					
					system("pause");
					
				}
				
				if (opcao == 4) {
					
					system("cls");
				
					mm.Menu(a,d,p);
					
					system("pause");
				
				}
				
				if (opcao == 5) {
					
					system("cls");
				
					mc.Menu(a,d,p);
					
					system("pause");
				
				}

				system("cls");
			
			} while (opcao != 0);
		
		}

		~MenuPrincipal() {
			
			for(int i = 0; i < MAX; i++)
		    delete a[i];
		    
		   	for(int j = 0; j < MAX; j++)
		    delete d[j];
		    
		    for(int k = 0; k < MAX; k++)
		    delete p[k];
		    	
		}
	
	};

#endif
