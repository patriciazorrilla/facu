#include <iostream>
#include <string>
using namespace std;

struct tRegistro{
	int codVuel;
	int cantPasaj;
};

struct tListado{
	int noVendidos;
	int pasDisponibles;
	int vueloSoli;

};


struct tDni{
	int codVuelo;
	int cantPasajes;
	int dni;
	string apeNombre;
};
struct nodoDni{
	tDni info;
	nodoDni* sgte;
};

struct nodoListado{
	tListado info;
	nodoListado* sgte;
};

//calcular %
void calcular(int cantDisp, int pasSoli, int pasNven){
    int total= 0;
    int resul=0;
    if(cantDisp > pasSoli){
        total= cantDisp - pasSoli;

    }
    else{
        resul = pasSoli + pasNven;
        cout << "cant de pasajes no vendidos" << resul <<endl;
    //return 0;
    }
}

nodoListado* buscarListado(nodoListado* lista,int info)
{
	nodoListado* p=lista;
	while (p!=NULL && p->info.vueloSoli!=info)
	{
		p=p->sgte;
	}
	return p;
}

void push (nodoDni* &pila, tDni v)
{
	nodoDni* nuevo = new nodoDni(); //genera el nuevo nodo reservando espacio en memoria
	nuevo->info.codVuelo= v.codVuelo; // asigna el dato al campo de información
	nuevo->info.dni = v.dni;// asigna el dato al campo de información
    nuevo->info.apeNombre= v.apeNombre;// asigna el dato al campo de información
	nuevo->info.cantPasajes= v.cantPasajes;// asigna el dato al campo de información
	nuevo->sgte = pila;
	pila = nuevo; //apunta la pila al nuevo nodo insertado
}
int main(){
	nodoDni* listaDni=NULL;
	tDni v;
	v.codVuelo = 111111;
	v.dni=33555444;
	v.cantPasajes= 2;
	v.apeNombre="apu";
	push(listaDni,v);
	v.codVuelo = 222222;
	v.apeNombre="aphh";
	v.cantPasajes= 4;
	v.dni=22333444;
	push(listaDni,v);
	v.codVuelo = 333333;
	v.apeNombre="amb bla";
	v.cantPasajes= 10;
	v.dni=66555222;
	push(listaDni,v);
	v.codVuelo = 444444;
	v.apeNombre="pat zorr /n";
	v.cantPasajes= 3;
	v.dni=33222444;
	push(listaDni,v);
	v.codVuelo = 555555;
	v.apeNombre="lll";
	v.cantPasajes= 3;
	v.dni=66666666;
	push(listaDni,v);

    while(listaDni!=NULL){

        cout << "Dni:" << listaDni->info.dni<< ", apellido y nombre: " << listaDni->info.apeNombre << " CANT DE PASAJES: " << listaDni->info.cantPasajes<< " Cod de vuelo: " << listaDni->info.codVuelo<<endl;
        listaDni=listaDni->sgte;
    }


    tRegistro vectorRegistro[]={{111111,200},{222222,140},{333333,180},{444444,232},{555555,290}};
    nodoListado* lista=NULL;
    nodoListado* aux=NULL;
    tListado regAux;
    int i;


    for(i=0;i<=500;i++){
                if(listaDni != NULL){
                    aux=buscarListado(lista,vectorRegistro[i].codVuel);
                    if(aux==NULL)
                    {
                        regAux.vueloSoli=vectorRegistro[i].codVuel;
                        regAux.pasDisponibles=vectorRegistro[i].cantPasaj;
                        regAux.noVendidos=0;
                    }
//calcular(vectorRegistro[i].cantDisp,regAux.pasSoli)
                    else
                    {
                      aux->info.vueloSoli+= calcular(vectorRegistro[i].cantPasaj,regAux.pasDisponibles,regAux.noVendidos)

                        }

                    }
                  }

        }

    return 0;
}
