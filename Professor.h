#include <iostream>
#include <string>
using namespace std;

#ifndef professor
#define professor

#define MAX 5
#include <string>

#include "Aluno.h"
#include "Disciplina.h"
#include "Polimorfismo.h"

using namespace std;

	class Disciplina; // forward

	class Professor : public Pessoa, public Polimorfismo {
	
		private:

		string cargo;
			
		public:
			
		Disciplina * dp[MAX];
			
		Professor () {};
			
		Professor (string, string, string);
		
		void setCargo (string);
		
		string getCargo ();
		
		void excluirDisciplina (string);
		
		void print ();
	
	};
	
#endif
