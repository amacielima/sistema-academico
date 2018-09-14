#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef polimorfismo
#define polimorfismo

	class Polimorfismo {
	
		public:
			
		Polimorfismo() {};
			
		virtual void print() = 0;
	
	};
	
#endif
