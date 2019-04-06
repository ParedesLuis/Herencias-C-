#include <iostream>
#include <string.h>
#include "clases.h"
#include "materia.h"
using namespace std;

class persona: public trabajador,public Estudiante{
	
	char nombre[30];
	int edad;
	char sexo;
	materias *Materia;
	
	public:
	
	persona(char*,int,char,char*,int,int,bool,int);
	persona();
	
	char *getNombre();
	void setNombre(char*);
	
	int getEdad();
	void setEdad(int);
	
	char getSexo();
	void setSexo(char);
	
	void getDatos();
	
};

persona::persona(){
	strcpy(this->nombre," ");
	this->sexo=' ';
	edad=0;
};

persona::persona(char *nombre,int edad,char sexo,char *profesion,int sueldo,int horas,bool aprueba,int numMat): trabajador(profesion,sueldo,horas),Estudiante(aprueba){
	
	Materia = new materias(numMat);
	
	strcpy(this->nombre,nombre);
	this->edad=edad;
	this->sexo=sexo;
};

char *persona::getNombre(){
	return nombre;
}

int persona::getEdad(){
	return edad;
}

char persona::getSexo(){
	return sexo;
}

void persona::setNombre(char *nombre){
	strcpy(this->nombre,nombre);
}

void persona::setEdad(int edad){
	this->edad = edad;
}

void persona::setSexo(char sexo){
	this->sexo = sexo;
}


void persona::getDatos(){
	
	cout <<endl<<nombre<<endl;
	cout << edad<<endl;
	cout << sexo<<endl;
	cout << "Class Trabajador"<<endl;
	cout << getProfesion()<<endl;
	cout << gethoras()<<endl;
	cout << getSueldo()<<endl;
	
	if(getAprueba()){
		cout <<"esta persona es Estudiante"<<endl;
		cout<< Materia->getNumMateria()<<endl;
	}else{
		cout <<"esta persona no es Estudiante"<<endl;
	}
}

