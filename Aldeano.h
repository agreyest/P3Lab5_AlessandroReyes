#ifndef ALDEANO_H
#define ALDEANO_H
#include <string>
#include "Habitante.h"
using namespace std;

class Aldeano : public Habitante{
	public:
		Aldeano();
		
		void Atacar(Habitante*);
		
		~Aldeano();
	protected:
		
};

#endif
