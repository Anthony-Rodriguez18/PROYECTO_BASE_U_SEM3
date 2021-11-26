/*#include "../include/liberman.h"*/

#include "../include/liberman.h"

Admin :: Admin() :Usuario()
{
  this->readDatabase();//Usuario(); 
}

void Admin::SaveAll()
{
  // logica para guardar desde el array al archivo de texto 
     for (const auto &item : this->admin__)
    {
      //guardando en el archivo de texto
    }
}

void Admin::DeleteObjeto(int value_)
{
  // logica para eliminar item del array
    for (const auto &item : this->admin__)
    {
      // elimar actual item
      if (item != nullptr)
        delete item;
    }
}

void Admin::AddObjeto(Admin * admin_) 
{
  // logica para agregar usauario al array
  this->admin__.push_back(admin_);
}


Admin *Admin::findByCodigo(std::string codigo_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();

  for (const auto &item : admins)
  {
    if (item->getCodigo() == codigo_)
      return item;     
  }
  return nullptr; 
}

Admin *Admin::findByContrasena(std::string contrasena_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getContrasena() == contrasena_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByNombre(std::string nombre_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getNombres() == nombre_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByApellido(std::string apellidos_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getApellidos()== apellidos_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByDNI(long dni_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getDNI() == dni_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByCorreoInsti(std::string correoInsti_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getCorreoInsti()== correoInsti_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByCelular(long celular_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getCelular() == celular_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByDireccion(std::string direccion_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getDireccion() == direccion_)
      return item;
  }
  return nullptr;
}

Admin *Admin::findByEstadCiv(std::string estdCiv_) {
  // logica que haga que cosiga el usuario mediante el nombre
  std::vector<Admin *> admins = this->getAll();
  for (const auto &item : admins)
  {
    if (item->getEstadoCiv()== estdCiv_)
      return item;
  }
  return nullptr;
}

vector<Admin *> Admin::getAll()
{
     return this->admin__;
}

void Admin::readDatabase()
{
  // logica que lee del archivo y lo pasa al array

    string delimiter = DELIMITER;
    ifstream file("txt/admin.txt");
    string line;

    string properties[NUMBER_ADMIN_PROPERTIES];

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

        Admin *const admins = new Admin();
        admins ->setCodigo(properties[0]);
        admins ->setContrasena(properties[1]);
        admins ->setNombres(properties[2]);
        admins ->setApellidos(properties[3]);
        admins ->setDNI(stol(properties[4]));
        admins ->setCorreoInsti(properties[5]);
        admins ->setCelular(stol(properties[6]));
        admins ->setDireccion(properties[7]);
        admins ->setEstadoCiv(properties[8]);

        this->admin__.push_back(admins);
    }
}