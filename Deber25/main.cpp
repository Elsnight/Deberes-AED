/*Un empleado de la tienda “Tiki Taka” realiza N ventas durante el día, se requiere
saber cuántas de ellas fueron mayores a $1000, cuántas fueron mayores
a $500 pero menores o iguales a $1000, y cuántas fueron menores o
iguales a $500. Además, se requiere saber el monto de lo vendido en cada
categoría y de forma global. Realice un algoritmo que permita determinar
lo anterior y represéntelo mediante el diagrama de flujo, el pseudocódigo
y el diagrama N/S, utilizando el ciclo apropiado.*/



#include <iostream>
#include <fstream>


using namespace std;
void ingresa();

int main()
{
    ingresa();
}

void ingresa(){
    //crear archivo
     ofstream archivo;
    archivo.open("Ventas.txt",fstream::app);//apertura y creacion


    int N=0,V=0;
    int A = 0, B = 0, C = 0;
    int T1 = 0, T2 = 0,T3=0;
    int CN = 1,TT=0;

    cout<< "Ingrese el numero de ventas :";
    archivo<< "Ingrese el numero de ventas :";
    cin>>N;
    archivo<<N<<endl;

    while(CN<=N){
        cout<< "Ingrese la venta "<<CN<<":";
        cin>>V;
        archivo<< "Ingrese la venta "<<CN<<":";
        archivo<<V<<endl;
        if (V>1000)
        {
            A++;
            T1=T1+V;
        }
        else if(V>500)
        {
            B++;
            T2=T2+V;
        }
        else
        {
            C=C+1;
            T3=T3+V;
        }
        TT=TT+V;
        CN=CN+1;
    }
    cout<<"mayores a 1000 :"<<A<<endl;
    cout<<"mayor a 500 menos a 1000 :"<<B<<endl;
    cout<<"menores a 500 :"<<C<<endl;
    cout<<"Total ventas mayores 1000 :"<<T1<<endl;
    cout<<"Total ventas mayores 500 :"<<T2<<endl;
    cout<<"Total ventas menores 1000 :"<<T3<<endl;
    cout<<"Total ventas :"<<TT<<endl;

    //enviar al archivo
     archivo<<"mayores a 1000 :"<<A<<endl;
    archivo<<"mayor a 500 menos a 1000 :"<<B<<endl;
    archivo<<"menores a 500 :"<<C<<endl;
    archivo<<"Total ventas mayores 1000 :"<<T1<<endl;
    archivo<<"Total ventas mayores 500 :"<<T2<<endl;
    archivo<<"Total ventas menores 1000 :"<<T3<<endl;
    archivo<<"Total ventas :"<<TT<<endl;

    archivo.close();

}
