#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include "persona.h"
#include "date.h"

using namespace std;
class Medico : public Persona, public Usuario {
	string especialidad ;
	int cant;
	Time disponible;
public:
	Medico() : Persona(), Usuario() {
		
		cout << "Cantidad de horas disponibles: ";cin >> cant;
		cout << "Especialidad: ";getline(cin, especialidad);

	}

	string getEspecialidad(){return especialidad; }
	int getCant(){return cant; }
	
	void setCant( int cant ){
		this -> cant = cant;
	}
	void mostrarMedico(){
		mostrarPersona() ;
		mostrarUsuario() ;
		std::cout<< "ESPECIALIDA: " << especialidad <<endl;
		std::cout<< "CANTIDAD DE HORAS: " << cant <<endl;
		//completar
	}

};
#endif //MEDICO_H