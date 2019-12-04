#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "date.h"
#include "usuario.h"
#include "persona.h"
#include "medico.h"
#include "enfermeros.h"
#include "paciente.h"
#include "medicamentos.h"

void agregarPaciente(void){

    std::cout <<"     REGISTRANDO UN PACIENTE"<<'\n'<<'\n';
    ostringstream aux;

    Paciente tem ;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR SU INFORMACION        "<<'\n'<<'\n';
    tem.mostrarPaciente();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR SU INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;

    if ( confirmar == 0){
        while(true){
            int num;
            std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
            std::cout << "1  MODIFICAR APELLIDO        "<<'\n';
            std::cout << "2  MODIFICAR NOMBRE        "<<'\n';
            std::cout << "3  MODIFICAR DNI        "<<'\n';
            std::cout << "4  MODIFICAR CUENTA        "<<'\n';
            std::cout << "5  MODIFICAR CONTRASEÑA        "<<'\n'<<'\n';
            std::cout << "DIGITE NUMERO : ";std::cin >> num;
            switch(num){
                case 1:{
                    std::cout<<"ESTAS EN EL CASO 1"<<endl;
                }
                default: {
                    system("clear");
                    std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
                }
            }
        }
    }

    string text;
    if ( confirmar == 1 ){
        aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getRegistro()  
        << "___" << tem.getUsuario() << "___" << tem.getContra() << "*****" ;
        text = aux.str();

        ofstream archivo;

        archivo.open("pacientes.txt",ios::app);
        if (archivo.fail())
                std::cout<<"No se puedo abrir el archivo"<<'\n';

        archivo<< text;
        archivo.close();
    }
}

void agregarMedico(){
    std::cout <<"     REGISTRANDO UN MEDICO"<<'\n'<<'\n';

    ostringstream aux;
    string text;

    Medico tem ;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR SU INFORMACION        "<<'\n'<<'\n';
    tem.mostrarMedico();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR SU INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;

    if ( confirmar == 0){
        while(true){
            int num;
            std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
            std::cout << "1  MODIFICAR APELLIDO        "<<'\n';
            std::cout << "2  MODIFICAR NOMBRE        "<<'\n';
            std::cout << "3  MODIFICAR DNI        "<<'\n';
            std::cout << "4  MODIFICAR ESPECIALIDAD        "<<'\n';
            std::cout << "5  MODIFICAR HORAS DISPONIBLES        "<<'\n';
            std::cout << "6  MODIFICAR CUENTA        "<<'\n';
            std::cout << "7  MODIFICAR CONTRASEÑA        "<<'\n'<<'\n';
            std::cout << "DIGITE NUMERO : ";std::cin >> num;
            switch(num){
                case 1:{
                    std::cout<<"ESTAS EN EL CASO 1"<<endl;
                }
                default: {
                    system("clear");
                    std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
                }
            }
        }
    }

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getEspecialidad() << "___" << tem.getCant() << "___" << tem.getUsuario() << "___" << tem.getContra()<< "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("medicos.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<'\n';

    archivo<< text;

    archivo.close();

}

void agregarEnfermeros(){

    ostringstream aux;
    string text;

    Enfermero tem;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR SU INFORMACION        "<<'\n'<<'\n';
    tem.mostrarEnfermero();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR SU INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;

    if ( confirmar == 0){
        while(true){
            int num;
            std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
            std::cout << "1  MODIFICAR APELLIDO        "<<'\n';
            std::cout << "2  MODIFICAR NOMBRE        "<<'\n';
            std::cout << "3  MODIFICAR DNI        "<<'\n';
            std::cout << "4  MODIFICAR ESPECIALIDAD        "<<'\n';
            std::cout << "5  MODIFICAR HORAS DISPONIBLES        "<<'\n';
            std::cout << "6  MODIFICAR CUENTA        "<<'\n';
            std::cout << "7  MODIFICAR CONTRASEÑA        "<<'\n'<<'\n';
            std::cout << "DIGITE NUMERO : ";std::cin >> num;
            switch(num){
                case 1:{
                    std::cout<<"ESTAS EN EL CASO 1"<<endl;
                }
                default: {
                    system("clear");
                    std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
                }
            }
        }
    }

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getEspecialidad() << "___" << tem.getCant() << "___" << tem.getUsuario() << "___" << tem.getContra()<< "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("enfermeros.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<'\n';

    archivo<< text;

    archivo.close();

}

void agregarMedicamentos(){

    ostringstream aux;
    string text;
    Medicamento x;

    aux << x.getNombre() << "__" << x.getCantidad() <<"*****";

    text = aux.str();

    ofstream archivo;

    archivo.open("usuarios.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<'\n';

    archivo<< text;

    archivo.close();
}