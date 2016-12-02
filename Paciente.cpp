#include "Paciente.h"
Paciente::Paciente(){
	nombre = "";
}

Paciente::Paciente(string nombreIn,int cedulaIn, string sexoIn, int edadIn){
	nombre = nombreIn;
	cedula = cedulaIn;
	sexo = sexoIn;
	edad = edadIn;
}
Paciente::~Paciente(){
	
}
string Paciente::getNombre(){
	return nombre;
}
int Paciente::getCedula(){
	return cedula;
}
int Paciente::getEdad(){
	return edad;
}
