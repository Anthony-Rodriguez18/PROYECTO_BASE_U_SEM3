#include "../include/liberman.h"

Alumno :: Alumno():Usuario()
{
  this->readDatabase();
} 


void Alumno::SaveAll()
{
  // logica para guardar desde el array al archivo de texto 
     for (const auto &item : this->alumno__)
    {
      //guardando en el archivo de texto
    }
}

void Alumno::DeleteObjeto(int value_)
{
  // logica para eliminar item del array
    for (const auto &item : this->alumno__)
    {
      // elimar actual item
      if (item != nullptr)
        delete item;
    }
}

void Alumno::AddObjeto(Alumno *alumno_) 
{
  // logica para agregar usauario al array
  this->users__.push_back(alumno_);
}
/*
string carrera;
    int numCursos; 
    //Cursos cursos[8];
    //Curso *cursos = new Curso[5]; // cursos[]
    string periodoIngreso;
    int semestre;
    int creditosSemestre;
    int creditosAcumulados;
    float mensualidad; 


Role *Role::getById(int value_)
{
    std::vector<Role *> roles = this->getAll();

    for (const auto &item : roles)
    {
        if (item->getID() == value_)
            return item;
    }
    return nullptr;
}*/


//BUSCADOR DE DATOS
  Alumno *Alumno::findByCodigo(std::string codigo_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCodigo() == codigo_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByContrasena(std::string contrasena_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getContrasena() == contrasena_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByNombre(std::string nombre_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getNombres() == nombre_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByApellido(std::string apellidos_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getApellidos() == apellidos_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByDNI(long dni_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getDNI() == dni_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByCelular(long celular_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCelular() == celular_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByCorreoInsti(std::string correoInsti_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCorreoInsti() == correoInsti_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByDireccion(std::string direccion_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getDireccion() == direccion_)
        return item;     
    }
    return nullptr; 
  }

  Alumno *Alumno::findByEstadCiv(std::string estdCiv_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getEstadoCiv() == estdCiv_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findByCarrera(std::string carrera_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCarrera() == carrera_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findByNumCursos(int numcursos_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCursos() == numcursos_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findByPeriodoIngreso(std::string periodoIngreso_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getPeriodoIngreso() == periodoIngreso_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findBySemestre(int semestre_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getSemestre() == semestre_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findByCreditosSemestre(int creditosSemestre_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCreditosSemestre() == creditosSemestre_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findByCreditosAcumulados(int creditosAcumulados_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getCreditosAcumulados() == creditosAcumulados_)
        return item;     
    }
    return nullptr; 
  }
  Alumno * Alumno::findByMensualidad(float mesualidad_) {
    // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Alumno *> alumnos = this->getAll();

    for (const auto &item : alumnos)
    {
      if (item->getMensualidad() == mesualidad_)
        return item;     
    }
    return nullptr; 
  }
  
vector<Alumno *> Alumno::getAll()
{
     return this->alumno__;
}

void Alumno::readDatabase()
{
  // logica que lee del archivo y lo pasa al array

    string delimiter = DELIMITER;
    ifstream file("alumnos.txt");
    string line;

    string properties[NUMBER_ALUMNO_PROPERTIES];

    while (getline(file, line))
    {
        stringstream ssin(line);
        int index_properties = 0;
        size_t position = 0;

        while ((position = line.find(delimiter)) != string::npos)
        {
            string value = line.substr(0, position);
            properties[index_properties] = value;
            ++index_properties;
            line.erase(0, position + delimiter.length());
        }
        properties[index_properties] = line;

        Alumno *const alumno = new Alumno();
        alumno ->setCodigo(properties[0]);
        alumno ->setContrasena(properties[1]);
        alumno ->setNombres(properties[2]);
        alumno ->setApellidos(properties[3]);
        alumno ->setDNI(stol(properties[4]));
        alumno ->setCorreoInsti(properties[5]);
        alumno ->setCelular(std::stoi(properties[6]));
        alumno ->setDireccion(properties[7]);
        alumno ->setEstadoCiv(properties[8]);

        this->alumno__.push_back(alumno);
    }
}