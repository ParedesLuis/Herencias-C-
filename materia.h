#include <iostream>
#include <string.h>

using namespace std;

class materias{
	
	int numMaterias;
	public:
	
	materias();
	materias(int numMaterias);
	
	void setNumMaterias(int numMaterias);
	int getNumMateria();
	
};

materias::materias(){
	
	numMaterias = 0;
		
}

materias::materias(int numMaterias){
	
	this->numMaterias = numMaterias;

}


void materias::setNumMaterias(int numMaterias){
	
	this->numMaterias = numMaterias;
	
}

int materias::getNumMateria(){
	
	return numMaterias;
	
}


