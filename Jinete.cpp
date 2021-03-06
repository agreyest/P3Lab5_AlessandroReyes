#include "Jinete.h"
#include "Aldeano.h"
#include "Arquero.h"
#include "Caballero.h"
using namespace std;

Jinete::Jinete(){
	this->setVida(100);
	this->setHoras(6);
	this->setPoder_Ataque(30);
}


void Jinete::Atacar(Habitante* habitante){
	Aldeano* aldeano = dynamic_cast<Aldeano*>(habitante);
	if(aldeano != 0 ){//significa que es aldeano
		int damage = this->Poder_ataque + (0.065 * habitante->getVida());
		habitante->setVida(habitante->getVida()-damage);
	}else{
		
		Arquero* archer = dynamic_cast<Arquero*>(habitante);
		if(archer != 0 ){//significa que es archer
			int damagethis = this->Poder_ataque + (0.065 * habitante->getVida());
			int damageArcher = archer->getPoder_Ataque() + (0.085 * this->getVida());
			
			habitante->setVida(habitante->getVida()-damagethis);
			this->setVida(this->getVida()-damageArcher);
		}else{
			
			Caballero* knight = dynamic_cast<Caballero*>(habitante);
			if(knight != 0 ){//significa que es Caballero
				int damagethis = this->Poder_ataque + (0.065 * habitante->getVida());
				int damageKinght = knight->getPoder_Ataque() + (0.095 * this->getVida());
				
				habitante->setVida(habitante->getVida()-damagethis);
				this->setVida(this->getVida()-damageKinght);
			}else{
				
				Jinete* jinete = dynamic_cast<Jinete*>(habitante);
				if(jinete != 0 ){//significa que es Jinete
					int damagethis = this->Poder_ataque + (0.065 * habitante->getVida());
					int damageJinete = jinete->getPoder_Ataque() + (0.065 * this->getVida());
					
					habitante->setVida(habitante->getVida()-damagethis);
					this->setVida(this->getVida()-damageJinete);
				}
			}
		}
	}//fin else para ver si es aldeano
	
}//fin del metodo atacar


Jinete::~Jinete(){
	
}
