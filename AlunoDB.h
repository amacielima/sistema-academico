#include <iostream>
#include <string>

#ifndef alunodb
#define alunodb

#include "Aluno.h"
#include "Disciplina.h"
#include "Polimorfismo.h"

	class AlunoDB {
			
		public:
		
		AlunoDB();
		
		friend class Cadastro;
		
		bool incluir (Aluno ** , string, string, string);
		
		bool excluir (Aluno ** , Disciplina **, string);
		
		int buscar (Aluno ** , string);
		
		int buscarPosicao (Aluno ** , string);
		
		void listar (Aluno ** a);
		
		~AlunoDB();
		
	};
	
#endif

