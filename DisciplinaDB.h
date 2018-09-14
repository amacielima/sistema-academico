#include <string>

#ifndef disciplinadb
#define disciplinadb

#include "Aluno.h"
#include "Disciplina.h"

	class DisciplinaDB {
			
		public:
			
		DisciplinaDB ();
		
		friend class Cadastro;
		
		bool incluir (Disciplina ** , string, string);
		
		int buscar (Disciplina ** , string);

		int buscarPosicao (Disciplina ** , string);
				
		bool excluir (Disciplina ** , Aluno **, string);
		
		void listar (Disciplina **);
		
		~DisciplinaDB();
	
	};
	
#endif

