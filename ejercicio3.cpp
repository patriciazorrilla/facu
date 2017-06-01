#include <iostream>

using namespace std;

int main()
{
    struct cliente {
        char apellidopaterno[15];
        char primernombre[15];
        int numerocliente;
        };


    struct personal {
        char numerotelefonico[ 11 ];
        char direccion[ 50 ];
        char ciudad[ 15 ];
        char estado[ 3 ];
        char codigopostal[ 6 ];
        };
    cliente clientes;
	cout<<"apellidopaterno"<<endl;
	cin >>clientes.apellidopaterno;
	cout<<"primernombre"<<endl;
	cin >>clientes.primernombre;
	cout<<"numerocliente"<<endl;
	cin >>clientes.numerocliente;

	personal personales;
	cout<<"numerotel"<<endl;
	cin >>personales.numerotelefonico;
	cout<<"direccion"<<endl;
	cin >>personales.direccion;
	cout<<"ciudad"<<endl;
	cin >>personales.ciudad;
	cout<<"estado"<<endl;
	cin >>personales.estado;
	cout<<"cod.postal"<<endl;
	cin >>personales.codigopostal;

    cout <<"apellidopaterno=" <<clientes.apellidopaterno << endl;
    cout <<"ciudad=" <<personales.ciudad << endl;
    cout <<"estado=" <<personales.estado << endl;
    return 0;
    }
