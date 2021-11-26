#include "../include/liberman.h"

Carrera :: Carrera(string nombre, string codigo, int creditosEgresar, int numSemestres)
{
  this->nombre = nombre;
  this->codigo = codigo;
  this->creditosEgresar = creditosEgresar;
  //numSemestres[12]=" ";
  this->numSemestres = numSemestres;
}

Carrera Derecho("Derecho", "Der", 258, 10);
Carrera IngCivil("Ingenieria Civil", "IngCiv", 270, 10);
Carrera Cc("Ciencia de la computacion", "CCOMP", 258, 10);
Carrera Medicina("Medicina","Med",270,12);
Carrera Psicologia("Psicologia", "PSIC",240, 12);
