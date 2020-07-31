/*▰ En el Almacén De Prati, se desea realizar un programa que llene un
arreglo de 10 números enteros comprendidos entre un rango de 50
y 100 A continuación copiar en otro arreglo esos números
multiplicados por 0 5 y finalmente mostrar ambos arreglos
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototipos
void escribir();
void copia();
//variables
int i,n,V[100],c,ac,X[100];


int main(){
    escribir();
    copia();
    return 0;
}

void escribir(){
    srand(time(NULL));//numero randon
    cout<<"Vector Original:"<<endl;
    for(i = 0; i < 10; i++)
    {
        V[i]= 50 + rand() % (52-1);// asignamos 50/100
        cout << V[i] <<" "<<" ";
        X[i] = V[i];

    }
    cout<<endl;
}

//funcion copia
void copia()
{
    cout<<"Vector Copia:"<<endl;
    for(i = 0;i < 10; i++)
    {
        cout << X[i] * 0.5<<" - ";//multiplicamos copia por 0.5
    }
}

