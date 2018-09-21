#include <iostream>
#include "PROYECTO.H"

using namespace std;

main()
{

  int opc;
do
{

cout<<"1)Cargar conjunto "<<endl;
cout<<"2)Union "<<endl;
cout<<"3)Interseccion "<<endl;
cout<<"4)Diferencia "<<endl;
cout<<"5)Diferencia simetrica "<<endl;
cout<<"6)Complemento "<<endl;
cout<<"7)Producto cartesiano"<<endl;
cout<<"0)SALIR"<<endl;
cout<<"Ingrese opcion: "<<endl;
cin>> opc;

  switch(opc)
  {
    case 1: cout<<"Cargar conjunto";

    break;

    case 2: cout<<"Union";

    break;

    case 3: cout<<"Interseccion";

    break;

    case 4: cout<<"Diferencia";

    break;

    case 5: cout<<"Diferencia simetrica";

    break;

    case 6: cout<<"Complemento";
    break;

    case 7: cout<<"Producto Cartesiano";
    break;

    default: cout<<"Opcion incorrecta";
    break;

    case 8: cout<<"SALIR";

  }
} while(opc!=0);
}
