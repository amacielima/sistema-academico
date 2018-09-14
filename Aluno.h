#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef aluno
#define aluno

#define MAX 5
#include <string>
#include "Pessoa.h"
#include "Professor.h"
#include "Disciplina.h"
#include "Polimorfismo.h"

using namespace std;

	class Disciplina; // forward

	class Aluno : public Pessoa, public Polimorfismo {
	
		private:

		string curso;
			
		public:
	
		Disciplina * da[MAX];
			
		Aluno () {};
			
		Aluno (string, string, string);
		
		void setCurso (string);
		
		string getCurso ();
		
		void excluirDisciplina (string);
		
	 //	void excluirProfessor (string);
		
		void print ();
	
	};
	
#endif

