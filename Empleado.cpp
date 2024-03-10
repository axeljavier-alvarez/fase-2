//Proyecto en Grupo
// AXEL ALVAREZ, PAULA SEGURA, HENRY GONZALEZ
#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
		//Atributos: puesto y codigo de empleado
	private : string puesto;
	int codigo_empleado;
	
	// constructor
	public : 
	Empleado(){
	}
	Empleado(string nom, string ape, string dir, int tel, string fn, string puesto, int cod_empleado) : Persona(nom,ape,dir,tel,fn){
		puesto = puesto;
		codigo_empleado = cod_empleado;
	}
	
	//Métodos de get y set:
	//set(modificar)
	
	void setnombres (string nom){
		nombres=nom;
	}
	void setapellidos (string ape){
		apellidos=ape;
	}
	void setdireccion (string dir){
		direccion=dir;
	}
	void settelefono (int tel){
		telefono=tel;
	}
	void setfecha_nacimiento (string fn){
		fecha_nacimiento=fn;
	}
	void setpuesto (string puesto){
		puesto=puesto;
	}
	void setcodigo_empleado (int cod_empleado){
		codigo_empleado=cod_empleado;
	}
	
	//get (mostrar)
	
	string getnombres(){
		return nombres;
	}
	string getapellidos(){
		return apellidos;
	}
	string getdireccion(){
		return direccion;
	}
	int gettelefono(){
		return telefono;
	}
	string getfecha_nacimiento(){
		return fecha_nacimiento;
	}
	string getpuesto(){
		return puesto;
	}
	int getcodigo_empleado(){
		return codigo_empleado;
	}
};
