#include "Civilizacion.h"
#include <string>
#include "Habitante.h"
#include "Aldeano.h"
#include "Jinete.h"
using namespace std;

Civilizacion::Civilizacion(){
	
}
Civilizacion::Civilizacion(string nombre){
	this->casas = 2;
	this->Nom_User = nombre;
	this->alimento = 50;
	this->madera = 50;
	this->oro =  50;
	this->cuartel = 0;
	this->establo = 0;
	this->habitantes.push_back( new Aldeano() );
	this->habitantes.push_back( new Aldeano() );
	this->habitantes.push_back( new Aldeano() );
	this->habitantes.push_back( new Aldeano() );
	this->habitantes.push_back( new Aldeano() );
	this->habitantes.push_back( new Jinete() );
}


string Civilizacion::getNom_User(){
	return this->Nom_User;
}

void Civilizacion::setOro(int oro){
	this->oro += oro;
}
int Civilizacion::getOro(){
	return this->oro;
}
		
void Civilizacion::setMadera(int Madera){
	this->madera += Madera;
}
int Civilizacion::getMadera(){
	return this->madera;
}
		
void Civilizacion::setAlimento(int alimento){
	this->alimento += alimento;
}
int Civilizacion::getAlimentos(){
	return this->alimento;
}
		
void Civilizacion::setCasa(int casa){
	this->casas += casa;
}
int Civilizacion::getCasas(){
	return this->casas;
}
		
void Civilizacion::setEstablo(int establo){
	this->establo += establo;
}
int Civilizacion::getEstablo(){
	return this->establo;
}
		
void Civilizacion::setCuartel(int cuartel){
	this->cuartel += cuartel;
}
int Civilizacion::getCuartel(){
	return this->cuartel;
}



Civilizacion::~Civilizacion(){
	
}
