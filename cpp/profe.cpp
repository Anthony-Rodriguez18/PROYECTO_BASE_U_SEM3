#include "../include/liberman.h"

Profesor :: Profesor()
{
  this->readDatabase();
}


void Profesor::SaveAll()
{
  // logica para guardar desde el array al archivo de texto 
     for (const auto &item : this->profe__)
    {
      //guardando en el archivo de texto
    }
}

void Profesor::DeleteObjeto(int value_)
{
  // logica para eliminar item del array
    for (const auto &item : this->profe__)
    {
      // elimar actual item
      if (item != nullptr)
        delete item;
    }
}

void Profesor::AddObjeto(Profesor * profe_) 
{
  // logica para agregar usauario al array
  this->users__.push_back(profe_);
}


Profesor *Profesor::findByCodigo(std::string codigo_) {
  // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Profesor *> profes = this->getAll();

  for (const auto &item : profes)
  {
    if (item->getCodigo() == codigo_)
      return item;   
  }
  return nullptr;
}

Profesor *Profesor::findByContrasena(std::string contrasena_)
{
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getContrasena() == contrasena_)
      return item;
  }
  return nullptr;
}

Profesor *Profesor::findByNombre(std::string nombre_) {
  // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getNombres() == nombre_)
      return item;
  }
  return nullptr;
}

Profesor *Profesor::findByApellido(std::string apellidos_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getApellidos()== apellidos_)
      return item;
  }
  return nullptr;
}

Profesor *Profesor::findByDNI(long dni_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getDNI() == dni_)
      return item;
  }
  return nullptr;
}

Profesor *Profesor::findByCorreoInsti(std::string correoInsti_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getCorreoInsti()== correoInsti_)
      return item;
  }
  return nullptr;
}

Profesor *Profesor::findByCelular(long celular_) {
  // logica que haga que cosiga el usuario mediante el nombre
    std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getCelular() == celular_)
      return item;
  }
  return nullptr;
}

Profesor *Profesor::findByDireccion(std::string direccion_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Profesor *> profes = this->getAll();
  for (const auto &item : profes)
  {
    if (item->getDireccion() == direccion_)
      return item;
  }  
  return nullptr;
}

Profesor *Profesor::findByEstadCiv(std::string estdCiv_) {
  // logica que haga que cosiga el usuario mediante el nombre
  
  return nullptr;
}


Profesor * Profesor::findBysueldo(std::string sueldo_) {
  // logica que haga que cosiga el usuario mediante el nombre
  return nullptr;
}

Profesor *Profesor::findByperfilProf(std::string perfilProf_) {
  // logica que haga que cosiga el usuario mediante el nombre
  return nullptr;
}

Profesor *Profesor::findBysuplente(std::string suplente_) {
  // logica que haga que cosiga el usuario mediante el nombre
  return nullptr;
}

vector<Profesor *> Profesor::getAll()
{
     return this->profe__;
}

void Profesor::readDatabase()
{
  // logica que lee del archivo y lo pasa al array

    string delimiter = DELIMITER;
    ifstream file("txt/prof.txt");
    string line;

    string properties[NUMBER_PROFESOR_PROPERTIES];

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

        Profesor *const profesor = new Profesor();
        profesor ->setCodigo(properties[0]);
        profesor ->setContrasena(properties[1]);
        profesor ->setNombres(properties[2]);
        profesor ->setApellidos(properties[3]);
        profesor ->setDNI(stol(properties[4]));
        profesor ->setCorreoInsti(properties[5]);
        profesor ->setCelular(std::stoi(properties[6]));
        profesor ->setDireccion(properties[7]);
        profesor ->setEstadoCiv(properties[8]);

        this->profe__.push_back(profesor);
    }
}