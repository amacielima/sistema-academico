#include <iostream>
#include <cstdlib>
#include <string>
#define MAX 5

#ifndef cadastro
#define cadastro

#include "Aluno.h"
#include "AlunoDB.h"
#include "Disciplina.h"
#include "DisciplinaDB.h"
#include "Professor.h"
#include "ProfessorDB.h"

using namespace std;

	class Cadastro {
		
		public:
			
		Cadastro () {};
			
		bool matricularAluno (Aluno ** , Disciplina ** , string, string);
		
		bool cancelarMatricula (Aluno ** , Disciplina ** , string, string);
		
		bool cadastrarProfessor (Professor ** , Disciplina ** , string, string);
	
		bool cancelarCadastro (Professor ** , Disciplina ** , string, string);
		
		int verificaMatricula(Aluno **, Disciplina **, string, string);
		
		bool lancarNota(Aluno ** , Disciplina ** , string, string, double, double, double);
		
		bool historicoEscolar(Aluno **, string);
	
	};
	
#endif
