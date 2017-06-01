#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
    int dato;
    nodo *siguiente;
};

//Prototipo de Función
void agregarpila(nodo *&,int);
void sacarpila(nodo *&,int &);

int main(){
    nodo *pila = NULL;
    nodo *pila2 = NULL;
    int dato, contador, posicion, contador_auxiliar;
    contador = 1;
    while (contador <=10){
        dato = contador;
        agregarpila(pila,dato);
        contador++;
        cout<<" datos cargados: "<<dato << endl;
    };

    //cout<<"\n sacando los elementos de la pila: ";

    while(pila != NULL){
            sacarpila(pila,dato);
            agregarpila(pila2,dato);
            }

    //cout<<" primer dato de la pila vieja: "<<dato << endl;

    contador_auxiliar = 0;
    posicion = 0;
    while(pila2!=NULL){
        sacarpila(pila2,dato);
    	cout<<"mostrando la pila : "<<dato << endl;
        contador_auxiliar++;
        agregarpila(pila,dato);
            
    }

}
void agregarpila(nodo *&pila,int n){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    //cout<<"\ elemento "<<n<<" ha sido agregado " << endl;

}

void sacarpila(nodo *&pila,int &n){
    nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;

}
