#include "Guerrero.h"

Guerrero::Guerrero(){
	this->setVida(100);
}

int Guerrero::getPoder_Ataque(){
	return this->Poder_ataque;
}
void Guerrero::setPoder_Ataque(int poder){
	this->Poder_ataque = poder;
}

void Guerrero::Atacar(Habitante* habi){
	
}


Guerrero::~Guerrero(){
	
}
