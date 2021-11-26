#include "../include/liberman.h"

void Menu :: modificarUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Mostrar Datos un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      //modificarUsuarioD();
      break;
    }
    case 'P': 
    {
      //modificarUsuarioP();
      break;
    }
    case 'A': 
    {
      //modificarUsuarioA();
      break; 
    }
  }
}

/*void Menu::mostarRegistroD(string codigo)
{

    ifstream mostrar;
    mostrar.open("admin.txt",ios::in);
    getline(mostrar,admin.codigo);
    while(!mostrar.eof())
    {
        getline(mostrar,admin.contrasena);
        getline(mostrar,admin.nombres);
        getline(mostrar,admin.apellidos);
        getline(mostrar,admin.dni);
        getline(mostrar,admin.correoInsti);
        getline(mostrar,admin.celular);
        getline(mostrar,admin.direccion);
        getline(mostrar,admin.estdCiv);

        if(codigo==admin.codigo)
        {
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<admin.codigo<<endl;
          cout<<"Contraseña: "<<admin.contrasena<<endl;
          cout<<"Nombres: "<<admin.nombres<<endl;
          cout<<"Apellidos: "<<admin.apellidos<<endl;
          cout<<"DNI: "<<admin.dni<<endl;
          cout<<"Correo Institucional: "<<admin.correoInsti<<endl;
          cout<<"Celular: "<<admin.celular<<endl;
          cout<<"Direccion: "<<admin.direccion<<endl;
          cout<<"Estado Civil: "<<admin.estdCiv<<endl;
          cout<<"\n\n";
        }

        getline(mostrar,admin.codigo);
    }

    mostrar.close();
}

void Menu::modificarUsuarioD()
{
  ifstream lectura;
  ifstream verificador;
  ofstream auxiliar;
  string auxCodigo;
  string codigoModif;
  string auxContra;
  string auxNombres;
  string auxApellidos;
  string auxDNI;
  string auxCorreoInsti;
  string auxCelular;
  string auxDireccion;
  string auxEstdCiv;
  bool encontrado=false;
  bool coincidencia=false;
  bool mismoCodigo=false;
  lectura.open("admin.txt",ios::in);
  verificador.open("admin.txt",ios::in);
  auxiliar.open("auxiliar.txt",ios::out);
  cout<<"\t\t\t\t***Modificar los datos de un usuario***\t\t\t\t\n\n";
  if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
  {
    fflush(stdin);
    cout<<"Ingresa el codigo del usuario que deseas modificar: ";
    cin.ignore(1000000, '\n');
    getline(cin,auxCodigo);

    if(auxCodigo==" ")
    {
      do
      {
        cout<<"codigo de usuario no valido!, intentalo nuevamente: ";
        getline(cin,auxCodigo);
      }
      while(auxCodigo==" ");
    }

    codigoModif=auxCodigo;

    getline(lectura,admin.codigo);
    while(!lectura.eof())
    {
      getline(lectura,admin.contrasena);
      getline(lectura,admin.nombres);
      getline(lectura,admin.apellidos);
      getline(lectura,admin.dni);
      getline(lectura,admin.correoInsti);
      getline(lectura,admin.celular);
      getline(lectura,admin.direccion);
      getline(lectura,admin.estdCiv);

      if(auxCodigo==admin.codigo)
      {
        encontrado=true;
        mostarRegistroD(codigoModif);
        cout<<"**********************************************";
        cout<<"\n\n";
        cout<<"Ingresa la nueva informacion para el usuario\n\n";
        fflush(stdin);
        cout<<"Ingresa el codigo del usuario: ";
        getline(cin,auxCodigo);
        if(auxCodigo==codigoModif)
        {
          mismoCodigo=true;
        }
        if(mismoCodigo==false)
        {
          do
          {
            if(auxCodigo==codigoModif)
            {
              coincidencia=false;
              break;
            }
            verificador.seekg(0);
            getline(verificador,admin.codigo);
            while(!verificador.eof())
            {
              getline(verificador,admin.contrasena);
              getline(verificador,admin.nombres);
              getline(verificador,admin.apellidos);
              getline(verificador,admin.dni);
              getline(verificador,admin.correoInsti);
              getline(verificador,admin.celular);
              getline(verificador,admin.direccion);
              getline(verificador,admin.estdCiv);

              if(auxCodigo==admin.codigo)
              {
                coincidencia=true;
                cout<<"\n\nYa existe un usuario con ese codigo!\n\n";
                cout<<"El usuario con ese codigo es: "<<admin.nombres<<"\n\n";
                cout<<"Ingresa un codigo valido!: ";
                getline(cin,auxCodigo);

                if(auxCodigo==" ")
                {
                  do
                  {
                    cout<<"\ncodigo de usuario no valido!, ";
                    cout<<"intentalo nuevamente: ";
                    getline(cin,auxCodigo);
                  }
                  while(auxCodigo=="");
                }
                break;
              }

              getline(verificador,admin.codigo);
            }

            if(verificador.eof()&&auxCodigo!=admin.codigo)
            {
              coincidencia=false;
            }

          }
          while(coincidencia==true);
        }
      cout << "\033[H\033[2J\033[3J";
      cout<<"***Modificar los datos de un usuario***\n\n";
      cout<<"Ingresa el codigo del administrador que deseas modificar: ";
      cout<<codigoModif;
      mostarRegistroD(codigoModif);
      cout<<"**********************************************";
      cout<<endl;
      cout<<"Ingresa la nueva informacion para el usuario\n";
      cout<<"Ingresa el codigo del usuario: ";
      cout<<auxCodigo;
      fflush(stdin);
      cout<<endl<<"Contrasena: "; 
      getline(cin,auxContra);
      fflush(stdin);
      cout<<"Nombres: ";
      getline(cin,auxNombres);;
      fflush(stdin);
      cout << endl << "Apellidos: ";
      getline(cin, auxApellidos);
      fflush(stdin);
      cout << endl << "DNI: ";
      getline(cin,auxDNI);
      fflush(stdin);
      cout << endl << "Correo institucional: ";
      getline(cin,auxCorreoInsti) ;
      fflush(stdin);
      cout << endl << "Celular: ";
      getline(cin, auxCelular);
      fflush(stdin);
      cout << endl << "Dirección: ";
      getline(cin,auxDireccion);
      fflush(stdin);
      cout << endl << "Estado Civil: ";
      getline(cin,auxEstdCiv);

      auxiliar<<auxCodigo<<endl<<auxContra<<endl<<auxNombres<<endl<<auxApellidos<<endl<<auxDNI<<endl<<auxCorreoInsti<<endl<<auxCelular<<endl<<auxDireccion<<endl<<auxEstdCiv<<endl;
      cout<<"El Registro se ha modificado correctamente.\n\n";
      }

        else
        {
          auxiliar<<admin.codigo<<endl<<admin.contrasena<<endl<<admin.nombres<<endl<<admin.apellidos<<endl<<admin.dni<<endl<<admin.correoInsti<<endl<<admin.celular<<endl<<admin.direccion<<endl<<admin.estdCiv<<endl;
        }


            getline(lectura,admin.codigo);
        }

    }

    else
    {
      error();
    }

    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro ningun registro con ese codigo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("admin.txt");
    rename("auxiliar.txt","admin.txt");
}

void Menu::mostarRegistroP(string codigo)
{

    ifstream mostrar;
    mostrar.open("prof.txt",ios::in);
    getline(mostrar,profesor.codigo);
    while(!mostrar.eof())
    {
        getline(mostrar,profesor.contrasena);
        getline(mostrar,profesor.nombres);
        getline(mostrar,profesor.apellidos);
        getline(mostrar,profesor.dni);
        getline(mostrar,profesor.correoInsti);
        getline(mostrar,profesor.celular);
        getline(mostrar,profesor.direccion);
        getline(mostrar,profesor.estdCiv);
        getline(mostrar,profesor.cursosEnsena);
        getline(mostrar,profesor.sueldo);
        getline(mostrar,profesor.perfilProf);
        getline(mostrar,profesor.suplente);

        if(codigo==profesor.codigo)
        {
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<profesor.codigo<<endl;
          cout<<"Nombres: "<<profesor.nombres<<endl;
          cout<<"Apellidos: "<<profesor.apellidos<<endl;
          cout<<"Direccion: "<<profesor.direccion<<endl;
          cout<<"Correo: "<<profesor.correoInsti<<endl;
          cout<<"DNI: "<<profesor.dni<<endl;
          cout<<"Celular: "<<profesor.celular<<endl;
          cout<<"Estado Civil: "<<profesor.estdCiv<<endl;
          cout <<"Sueldo: "<<profesor.sueldo<<endl;
          cout<<"Cursos que ensenan: "<<profesor.cursosEnsena<<endl;
          cout<<"perfil profesional: "<<profesor.perfilProf<< endl ;
          cout<<"Suplente (si/no): "<<profesor.suplente<<endl ;
          cout<<"\n\n";
        }

        getline(mostrar,profesor.codigo);
    }

    mostrar.close();
}

void Menu::modificarUsuarioP()
{
    ifstream lectura;
    ifstream verificador;
    ofstream auxiliar;
    string auxCodigo;
    string codigoModif;
    string auxContra;
    string auxNombres;
    string auxApellidos;
    string auxDNI;
    string auxCorreoInsti;
    string auxCelular;
    string auxDireccion;
    string auxEstdCiv;
    string auxCursosEnsena;
    string auxSueldo;
    string auxPerfilProf;
    string auxSuplente;
    bool encontrado=false;
    bool coincidencia=false;
    bool mismoCodigo=false;
    lectura.open("prof.txt",ios::in);
    verificador.open("prof.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\t\t\t\t***Modificar los datos de un usuario***\t\t\t\t\n\n";
    if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del usuario que deseas modificar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);

        if(auxCodigo==" ")
        {
            do
            {
                cout<<"codigo de usuario no valido!, intentalo nuevamente: ";
                getline(cin,auxCodigo);
            }
            while(auxCodigo==" ");
        }

        codigoModif=auxCodigo;

        getline(lectura,profesor.codigo);
        while(!lectura.eof())
        {
            getline(lectura,profesor.contrasena);
            getline(lectura,profesor.nombres);
            getline(lectura,profesor.apellidos);
            getline(lectura,profesor.dni);
            getline(lectura,profesor.correoInsti);
            getline(lectura,profesor.celular);
            getline(lectura,profesor.direccion);
            getline(lectura,profesor.estdCiv);
            getline(lectura,auxCursosEnsena);
            getline(lectura,auxSueldo);
            getline(lectura,auxPerfilProf);
            getline(lectura,auxSuplente);

            if(auxCodigo==profesor.codigo)
            {
                encontrado=true;
                mostarRegistroP(codigoModif);

                cout<<"**********************************************";
                cout<<"\n\n";
                cout<<"Ingresa la nueva informacion para el usuario\n\n";
                fflush(stdin);
                cout<<"Ingresa el codigo del usuario: ";
                getline(cin,auxCodigo);
                if(auxCodigo==codigoModif)
                {
                    mismoCodigo=true;
                }
                if(mismoCodigo==false)
                {
                    do
                    {
                        if(auxCodigo==codigoModif)
                        {
                            coincidencia=false;
                            break;
                        }
                        verificador.seekg(0);
                        getline(verificador,profesor.codigo);
                        while(!verificador.eof())
                        {
                            getline(verificador,profesor.contrasena);
                            getline(verificador,profesor.nombres);
                            getline(verificador,profesor.apellidos);
                            getline(verificador,profesor.dni);
                            getline(verificador,profesor.correoInsti);
                            getline(verificador,profesor.celular);
                            getline(verificador,profesor.direccion);
                            getline(verificador,profesor.estdCiv);
                            getline(verificador,auxCursosEnsena);
                            getline(verificador,auxSueldo);
                            getline(verificador,auxPerfilProf);
                            getline(verificador,auxSuplente);

                            if(auxCodigo==profesor.codigo)
                            {
                                coincidencia=true;
                                cout<<"\n\nYa existe un usuario con ese codigo!\n\n";
                                cout<<"El usuario con ese codigo es: "<<profesor.nombres<<"\n\n";
                                cout<<"Ingresa un codigo valido!: ";
                                getline(cin,auxCodigo);

                                if(auxCodigo==" ")
                                {
                                    do
                                    {
                                        cout<<"\ncodigo de usuario no valido!, ";
                                        cout<<"intentalo nuevamente: ";
                                        getline(cin,auxCodigo);
                                    }
                                    while(auxCodigo=="");
                                }
                                break;
                            }

                            getline(verificador,profesor.codigo);
                        }

                        if(verificador.eof()&&auxCodigo!=profesor.codigo)
                        {
                          coincidencia=false;
                        }

                    }
                    while(coincidencia==true);
                }
                cout << "\033[H\033[2J\033[3J";
                cout<<"***Modificar los datos de un usuario***\n\n";
                cout<<"Ingresa el codigo del administrador que deseas modificar: ";
                cout<<codigoModif;
                mostarRegistroP(codigoModif);
                cout<<"**********************************************";
                cout<<"Ingresa la nueva informacion para el usuario\n";
                cout<<"Ingresa el codigo del usuario: ";
                cout<<auxCodigo;
                fflush(stdin);
                cout<<endl  <<  "Contrasena: "; 
                getline(cin,auxContra);
                fflush(stdin);
                cout<<"Nombres: ";
                getline(cin,auxNombres);;
                fflush(stdin);
                cout << endl << "Apellidos: ";
                getline(cin, auxApellidos);
                fflush(stdin);
                cout << endl << "DNI: ";
                getline(cin,auxDNI);
                fflush(stdin);
                cout << endl << "Correo institucional: ";
                getline(cin,auxCorreoInsti) ;
                fflush(stdin);
                cout << endl << "Celular: ";
                getline(cin, auxCelular);
                fflush(stdin);
                cout << endl << "Dirección: ";
                getline(cin,auxDireccion);
                fflush(stdin);
                cout << endl << "Estado Civil: ";
                getline(cin,auxEstdCiv);
                fflush(stdin);
                cout << endl << "Cursos que ensenan: ";
                getline(cin,auxCursosEnsena);
                cout << endl << "Sueldo: " ;
                cin >> auxSueldo;
                cin.ignore(1000000, '\n');
                cout << endl << "perfil profesional: " ;
                getline(cin,auxPerfilProf);
                fflush(stdin);
                cout <<endl << "Suplente (si/no): ";
                getline(cin,auxSuplente);
                auxiliar<<auxCodigo<<endl<<auxContra<<endl<<auxNombres<<endl<<auxApellidos<<endl<<auxDNI<<endl<<auxCorreoInsti<<endl<<auxCelular<<endl<<auxDireccion<<endl<<auxEstdCiv<<endl<<auxCursosEnsena<<endl<<auxSueldo<<endl<<auxPerfilProf<<endl<<auxSuplente<<endl;
                cout<<"El Registro se ha modificado correctamente.\n\n";
            }


            else
            {

                auxiliar<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor. nombres<<endl<<profesor.apellidos<<endl<<profesor.dni<<endl<<profesor.correoInsti<<endl<<profesor.celular<<endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl<<profesor.cursosEnsena<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente<<endl;
            }


            getline(lectura,profesor.codigo);
        }

    }
    else
    {
        error();
    }

    if(encontrado==false)
    {
        cout<<"\n\nNo se encontro ningun registro con ese codigo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("prof.txt");
    rename("auxiliar.txt","prof.txt");
}

void Menu::mostarRegistroA(string codigo)
{

    ifstream mostrar;
    mostrar.open("alumnos.txt",ios::in);
    getline(mostrar,alumno.codigo);
    while(!mostrar.eof())
    {
        getline(mostrar,alumno.contrasena);
        getline(mostrar,alumno.nombres);
        getline(mostrar,alumno.apellidos);      
        getline(mostrar,alumno.dni);
        getline(mostrar,alumno.correoInsti);
        getline(mostrar,alumno.celular);
        getline(mostrar,alumno.direccion);
        getline(mostrar,alumno.estdCiv);
        getline(mostrar,alumno.carrera);
        //getline(mostrar,alumno.cursos);
        mostrar>>alumno.cursos;
        getline(mostrar,alumno.periodoIngreso);
        //getline(mostrar>>alumno.semestre);
        mostrar>> alumno.semestre;
        mostrar>> alumno.creditosSemestre;
        mostrar>> alumno.creditosAcumulados;
        mostrar>> alumno.mensualidad;

        if(codigo==alumno.codigo)
        {
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<alumno.codigo<<endl;
          cout<<"Contraseña: "<<alumno.contrasena<<endl;
          cout<<"Nombres: "<<alumno.nombres<<endl;
          cout<<"Apellidos: "<<alumno.apellidos<<endl;
          cout<<"DNI: "<<alumno.dni<<endl;
          cout<<"Correo Institucional: "<<alumno.correoInsti<<endl;
          cout<<"Celular: "<<alumno.celular<<endl;
          cout<<"Direccion: "<<alumno.direccion<<endl;
          cout<<"Estado Civil: "<<alumno.estdCiv<<endl;
          cout<<"Carrera: "<<alumno.carrera<<endl;
          cout<<"Cursos: "<<alumno.cursos<<endl;
          cout<<"Periodo de ingreso: "<<alumno.periodoIngreso<<endl;
          cout<<"Semestre: "<<alumno.semestre<<endl;
          cout<<"Creditos del semestre: "<<alumno.creditosSemestre<<endl;
          cout<<"Creditos acumulados: "<<alumno.creditosAcumulados<<endl;
          cout<<"Mensualidad del alumno: "<<alumno.mensualidad<<endl;
          cout<<"\n\n";
          break;
        }

        getline(mostrar,alumno.codigo);
    }

    mostrar.close();
}

void Menu::modificarUsuarioA()
{
    ifstream lectura;
    ifstream verificador;
    ofstream auxiliar;
    string auxCodigo;
    string codigoModif;
    string auxContra;
    string auxNombres;
    string auxApellidos;
    string auxDNI;
    string auxCorreoInsti;
    string auxCelular;
    string auxDireccion;
    string auxEstdCiv;
    string auxCarrera;
    string auxCursos;
    string auxPeriodoIngreso;
    string auxSemestre;
    string auxCreditosSemestre;
    string auxCreditosAcumulados;
    string auxMensualidad;
    bool encontrado=false;
    bool coincidencia=false;
    bool mismoCodigo=false;
    lectura.open("alumnos.txt",ios::in);
    verificador.open("alumnos.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\t\t\t\t***Modificar los datos de un alumno***\t\t\t\t\n\n";
    if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del alumno que deseas modificar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);

        if(auxCodigo==" ")
        {
            do
            {
                cout<<"codigo de alumno no valido!, intentalo nuevamente: ";
                getline(cin,auxCodigo);
            }
            while(auxCodigo=="");
        }

        codigoModif=auxCodigo;

        getline(lectura,alumno.codigo);
        while(!lectura.eof())
        {
            getline(lectura,alumno.contrasena);
            getline(lectura,alumno.nombres);
            getline(lectura,alumno.apellidos);
            getline(lectura,alumno.dni);
            getline(lectura,alumno.correoInsti);
            getline(lectura,alumno.celular);
            getline(lectura,alumno.direccion);
            getline(lectura,alumno.estdCiv);
            getline(lectura,alumno.carrera);
            //getline(lectura,alumno.cursos);
            lectura>>alumno.cursos;
            getline(lectura,alumno.periodoIngreso);
            //getline(lectura>>alumno.semestre);
            lectura>> alumno.semestre;
            lectura>> alumno.creditosSemestre;
            lectura>> alumno.creditosAcumulados;
            lectura>> alumno.mensualidad;

            if(auxCodigo==alumno.codigo)
            {
                encontrado=true;
                mostarRegistroA(codigoModif);

                cout<<"**********************************************";
                cout<<"\n\n";
                cout<<"Ingresa la nueva informacion para el alumno\n\n";
                fflush(stdin);
                cout<<"Ingresa el codigo del alumno: ";
                getline(cin,auxCodigo);
                if(auxCodigo==codigoModif)
                {
                    mismoCodigo=true;
                }
                if(mismoCodigo==false)
                {
                    do
                    {
                        if(auxCodigo==codigoModif)
                        {
                            coincidencia=false;
                            break;
                        }
                        verificador.seekg(0);
                        getline(verificador,alumno.codigo);
                        while(!verificador.eof())
                        {
                            getline(verificador,alumno.contrasena);
                            getline(verificador,alumno.nombres);
                            getline(verificador,alumno.apellidos);
                            getline(verificador,alumno.dni);
                            getline(verificador,alumno.correoInsti);
                            getline(verificador,alumno.celular);
                            getline(verificador,alumno.direccion);
                            getline(verificador,alumno.estdCiv);
                            getline(verificador,alumno.carrera);
                            //getline(verificador,alumno.cursos);
                            verificador>>alumno.cursos;
                            getline(verificador,alumno.periodoIngreso);
                            //getline(verificador>>alumno.semestre);
                            verificador>> alumno.semestre;
                            verificador>> alumno.creditosSemestre;
                            verificador>> alumno.creditosAcumulados;
                            verificador>> alumno.mensualidad;                           

                            if(auxCodigo==alumno.codigo)
                            {
                                coincidencia=true;
                                cout<<"\n\nYa existe un alumno con ese codigo!\n\n";
                                cout<<"El alumno con ese codigo es: "<<alumno.nombres<<"\n\n";
                                cout<<"Ingresa un codigo valido!: ";
                                getline(cin,auxCodigo);

                                if(auxCodigo==" ")
                                {
                                    do
                                    {
                                        cout<<"\ncodigo de alumno no valido!, ";
                                        cout<<"intentalo nuevamente: ";
                                        getline(cin,auxCodigo);
                                    }
                                    while(auxCodigo=="");
                                }
                                break;
                            }

                            getline(verificador,alumno.codigo);
                        }

                        if(verificador.eof()&&auxCodigo!=alumno.codigo)
                        {
                            coincidencia=false;
                        }

                    }
                    while(coincidencia==true);
                }
                cout << "\033[H\033[2J\033[3J";
                cout<<"***Modificar los datos de un alumno***\n\n";
                cout<<"Ingresa el codigo del administrador que deseas modificar: ";
                cout<<codigoModif;
                mostarRegistroA(codigoModif);
                cout<<"**********************************************";
                cout<<endl;
                cout<<"Ingresa la nueva informacion para el alumno\n";
                cout<<"Ingresa el codigo del alumno: ";
                cout<<auxCodigo;
                fflush(stdin);
                cout<<endl  <<  "Contrasena: "; 
                getline(cin,auxContra);
                fflush(stdin);
                cout<<"Nombres: ";
                getline(cin,auxNombres);;
                fflush(stdin);
                cout << endl << "Apellidos: ";
                getline(cin, auxApellidos);
                fflush(stdin);
                cout << endl << "DNI: ";
                getline(cin,auxDNI);
                fflush(stdin);
                cout << endl << "Correo institucional: ";
                getline(cin,auxCorreoInsti) ;
                fflush(stdin);
                cout << endl << "Celular: ";
                getline(cin, auxCelular);
                fflush(stdin);
                cout << endl << "Dirección: ";
                getline(cin,auxDireccion);
                fflush(stdin);
                cout << endl << "Estado Civil: ";
                getline(cin,auxEstdCiv);
                fflush(stdin);
                cout<<endl<<"Carrera: ";
                getline(cin, auxCarrera);
                fflush(stdin);
                cout<<endl<<"Cursos: ";
                cin >> auxCursos;
                cin.ignore(1000000, '\n');
                cout<<endl<<"Periodo de ingreso: ";
                getline(cin, auxPeriodoIngreso);
                cout<<endl <<"Semestre: ";
                cin>> auxSemestre;
                fflush(stdin);
                cout<<endl<<"Creditos del semestre actual: ";
                cin>> auxCreditosSemestre;
                fflush(stdin);
                cout<<endl<<"Creditos acumulados: ";
                cin>> auxCreditosAcumulados;
                fflush(stdin);
                cout<<endl<<"Mensualidad del alumno: ";
                cin>> auxMensualidad;
                auxiliar<<auxCodigo<<endl<<auxContra<<endl<<auxNombres<<endl<<auxApellidos<<auxDNI<<endl<<auxCorreoInsti<<endl<<auxCelular<<endl<<auxDireccion<<endl<<auxEstdCiv<<endl<<auxCarrera<<endl<<auxCursos<<endl<<auxPeriodoIngreso<<endl<<auxSemestre<<endl<<auxCreditosSemestre<<endl<<auxCreditosAcumulados<<endl<<auxMensualidad<<endl;
                cout<<"El Registro se ha modificado correctamente.\n\n";
            }


            else
            {
              auxiliar<<alumno.codigo<<endl<<alumno.contrasena<<endl<<alumno.nombres<<endl<<alumno.apellidos<<endl<<alumno.dni<<endl<<alumno.correoInsti<<endl<<alumno.celular<<endl<<alumno.direccion<<endl<<alumno.estdCiv<<endl<<alumno.carrera<<endl<<alumno.cursos<<endl<<alumno.periodoIngreso<<endl<<alumno.semestre<<endl<<alumno.creditosSemestre<<endl<<alumno.creditosAcumulados<<endl<<alumno.mensualidad<<endl;
            }


            getline(lectura,alumno.codigo);
        }

    }
    else
    {
        error();
    }

    if(encontrado==false)
    {
        cout<<"\n\nNo se encontro ningun registro con ese codigo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("alumnos.txt");
    rename("auxiliar.txt","alumnos.txt");
}*/