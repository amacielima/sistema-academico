#include <iostream>
#include <string>

#ifndef professordb
#define professordb

#include "Disciplina.h"
#include "Professor.h"

	class ProfessorDB {
			
		public:
		
		ProfessorDB();
		
		friend class Matricula;
		
		bool incluir (Professor ** , string, string, string);
		
		bool excluir (Professor ** , Disciplina **, string);
		
		int buscar (Professor ** , string);
		
		void listar (Professor **);
		
		~ProfessorDB();
		
	};
	
#endif
