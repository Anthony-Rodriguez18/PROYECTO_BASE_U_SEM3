#ifndef ALUM_H_
#define ALUM_H_
#define NUMBER_ALUMNO_PROPERTIES 16

#include "curso.h"

class Alumno : public Usuario 
{
  private: 
    string carrera;
    int numCursos; 
    //Curso *cursos = new Curso[7]; 
    string periodoIngreso;
    int semestre;
    int creditosSemestre;
    int creditosAcumulados;
    float mensualidad; 
    vector<Alumno *> alumno__;

  public:
    Alumno();
    vector<Alumno *> getAll();
    void menuAlumno();
    void crearAlumno();
    //MEMORIA DINAMICA
      void SaveAll();
      void DeleteObjeto(int value_);
      void AddObjeto(Alumno * alumno_);
      //BUSCADOR EN LA LISTA
      Alumno* findByCodigo(std::string );
      Alumno* findByContrasena(std::string );
      Alumno* findByNombre(std::string );
      Alumno* findByApellido(std::string );
      Alumno* findByDNI(long dni_);
      Alumno* findByCelular(long );
      Alumno* findByDireccion(std::string );
      Alumno* findByCorreoInsti(std::string );
      Alumno* findByEstadCiv(std::string );
      Alumno* findByCarrera(std::string );
      Alumno* findByNumCursos(int );
      Alumno* findByPeriodoIngreso(std::string);
      Alumno* findBySemestre(int );
      Alumno* findByCreditosSemestre(int );
      Alumno* findByCreditosAcumulados(int );
      Alumno* findByMensualidad(float );
      
    //void getAll();
      void readDatabase();
  
 
  //getter
    string getCarrera(){return this->carrera;}
    int getCursos(){return this->numCursos;}
    string getPeriodoIngreso(){return this->periodoIngreso;}
    int getSemestre(){return this->semestre; } 
    int getCreditosSemestre(){return this->creditosSemestre;}
    int getCreditosAcumulados(){return this->creditosAcumulados;}
    float getMensualidad(){ return this->mensualidad;}

  //Setters
    void setCarrera(string value_){this->carrera = value_;}
    void setCursos(int value_){this->numCursos = value_;}
    void setPeriodoIngreso(int value_){this->periodoIngreso = value_;}
    void setSemestre(int value_){this->semestre = value_;}
    void setCreditosSemestre(int value_){this->creditosSemestre = value_;}
    void setCreditosAcumulados(int value_){this->creditosAcumulados = value_;}
    void setMensualidad(float value_){this->mensualidad = value_;}
};

#endif