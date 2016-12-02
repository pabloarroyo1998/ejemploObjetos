#ifndef PACIENTE_H
#define PACIENTE_H


#include <string>
using std::string;

class Paciente{
	private:
		string nombre;
		int cedula;
		string sexo;
		int edad;
		
		
	public:
		Paciente(string nombreIn,int cedulaIn, string sexoIn, int edadIn);
		Paciente();
		~Paciente();
		string getNombre();
		int getCedula();
		string getSexo();
		int getEdad();
};

#endif

