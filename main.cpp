#include<iostream>
#include "prototipos.h"
#include "definiciones.h"
#include "string.h"
#define T 30
using namespace std;

int main (){
	Archivo listaProducto = NULL;
	cadena comando = new char[100];
	cout << ">";
	cin.getline(comando,100);
	char delim[] = "( \" , \" )"; //defino los limitadores en su respectivo orden
	char *parametro[T]; //defino arreglo con 4 punteros a char
	int contador = 0;
	parametro[contador] = strtok(comando,delim);
	contador++;
	parametro[contador] = strtok(NULL,delim);
	while (parametro[contador]!=NULL){
		contador++;
		parametro[contador] = strtok(NULL,delim);
	}
	opciones opcion;
	while (strcmp(parametro[0],"salgo")!= 0){
		opcion = error;
		if (strcmp(parametro[0],"Creararchivo")==0){
			opcion = Creararchivo;
		}
		if (strcmp(parametro[0],"Crearversion")==0){
			opcion = Crearversion;
		}
		if (strcmp(parametro[0],"Mostrarversiones")==0){
			opcion = Mostrarversiones;
		}
		if (strcmp(parametro[0],"Insertarlinea")==0){
			opcion = Insertarlinea;
		}
		if (strcmp(parametro[0],"Borrarlinea")==0){
			opcion = Borrarlinea;
		}
		if (strcmp(parametro[0],"Mostrarcambios")==0){
			opcion = Mostrarcambios;
		}
		if (strcmp(parametro[0],"Borrararchivo")==0){
			opcion = Borrararchivo;
		}
		if (strcmp(parametro[0],"Borrarversion")==0){
			opcion = Borrarversion;
		}
		if (strcmp(parametro[0],"Mostrartexto")==0){
			opcion = Mostrartexto;
		}
		if (strcmp(parametro[0],"iguales")==0){
			opcion = iguales;
		}
		if (strcmp(parametro[0],"Versionindependiente")==0){
			opcion = Versionindependiente;
		}
		switch (opcion){
		case Creararchivo:
			
			Archivo CrearArchivo( );
			break;
		case Crearversion:
			muestroRetorno(CrearVersion(a, version));
			break;
		case Mostrarversiones:
			muestroRetorno(MostrarVersiones(a));
			break;
		case Insertarlinea:
			muestroRetorno(InsertarLinea(a, version, linea, nroLinea));
			break;
		case Borrarlinea:
			muestroRetorno(BorrarLinea(a, version,  nroLinea));
			break;
		case Mostrarcambios:
			muestroRetorno(MostrarCambios( a,  version));
			break;
		case Borrararchivo:
			muestroRetorno(BorrarArchivo(a));
			break;
		case Borrarversion:
			muestroRetorno(BorrarVersion(a,  version));
			break;
		case Mostrartexto:
			muestroRetorno(MostrarTexto( a, version));
			break;
		case iguales:
			muestroRetorno(Iguales( a, version1,  version2, iguales));
			break;
		case Versionindependiente:
			muestroRetorno(VersionIndependiente(a, version));
			break;
		default:
			muestroRetorno(ERROR);
		}
		cout << ">";
		cin.getline(comando,100);
		int contador = 0;
		parametro[contador] = strtok(comando,delim);
		contador++;
		parametro[contador] = strtok(NULL,delim);
		while (parametro[contador]!=NULL){
			contador++;
			parametro[contador] = strtok(NULL,delim);
		}
		
	}
	
	
	
	return 0;
}

