#ifndef HABITANTE_H
#define HABITANTE_H

class Habitante {
	public:
		Habitante();
		
		int getVida();
		void setVida(int);
		
		int getHoras();
		void setHoras(int);
		void lessHora();
		
		virtual void Atacar(Habitante*)=0;
		
	protected:
		int vida;
		int horasRest;
};

#endif
