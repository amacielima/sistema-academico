#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef disciplina
#define disciplina

#define MAX 5
#include "Aluno.h"
#include "Professor.h"

using namespace std;

	class Aluno; // forward
	
	class Professor; // forward

	class Disciplina {
	
		private:
			
		string codigo;
		string descricao;
		double nota;
			
		public:
			
		Aluno * ad[MAX];
		
		Professor * pd[MAX];
			
		Disciplina () {};
			
		Disciplina (string, string);
		
		void setCodigo (string);
		
		string getCodigo ();
		
		void setDescricao (string);
		
		string getDescricao ();
		
		void excluirAluno (string);
		
		void excluirProfessor (string);
		
		void setNota (double);
		
		double getNota ();
		
		void print ();
		
	};
	
#endif
