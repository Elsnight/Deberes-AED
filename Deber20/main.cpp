/*La asociación de vinicultores tiene como política fijar un precio inicial al
kilo de uva, la cual se clasifica en tipos A y B, y además en tamaños 1 y 2.
Cuando se realiza la venta del producto, ésta es de un solo tipo y tamaño,
se requiere determinar cuánto recibirá un productor por la uva que entrega
en un embarque, considerando lo siguiente: si es de tipo A, se le cargan
20¢ al precio inicial cuando es de tamaño 1; y 30¢ si es de tamaño 2. Si
es de tipo B, se rebajan 30¢ cuando es de tamaño 1, y 50¢ cuando es de
tamaño 2. Realice un algoritmo para determinar la ganancia obtenida y
represéntelo mediante diagrama de flujo, pseudocódigo y diagrama N/S.*/


#include <iostream>
#include <iomanip>
using namespace std;

//LIBRERIA PARA TRABAJAR CON ARCHIVOS
#include <fstream>

//prototipos
void datos();
void tipoA1(int precio,int kilo);
void tipoA2(int precio,int kilo);
void tipoB1(int precio,int kilo);
void tipoB2(int precio,int kilo);
void archivos(char tipo,int tamanio,float precio,float kilo);


int main(){
    datos();
    return 0;
}

void datos() {

int tamanio;
float kilo, precio;
char tipo;

cout <<"\t\t"<<"Bienvenido al deber clase N:20\n "<<endl;

cout << "Ingresa el tipo de uva (A o B): ";
cin>> tipo;
cout << "Ingresa el tamanio (1 o 2):";
cin>> tamanio;
cout << "Ingresa el precio por kilo : ";
cin>> precio;
cout << "Ingresa cuantos kilo : ";
cin>> kilo;
cin.ignore();//basear el buffer



if((tipo == 'A')&& (tamanio == 1)) {
        archivos(tipo,tamanio, precio,kilo);//llamamos funcion archivos
        tipoA1(precio,kilo);



}else if((tipo == 'A')&& (tamanio == 2)) {
    archivos(tipo,tamanio, precio,kilo);//llamamos funcion archivos
    tipoA2(precio ,kilo);



}else if((tipo == 'B')&& (tamanio == 1)) {
    archivos(tipo,tamanio, precio,kilo);//llamamos funcion archivos
    tipoB1(precio,kilo);



}else if((tipo == 'B')&& (tamanio == 2)) {
     archivos(tipo,tamanio, precio,kilo);//llamamos funcion archivos
    tipoB2(precio ,kilo);

}
}

// funcion tipo A tamño 1
void tipoA1(int precio,int kilo)
{

    ofstream uvas;
    string nombreArchivo;
    uvas.open("uvas.txt",ios::app);
    if(uvas.fail())
    {
        cout <<"nose pudo abrir el archivo",
             exit (1);
    }

    const float valor1=0.20;
    float cantidad=0;
    cantidad=(precio+valor1)*kilo;
    cout<<" Total :"<<cantidad<<endl;

    uvas<<" Total :"<<cantidad<<endl;

    uvas.close();


}

//funcion tipo A tamño 2
void tipoA2(int precio,int kilo)
{
    ofstream uvas;
    string nombreArchivo;
    uvas.open("uvas.txt",ios::app);
    if(uvas.fail())
    {
        cout <<"nose pudo abrir el archivo",
             exit (1);
    }

    const float valor1=0.30;
    float cantidad=0;
    cantidad=(precio+valor1)*kilo;
    cout<<" Total :"<<cantidad<<endl;
    uvas<<" Total :"<<cantidad<<endl;
    uvas.close();



}

//funcion tipo B tamño 1
void tipoB1(int precio,int kilo){
    ofstream uvas;
    string nombreArchivo;
    uvas.open("uvas.txt",ios::app);
    if(uvas.fail())
    {
        cout <<"nose pudo abrir el archivo",
             exit (1);
    }

    const float valor1=0.30;
    float cantidad = 0;
    cantidad=(precio-valor1)*kilo;
    cout<<" Total :"<<cantidad<<endl;
    uvas<<" Total :"<<cantidad<<endl;
    uvas.close();

}

//funcion tipo B tamño 2

void tipoB2(int precio,int kilo){
    ofstream uvas;
    string nombreArchivo;
    uvas.open("uvas.txt",ios::app);
    if(uvas.fail())
    {
        cout <<"nose pudo abrir el archivo",
             exit (1);
    }
    const float valor1=0.50;
    float cantidad=0;
    cantidad=(precio-valor1)*kilo;
   cout<<" Total :"<<cantidad<<endl;
    uvas<<" Total :"<<cantidad<<endl;
    uvas.close();


}

void archivos(char tipo,int tamanio,float precio,float kilo) {
    ofstream uvas;
    string nombreArchivo;

    cout << "Ingrese el nombre del archivo: ";
    getline(cin,nombreArchivo);

    uvas.open(nombreArchivo.c_str(),ios::app);//open un archivo/c_stringresa el nombre
    if(uvas.fail()) //fail crea un true o false
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
     uvas<<"Tipo de uva:"<<tipo<<"\n";
       uvas<<"Tamanio de uva:"<<tamanio<<"\n";
       uvas<<"precio de uva:"<<precio<<"\n";
       uvas<<"Kilo de uva:"<<kilo<<"\n";

       uvas.close ();


}
