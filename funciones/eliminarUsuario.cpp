#include "../include/liberman.h"
void Menu :: eliminarUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Eliminar un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      //eliminarUsuarioD();
      break;
    }
    case 'P': 
    {
      //eliminarUsuarioP();
      break;
    }
    case 'A': 
    {
      //eliminarUsuarioA();
      break; 
    }
  }
}

/*void Menu::eliminarUsuarioD()
{
    ifstream lectura;
    ofstream auxiliar;
    bool encontrado=false;
    string auxCodigo;
    char respuesta[5];
    lectura.open("admin.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\n\n\t\t\t\t***Eliminar un Administrador***\t\t\t\t\n\n";
    if(lectura.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del administrador que deseas eliminar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);
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
                cout<<"Realmente deseas eliminar a: "<<admin.nombres<<" (s/n)?: ";
                cin.getline(respuesta,5);
                if(strcmp(respuesta,"s")==0||strcmp(respuesta,"S")==0||
                        strcmp(respuesta,"si")==0||strcmp(respuesta,"SI")==0||
                        strcmp(respuesta,"Si")==0||strcmp(respuesta,"sI")==0)
                {
                    cout<<"\n\nEl administrador se ha eliminado correctamente\n\n";
                }

                else
                {

                    cout<<"\n\nCliente conservado\n\n";
                    auxiliar<<admin.codigo<<endl<<admin.contrasena<<endl<<admin.nombres<<endl<<admin.apellidos<<endl<<admin.dni<<endl<<admin.correoInsti<<endl<<admin.celular<<endl<<admin.direccion<<endl<<admin.estdCiv<<endl;

                }

            }
            else
            {
                auxiliar<<admin.codigo<<endl<<admin.contrasena<<endl<<admin.nombres<<endl<<admin.apellidos<<endl<<admin.dni<<endl<<admin.correoInsti<<endl<<admin.celular<<endl<<admin.direccion<<endl<<admin.estdCiv<<endl;
            }
            getline(lectura,admin.codigo);
        }
        if(encontrado==false)
        {
            cout<<"\n\nNo se encontro el codigo: "<<auxCodigo<<"\n\n";
        }

    }
    else
    {
        error();
    }
    lectura.close();
    auxiliar.close();
    remove("admin.txt");
    rename("auxiliar.txt","admin.txt");

}

void Menu::eliminarUsuarioP()
{
    ifstream lectura;
    ofstream auxiliar;
    bool encontrado=false;
    string auxCodigo;
    char respuesta[5];
    lectura.open("prof.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\n\n\t\t\t\t***Eliminar un Profesor***\t\t\t\t\n\n";
    if(lectura.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del profesor que eliminar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);
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
            getline(lectura,profesor.cursosEnsena);
            getline(lectura,profesor.sueldo);
            getline(lectura,profesor.perfilProf);
            getline(lectura,profesor.suplente);

            if(auxCodigo==profesor.codigo)
            {
                encontrado=true;
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
                cout<<"Realmente deseas eliminar a: "<<profesor.nombres<<" (s/n)?: ";
                cin.getline(respuesta,5);
                if(strcmp(respuesta,"s")==0||strcmp(respuesta,"S")==0||
                        strcmp(respuesta,"si")==0||strcmp(respuesta,"SI")==0||
                        strcmp(respuesta,"Si")==0||strcmp(respuesta,"sI")==0)
                {
                    cout<<"\n\nEl profesor se ha eliminado correctamente\n\n";
                }

                else
                {

                    cout<<"\n\nCliente conservado\n\n";
                    auxiliar<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor.nombres<<endl<< profesor.apellidos <<endl<< profesor.dni<<endl<< profesor.correoInsti<<endl<<profesor.celular<< endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl<<profesor.cursosEnsena<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente<<endl;

                }

            }
            else
            {
                auxiliar<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor.nombres<<endl<< profesor.apellidos <<endl<< profesor.dni<<endl<< profesor.correoInsti<<endl<<profesor.celular<< endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl<<profesor.cursosEnsena<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente<<endl;
            }
            getline(lectura,profesor.codigo);
        }
        if(encontrado==false)
        {
            cout<<"\n\nNo se encontro el codigo: "<<auxCodigo<<"\n\n";
        }

    }
    else
    {
        error();
    }
    lectura.close();
    auxiliar.close();
    remove("prof.txt");
    rename("auxiliar.txt","prof.txt");

}

void Menu::eliminarUsuarioA()
{
    ifstream lectura;
    ofstream auxiliar;
    bool encontrado=false;
    string auxCodigo;
    char respuesta[5];
    lectura.open("prof.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\n\n\t\t\t\t***Eliminar un Profesor***\t\t\t\t\n\n";
    if(lectura.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del profesor que eliminar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);
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
            getline(lectura,profesor.cursosEnsena);
            getline(lectura,profesor.sueldo);
            getline(lectura,profesor.perfilProf);
            getline(lectura,profesor.suplente);

            if(auxCodigo==profesor.codigo)
            {
                encontrado=true;
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
                cout<<"Realmente deseas eliminar a: "<<profesor.nombres<<" (s/n)?: ";
                cin.getline(respuesta,5);
                if(strcmp(respuesta,"s")==0||strcmp(respuesta,"S")==0||
                        strcmp(respuesta,"si")==0||strcmp(respuesta,"SI")==0||
                        strcmp(respuesta,"Si")==0||strcmp(respuesta,"sI")==0)
                {
                    cout<<"\n\nEl profesor se ha eliminado correctamente\n\n";
                }

                else
                {

                    cout<<"\n\nCliente conservado\n\n";
                    auxiliar<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor.nombres<<endl<< profesor.apellidos <<endl<< profesor.dni<<endl<< profesor.correoInsti<<endl<<profesor.celular<< endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl<<profesor.cursosEnsena<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente<<endl;

                }

            }
            else
            {
                auxiliar<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor.nombres<<endl<< profesor.apellidos <<endl<< profesor.dni<<endl<< profesor.correoInsti<<endl<<profesor.celular<< endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl<<profesor.cursosEnsena<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente<<endl;
            }
            getline(lectura,profesor.codigo);
        }
        if(encontrado==false)
        {
            cout<<"\n\nNo se encontro el codigo: "<<auxCodigo<<"\n\n";
        }

    }
    else
    {
        error();
    }
    lectura.close();
    auxiliar.close();
    remove("prof.txt");
    rename("auxiliar.txt","prof.txt");

}*/