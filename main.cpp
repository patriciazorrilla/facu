#include <iostream>
#include <string>
using namespace std;

struct tRegistro{
	int codVuel;
	int cantPasaj;
};

struct tListado{
	int numDo;
	string apeNomb;
	int pasSoli;
	int vueloSoli;
	//int pasNvendido;
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
    if(cantDisp > pasSoli){
        total= cantDisp - pasSoli;
        cout << "cant pasajes disponibles" << total <<endl;
    //return 0;
    }
    else{
        pasNven = pasSoli+total;
        cout << "cant pasajes disponibles" << pasNven <<endl;
    //return 0;
    }
}

/*nodoListado* buscarListado(nodoListado* lista,int info)
{
	nodoListado* p=lista;
	while (p!=NULL && p->info.numDo!=info)
	{
		p=p->sgte;
	}
	return p;
}*/

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



	/*nodoListado* lista=NULL;
	nodoListado* aux=NULL;
	tListado regAux;

    nodoListado* listaM=NULL;
    listaM=lista;*/
    while(listaDni!=NULL){

        cout << "Dni:" << listaDni->info.dni<< ", apellido y nombre: " << listaDni->info.apeNombre << " CANT DE PASAJES: " << listaDni->info.cantPasajes<< " Cod de vuelo: " << listaDni->info.codVuelo<<endl;
        listaDni=listaDni->sgte;
    }


    tRegistro vectorRegistro[]={{111111,200},{222222,140},{333333,180},{444444,232},{555555,290}};
    nodoListado* lista=NULL;
    nodoListado* aux=NULL;
    tListado regAux;


    for(i=0;i<=tRegistro.length;i=+2){
            //for(int i=3; i<=500;i=+4){
                if(vectorRegistro[i]!= NULL){
                    aux=buscarListado(lista,vectorPolizas[i].pasSoli);
                    if(aux==NULL)
                    {

                        regAux.codVuelo=vectorRegistro[i].codVuel;
                        //regAux.cantPasaj=calcular(vectorRegistro[i].cantPasaj);
                        regAux.cantPasaj=calcular(vectorRegistro[i].cantDisp,regAux.pasSoli);
                        //regAux.pasNvend=calcular([i]); //pasNvendido,
                        regAux.apeNomb=listaDni.info.dni;
                        regAux.numDo=listaDni.info.apeNombre;
                        //cout<<regAux);
                        cout << "cant pasajes disponibles" << regAux.cantPasaj<<endl;
                    }


                    else
                    {
                        aux->info.cantDisp+=calcular(vectorRegistro[i].pasNven);
                        cout << "cant pasajes no vendidos" << regAux>pasNven<<endl;


                    }
                  }
            //}
        }
           // nodoListado* listaM=NULL;
           // listaM=lista;
    /*tRegistro.codVuelo=vueloSoli;
    tRegistro.cantPasaj= cantLibres;
    total=0;
    tDni.cantPasajes=pasaSolicitados;

    for(i=1;i<=length.tRegistro;i+=2){
        if (total == cantLibres){
            total=cantLibres-pasaSolicitados;
        }
        else{

        }
    }*/
    return 0;
}


