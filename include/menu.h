#ifndef MENU_H_
#define MENU_H_

class Menu
{
  public:
  Menu();
  Usuario *usuario_; 
  Admin *admin_; 
  //vector<Admin> admins();
  Profesor *profesor_; 
  Alumno *alumno_; 

  void menuPrincipal();
  void crearAdmin();
  void crearProf();
  void crearAlumno();
  void crearUsuario();
  void fin();
  //USUARIO
  //void verUsuarioAux();

  //ADMIN
  void menuAdmin();
  void eliminarUsuario();
  void eliminarUsuarioD();
  void eliminarUsuarioA();
  void eliminarUsuarioP();
  void verUsuario();
  void verUsuarioD();
  void modificarUsuario();
  void modificarUsuarioD();
  void mostarRegistroD(string codigo);

  //PROF
  void menuProf();
  void modificarNotas();
  void modificarUsuarioP();
  void mostarRegistroP(string codigo);
  void mostarRegistroPerP(string codigo);
  void modificarDatosP();
  void modificarDatosPerP();
  void mostrarDatosP();
  void verUsuarioP();

  //ALUMNO
  void menuAlumno();
  void modificarUsuarioA();
  void mostarRegistroA(string codigo);
  void mostarRegistroPerA(string codigo);
  void modificarDatosA();
  void modificarDatosPerA();
  void mostrarDatosA();
  void verUsuarioA();
};

void error();

#endif