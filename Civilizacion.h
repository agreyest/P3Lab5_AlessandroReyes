#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include "Habitante.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Civilizacion
{
	public:
		Civilizacion();
		Civilizacion(string);
		
		string getNom_User();
		void setOro(int);
		int getOro();
		
		void setMadera(int);
		int getMadera();
		
		void setAlimento(int);
		int getAlimentos();
		
		void setCasa(int);
		int getCasas();
		
		void setEstablo(int);
		int getEstablo();
		
		void setCuartel(int);
		int getCuartel();
		
		int getHabitantesSize();
		vector<Habitante*> getHabitanteV();
				
		~Civilizacion();
	protected:
		vector <Habitante*> habitantes;
		string Nom_User;
		int casas;
		int cuartel;
		int establo;
		int madera;
		int oro;
		int alimento;
};

#endif
