#include "Medico.h"

Medico::Medico()
{
	nombre = "NULL";

}

void Medico::setNombre(string _nombre)
{
	nombre = _nombre;
}

string Medico::getNombre()
{
	return nombre;
}

string Medico::reporteMedico()
{
	/*
	Reporte de clase Medico, dando el nombre y la especialidad.
	Si hay pacientes, recorre el vector que contiene los pacientes asignados
	retornando el nombre y la cedula del mismo, de lo contrario retorna un mensaje que diga algo
	en la linea de "no hay pacientes".
	*/

	stringstream _reporte;
	int cantidadPacientes = paciente.size();

	_reporte << "Nombre del medico: " << getNombre() << "\n" << "Especialidad: " /*IMPLEMENTAR*/ << endl;

	if (cantidadPacientes == 0)
	{
		_reporte << "El medico " << getNombre() << "No cuenta con pacientes asignados " << endl << endl;
	}
	else
	{
		_reporte << "El medico " << getNombre() << "tiene asignados los siguientes pacientes: \n\n";

		for (int i = 0; i < cantidadPacientes; i++)
		{
			_reporte << "[" << i + 1 << "] Nombre: " << paciente[i]->getNombre() << "Cedula: " << paciente[i]->getCedula() << endl;
		}
	}

	return _reporte.str();
}
