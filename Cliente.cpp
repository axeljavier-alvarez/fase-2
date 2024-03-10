// PROYECTO GRUPO 
// AXEL ALVAREZ, PAULA SEGURA, HENRY GONZALEZ

#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	//contructor
	public : Cliente (){
	}
	
	Cliente(string nom,string ape,string dir,int tel,string fn,string n) : Persona (nom,ape,dir,tel,fn){
		nit=n;
	}
	
	//metodos
	//set (modificar)
	void setNit(string n){ nit = n;}
	void setNnombres(string nom){ nombres = nom;}
	void setApellidos(string ape){ apellidos = ape;}
	void setDireccion(string dir){ direccion = dir;}
	void setTelefono(int tel){ telefono = tel;}
	void setFecha_Nacimiento(string fn){ fecha_nacimiento = fn;}
	
	//get (mostrar)
	 string getNit(){return nit;}
	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 string getDireccion(){return direccion;}
	 int getTelefono(){return telefono;}
	 string getFecha_Nacimiento(){return fecha_nacimiento;}
	 
	// metodos
	void mostrar(){
		cout<<"_________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
	}

};
