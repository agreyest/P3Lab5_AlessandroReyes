#ifndef GUERRERO_H
#define GUERRERO_H
#include <string>
#include "Habitante.h"
using namespace std;

class Guerrero : public Habitante{
	public:
		Guerrero();
		
		int getPoder_Ataque();
		void setPoder_Ataque(int);
		void Atacar(Habitante*);
		
		~Guerrero();
	protected:
		int Poder_ataque;
};

#endif
