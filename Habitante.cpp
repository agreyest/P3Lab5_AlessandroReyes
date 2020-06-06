#include "Habitante.h"

Habitante::Habitante(){
	
}

int Habitante::getVida(){
	return this->vida;	
}
void Habitante::setVida(int vida){
	this->vida = vida;
}

int Habitante::getHoras(){
	return this->horasRest;	
}
void Habitante::setHoras(int hora){
	this->horasRest = hora;
}
void Habitante::lessHora( ){
	this->horasRest--;
}





