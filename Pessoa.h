#include <iostream>
#include <stdlib.h>

using namespace std;

	class Pessoa {

		private:
			
		string cpf;
		string nome;
			
		public:

			
		Pessoa() {};
			
		Pessoa (string, string);
		
		void setCpf (string);
		
		void setNome (string);
		
		string getCpf ();
		
		string getNome ();
		
		const void print();
	
	};
