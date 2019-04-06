#include <iostream>
#include "persona.h"
using namespace std;

int RecorreVector(persona *vector[], int n);

int main(){
	
	char nombre[30];
	char sexo;
	int edad;
	int sueldo;
	int horas;
	char profesion[30];
	int a;
	bool aprueba;
	int numMat;
	int i=0;
	
	
	
	persona **Personas ;
	Personas = new persona*[20];
	
	cout << "registro: "<<endl;
	
	while(true){
		
	cout <<"ingrese nombre: "<<endl;
	cin>> nombre;
	
	cout << "Edad: "<<endl;
	cin>> edad;
	
	cout <<"Sexo: "<<endl;
	cin>>sexo;
	
	cout <<"profesion: "<<endl;
	cin>>profesion;
	
	cout <<"horas: "<<endl;
	cin>>horas;
	
	cout <<"sueldo: "<<endl;
	cin>>sueldo;
	
	cout <<"estudia: "<<endl;
	cin >>a;
	
	if(a==1){
		aprueba=true;
		
	cout << "Numero de materias: "<<endl;
	cin>>numMat;
	}else if (a==0){
		aprueba=false;
		numMat=0;
	}
	
	Personas[i] = new persona(nombre,edad,sexo,profesion,sueldo,horas,aprueba,numMat);


	 if(i==1){
	 	break;
	 }else{
	 	i++;
	 }
	}
	
	RecorreVector(Personas,i);
	


	cout << "------------------Modifacion---------------"<<endl;
	
	cout<<"Ingrese el nombre de la persona:"<<endl;
	cin>>nombre;
	
		for(int j = 0; j < i+1; j++){
	
		if(strcmp(nombre,Personas[j]->getNombre())==0){
			
			cout << "cuantas horas son? "<<endl;
			cin>>horas;
		
		Personas[j]->sethoras(horas);
		break;
		}
		
	}
	
	cout << "----------------------------------------------"<<endl;
	
	
		RecorreVector(Personas,i);
	
}

int RecorreVector(persona *vector[],int n){
	
	for(int j = 0; j < n+1; j++){
		vector[j]->getDatos();
		cout << endl <<endl;
	}
	
};
