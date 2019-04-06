#include <iostream>
#include <string.h>

using namespace std;

class trabajador{
	
	char profesion[30];
	int sueldo;
	int horas;
	
	public:
	trabajador();
	trabajador(char*,int,int);
	
	char *getProfesion();
	void setProfesion(char*);
	
	int getSueldo();
	void setSueldo(int);
	
	int gethoras();
	void sethoras(int);
	
};

trabajador::trabajador(char *_profesion,int _sueldo,int _horas){
	strcpy(this->profesion,_profesion);
	this->sueldo=_sueldo;
	this->horas=_horas;
	
}

trabajador::trabajador(){
	strcpy(this->profesion," ");
	this->horas=0;
	this->sueldo=0;
	
}

char *trabajador::getProfesion(){
	return profesion;
}

int trabajador::getSueldo(){
	return sueldo;
}

int trabajador::gethoras(){
	return horas;
}

void trabajador::setProfesion(char *profesion){
	strcpy(this->profesion,profesion);
}

void trabajador::setSueldo(int Sueldo){
	this->sueldo = Sueldo;
}

void trabajador::sethoras(int horas){
	
	this->horas = horas;
}

//////////////////////////////////////////////////////////////////////////////////////////////
class Estudiante{
	
	bool aprueba;
	
	public:
	Estudiante(bool);
	Estudiante();
	bool getAprueba();
	void setAprueba(bool);
};

Estudiante::Estudiante(){
	
} 

Estudiante::Estudiante(bool aprueba){
	this->aprueba=aprueba;
}

bool Estudiante::getAprueba(){
	return aprueba;
}

void Estudiante::setAprueba(bool aprueba){
		this->aprueba=aprueba;
}




