#include <iostream>
#include <stdlib.h>



//LIBRERIA PARA TRABAJAR CON ARCHIVOS
#include <fstream>
using namespace std;
//variables globales
string nombre;
string apellido;
int edad;

//prototipos
void escribir();
void lectura();
void menu();
void escribirPiramide();
void lecturaPiramide();



int main()
{
    menu();
    //aniadir();

    return 0;
}
//ingresar datos
void escribir(){
    ofstream archivo;
    string nombreArchivo;

    char r;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::app);//open un archivo/c_stringresa el nombre
    if(archivo.fail()) //fail crea un true o false
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }


    do
    {
        cout<<"\tIngrese el nombre :";
        getline(cin,nombre,'\n');

        cout<<"\tIngrese el apellido :";
        getline(cin,apellido,'\n');

        cout<<"\tIngrese la edad :";
        cin>>edad;

        archivo<<nombre<<" "<<apellido<<" "<<edad<<"\n";

        cout<<"DESEA INGRESAR OTRO CONTACTO s/n :";
        cin>>r;
        cin.ignore();
    }
    while(r=='s');

archivo.close();//cerrar archivo
}

//funcion leer datos

void lectura(){
    ifstream archivoLectura;
    string texto;
    archivoLectura.open("contactos.txt",ios::in);//abrir archivo

    if(archivoLectura.fail())
    {
        cout <<"nose pudo abrir el archivo",
             exit (1);
    }

    while(!archivoLectura.eof())  //mientras no sea el final del archivo
    {
        archivoLectura>>nombre>>apellido>>edad;

        if(!archivoLectura.eof())
            {
            getline(archivoLectura,texto);
            cout<<"NOMBRE ES: "<<nombre<<"\n";
            cout<<"APELLIDO ES: "<<apellido<<"\n";
            cout<<"EDAD ES: "<<edad<<"\n";

            }
    }
    archivoLectura.close();//cerramos el archivo

}

//funcion menu
void menu()  {
    int opc = 0 ;

    cout << "Bienvenido al deber clase N:19\n ";

    while(opc!=3) {
        cout << "menu"<< endl;
        cout << "1.Crear texto contactos"<<endl;
        cout << "2.Piramide"<<endl;
        cout << "3.Salir"<<endl;
        cout << "ingrese la opcion(1-3) :";
        cin >>opc;
        cin.ignore();

            switch (opc)
            {
            case 1 :
                escribir();
                lectura();
                break;

            case 2:
                escribirPiramide();

                lecturaPiramide();


                break ;

            case 3:
                cout <<"Gracias vuelva pronto";



            default:
                cout << "Usted ha ingresado una opcion incorrecta";

        }
    }
}


//ingresar datos
void escribirPiramide(){
    ofstream archivoPiramide;
    string nombreArchivo;

    char r;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin,nombreArchivo);

    archivoPiramide.open(nombreArchivo.c_str(),ios::app);//open un archivo/c_stringresa el nombre
    if(archivoPiramide.fail()) //fail crea un true o false
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    int num ;
  cout << "Ingrese el numero de Niveles de la piramide :";
  cin >> num;

  for(int i =0;i<num;i++){

    for(int j=0; j<num-i; j++ )
        {
            // printing stars
            archivoPiramide << " *";
        }

        // ending line after each row
        archivoPiramide << endl;
  }

archivoPiramide.close();//cerrar archivo
}


//Funcion leer datos piramide
void lecturaPiramide() {
    ifstream archivoPiramide ;
    string texto;
    archivoPiramide.open("piramide.txt",ios::in);//abrir archivo

    if(archivoPiramide.fail())
    {
        cout <<"nose pudo abrir el archivo",
             exit (1);
    }

    while(!archivoPiramide.eof())  //mientras no sea el final del archivo
{
            getline(archivoPiramide,texto);
            cout << texto<< endl;
    }
    archivoPiramide.close();//cerramos el archivo
}
