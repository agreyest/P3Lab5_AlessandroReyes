#ifndef JINETE_H
#define JINETE_H
#include <string>
#include "Guerrero.h"
using namespace std;

class Jinete : public Guerrero{
	public:
		Jinete();
		
		void Atacar(Habitante*);
		
		~Jinete();
	protected:
};

#endif
