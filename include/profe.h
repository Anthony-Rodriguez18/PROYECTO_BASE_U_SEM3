#ifndef PROFESOR_H_
#define PROFESOR_H_
#define NUMBER_PROFESOR_PROPERTIES 11

class Profesor : public Usuario
{
  private: 
    string	cursosEnsena;
    string	sueldo;
    string	perfilProf;
    string	suplente;
    vector<Profesor *> profe__;
    
  public:
    Profesor();
    void menuProf();
    void modificarNotas();
    void mostarRegistroPerP(string codigo);
    void modificarDatosPerP();
    void mostrarDatosPerP();
    void verUsuario();
    vector<Profesor *> getAll();
    //MEMORIA DINAMICA
    void SaveAll();
    void DeleteObjeto(int value_);
    void AddObjeto(Profesor * profe_);
    Profesor* findByContrasena(std::string contrasena_);
    Profesor* findByCodigo(std::string codigo_);
    Profesor* findByNombre(std::string nombre_);
    Profesor*  findBysueldo(std::string sueldo_);
    Profesor* findByperfilProf(std::string perfilProf_);
    Profesor* findBysuplente(std::string suplente_);
    Profesor* findByApellido(std::string apellidos_);
    Profesor* findByDNI(long dni_);
    Profesor* findByDireccion(std::string direccion_);
    Profesor* findByCelular(long celular_);
    Profesor* findByEstadCiv(std::string estdCiv_);
    Profesor* findByCorreoInsti(std::string correoInsti_);
    
    //void getAll();
    void readDatabase();

  

  //getter
    string getCursoEnsena(){return this->cursosEnsena;}
    string getSueldo(){return this->sueldo;}
    string getPerfilProf(){return this->perfilProf;}
    string getSuplente(){return this->suplente;} 

  //setter
    void setCursoEnsena(string value_){this->cursosEnsena = value_;}
    void setSueldo(string value_){this->sueldo = value_; }
    void setPerfilProf(string value_){this->perfilProf = value_;}
    void setSuplente(string value_){this->suplente = value_;}
};

#endif