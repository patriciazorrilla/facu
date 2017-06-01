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

    int positivo=0;
    int negativo=0;
    nodo *pila = NULL;
    int dato;

    cout << " Digite un numero " ;
    cin >> dato;
    agregarpila(pila,dato);

    cout << " Digite un numero " ;
    cin >> dato;
    agregarpila(pila,dato);

    cout << " Digite un numero " ;
    cin >> dato;
    agregarpila(pila,dato);

    cout << " Digite un numero " ;
    cin >> dato;
    agregarpila(pila,dato);


    cout<<"\n sacando los elementos de la pila: ";
    while(pila != NULL){
            sacarpila(pila , dato);
            if(dato > 0){
                positivo++;
        }
            else{
                dato < 0;
                negativo++;
            }
            cout<<dato<<" , ";
        }
    cout<<"\n los numeros positivos son:"<<positivo << endl;
    cout<<" los numeros negativo son:"<<negativo << endl;
    return 0;
}


void agregarpila(nodo *&pila,int n){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\ elemento "<<n<<" ha sido agregado " << endl;

}

void sacarpila(nodo *&pila,int &n){
    nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;

}

