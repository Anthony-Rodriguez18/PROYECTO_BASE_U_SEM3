#ifndef USUARIO_H_
#define USUARIO_H_

#define NUMBER_USUARIO_PROPERTIES 9

class Usuario 
{
  protected:
    string codigo;
    string contrasena;
    string nombres;
    string apellidos;
    long dni;
    string correoInsti;
    long celular;
    string direccion;
    string estdCiv;

    vector<Usuario *> users__;

  public:
    Usuario();
    //~Usuario();

    Usuario *getByCodigo();
    vector<Usuario *> getAll();
    void findByName(std::string name_);


  //getter
    string getCodigo(){return this->codigo;}
    string getContrasena(){return this->contrasena;}
    string getNombres(){return this->nombres;}
    string getApellidos(){return this->apellidos;} 
    string getCorreoInsti(){return this->correoInsti;}
    long getDNI(){return this->dni;}
    long getCelular(){return this->celular;}
    string getDireccion(){return this->direccion;}
    string getEstadoCiv(){return this->estdCiv;}

  //setter
    void setCodigo(string value_){this->codigo = value_;}
    void setContrasena(string value_){this->contrasena = value_;}
    void setNombres(string value_){this->nombres = value_;}
    void setApellidos(string value_){this->apellidos = value_;}
    void setDNI(long value_){this->dni = value_;}
    void setCorreoInsti(string value_){this->correoInsti = value_;}
    void setCelular(long value_){this->celular = value_;}
    void setDireccion(string value_){this->direccion = value_;}
    void setEstadoCiv(string value_){this->estdCiv = value_;}
};

#endif