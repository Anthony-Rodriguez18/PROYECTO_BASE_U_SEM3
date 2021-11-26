#ifndef ADMIN_H_
#define ADMIN_H_
#define NUMBER_ADMIN_PROPERTIES 9

class Admin : public  Usuario
{
  protected:
    vector<Admin *> admin__;
  public:
    Admin();
    //~Admin();
  
    //void menuAdmin();
    vector<Admin *> getAll();

    //MEMORIA DINAMICA
    
    void SaveAll();
    void DeleteObjeto(int );
    void AddObjeto(Admin * admin_);
    Admin* findByCodigo(std::string );
    Admin* findByContrasena(std::string );
    Admin* findByNombre(std::string );
    Admin* findByApellido(std::string );
    Admin* findByDNI(long );
    Admin* findByCelular(long );
    Admin* findByCorreoInsti(std::string );
    Admin* findByDireccion(std::string );
    Admin* findByEstadCiv(std::string );
    void readDatabase(); 
};
#endif