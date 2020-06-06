#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"
#include "Civilizacion.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu2(string);
int menu(){
	int retValue=0;
	while(retValue < 1 || retValue > 2){
		cout<<"		Age of Empires		"<<endl
			<<"  1.- Crear civilizacion"<<endl
			<<"  2.- Jugar"<<endl
			<<"  3.- Salir"<<endl
			<<"Que opcion desea ver: ";
			
			cin>>retValue;
			
			if(retValue >= 0 && retValue <= 3){
				break;
			}else{
				cout<<endl<<"Opcion ingresada incorrecta, elija nuevamente"<<endl;
			}
			
			
	}//end while
	
	return retValue;
}//fin metodo de menu

//variables globales
vector <Civilizacion*> civilizaciones;
vector <Habitante*> enEspera;//para guardar los habitantes que se estan creando
//variables globales
int main(int argc, char** argv) {
	int  opcion = menu();
	int seguir = 1;
	
	while(seguir == 1){//while de menu
		
		switch(opcion){//switch opciones menu principal
			
			case 1:{//OPCIÓN PRINCIPAL CREAR CIVILIZACION
				string nombre;
				cout<<endl<<"Cual es su nombre/usuario: ";
				cin>>nombre;
				
				civilizaciones.push_back( new Civilizacion(nombre) );
				cout<<"Civilizacion creada con exito, buena suerte "<<nombre<<", gracias por preferirnos."<<endl;
				break;
			}//fin case 1 op1
			
			case 2:{//OPCIÓN PRINCIPAL JUGAR
				int opJugar=0;
				cout<<endl<<"Con que civilizacion desea jugar..."<<endl;
				for(int i = 0; i < civilizaciones.size(); i++){
					cout<<i+1<<") "<<civilizaciones[i]->getNom_User()<<endl;
				}
				cout<<"Elija el numero del usuario de la civilizacion con la que desea jugar: ";
				cin>>opJugar;
				opJugar--;
				while(opJugar < 0 || opJugar > (civilizaciones.size()-1) ){
					cout<<"Numero, fuera de rango, por favor elija un numero de la lista dada: ";
					cin>>opJugar;
					opJugar--;
				}
				Civilizacion* Civil_select = civilizaciones[opJugar];
				
			
				int  opcion2 = menu2(Civil_select->getNom_User());
				int seguirOp2 = 1;
				
				while(seguirOp2 == 1){
					switch(opcion2){
						case 1:{//OP2 CREAR ALDEANO
							int alimentos = Civil_select->getAlimentos();
							int casas = Civil_select->getCasas();
							int Numhabitantes = Civil_select->getHabitantesSize() + enEspera.size();
							if( ( (casas*5)-Numhabitantes)>0 ){//if para ver si hay alojamiento disponible
								
								if(alimentos >= 25){//if para ver si hay alimentos disponible
									enEspera.push_back( new Aldeano() );
									alimentos -= 25;
									Civil_select->setAlimento(alimentos);
									cout<<endl<<"El aldeano se empezo a crear, estara listo en una hora."<<endl;
								
								}else{////fin if para ver si hay alojamiento disponible
									cout<<endl<<"No tiene los alimentos suficiente para crear al aldeano."<<endl;	
								}
							
							}else{//fin if para ver si hay alojamiento disponible
								cout<<endl<<"No hay alojamiento disponible para crear al aldeano."<<endl;
							}
							
							
							
							break;
						}//fin case1 op2
						
						case 2:{//OP2 CREAR JINETE
							int alimentos = Civil_select->getAlimentos();
							int oro = Civil_select->getOro();
							int madera = Civil_select->getMadera();
							int casas = Civil_select->getCasas();
							int Numhabitantes = Civil_select->getHabitantesSize() + enEspera.size();
							if( ( (casas*5)-Numhabitantes)>0 ){//if para ver si hay alojamiento disponible
								
								if(alimentos >= 75 && oro >= 25 && madera >= 5 && Civil_select->getEstablo() > 0){
									enEspera.push_back( new Jinete() );
									alimentos -= 75;
									oro -= 25;
									madera -= 5;
									Civil_select->setAlimento(alimentos);
									Civil_select->setOro(oro);
									Civil_select->setMadera(madera);
									cout<<"El Jinete se empezo a crear, estara listo en seis horas."<<endl;
								}else{
									if(Civil_select->getEstablo() <= 0){
										cout<<"Necesita crear un establo para crear un jinete."<<endl;
									}
									if(alimentos <= 74){
										cout<<"No tiene alimentos necesarios para crear al jinete."<<endl;
									}
									if(oro <= 24){
										cout<<"No tiene oro necesario para crear al jinete."<<endl;
									}
									if(madera <= 4){
										cout<<"No tiene madera necesaria para crear al jinete."<<endl;
									}
								}	
							}else{
								cout<<"No hay alojamiento disponible para hacer el jinete."<<endl;
							}
							break;
						}//fin case2 op2
						
						case 3:{//OP2 CREAR ARQUERO
							
							break;
						}//fin case3 op2
						
						case 4:{//OP2 CREAR CABALLERO
							
							break;
						}//fin case4 op2
						
						case 5:{//OP2 CONTRUIR CASA
							
							break;
						}//fin case5 op2
						
						case 6:{//OP2 CONTRUIR CUARTEL
							
							break;
						}//fin case6 op2
						
						case 7:{//OP2 CONTRUIR ESTABLO
							
							break;
						}//fin case7 op2
						
						case 8:{//OP2 IR A GUERRA
							
							break;
						}//fin case8 op2
						
						case 9:{//OP2 SIGUIENTE HORA
							
							break;
						}//fin case9 op2
						
						case 10:{//OP2 SALIR
							seguirOp2 = 0;
							for(int i = 0; i < enEspera.size(); i++){
								delete enEspera[i];
							}
							break;
						}//fin case10 op2
						
					}//fin switch op2
					if(seguirOp2 == 1){
						opcion2 = menu2(Civil_select->getNom_User());
					}
					
				}//fin while op2
				
				break;
			}//fin case 2 op1
			
			case 3:{//OPCIÓN PRINCIPAL SALIR
				seguir = 0;
				for(int i = 0; i < civilizaciones.size(); i++){
					delete civilizaciones[i];
				}
				for(int i = 0; i < enEspera.size(); i++){
					delete enEspera[i];
				}
				
				break;
			}//fin case 3 op1
		
		}//fin del switch
		
		if(seguir == 1){
			opcion = menu();
		}
	}//fin del while
	
	return 0;
}//fin del main


int menu2(string nom){
	int retValue=0;
	while(retValue < 1 || retValue > 10){
		cout<<"		BIENVENIDO		"<<nom<<endl
			<<"  1.- Crear aldeano"<<endl
			<<"  2.- Crear jinete"<<endl
			<<"  3.- Crear arquero"<<endl
			<<"  4.- Crear caballero"<<endl
			<<"  5.- Construir casa"<<endl
			<<"  6.- Construir cuartel"<<endl
			<<"  7.- Construir establo"<<endl
			<<"  8.- Ir a guerra "<<endl
			<<"  9.- Siguiente hora"<<endl
			<<"  10.- Salir"<<endl
			<<"Que opcion desea ver: ";
			
			cin>>retValue;
			
			if(retValue >= 1 && retValue <= 10){
				break;
			}else{
				cout<<endl<<"Opcion ingresada incorrecta, elija nuevamente"<<endl;
			}
	}//end while
	
	return retValue;
}//fin metodo de menu
