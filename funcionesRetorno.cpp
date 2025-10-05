#include<iostream>
#include "prototipos.h"
#include "definiciones.h"
using namespace std;

TipoRet BorrarArchivo(Archivo &a){
	return NO_IMPLEMENTADA;
}

TipoRet CrearVersion(Archivo &a, char * version){
	return NO_IMPLEMENTADA;
}
TipoRet BorrarVersion(Archivo &a, char * version){
	return NO_IMPLEMENTADA;
}

TipoRet MostrarVersiones(Archivo a){
	return NO_IMPLEMENTADA;
}

TipoRet InsertarLinea(Archivo &a, char * version, char * linea,unsigned int nroLinea){
	if (a == NULL || version == NULL || linea == NULL || nroLinea == 0){
		return ERROR;
	}
	//a = insertoLinea(a,version,linea,nroLinea);
	 return NO_IMPLEMENTADA;
}
	
	TipoRet BorrarLinea(Archivo &a, char * version, unsigned int nroLinea){
		return NO_IMPLEMENTADA;
	}
	
	TipoRet MostrarTexto(Archivo a, char * version){
		return NO_IMPLEMENTADA;
	}
	
	TipoRet MostrarCambios(Archivo a, char * version){
		return NO_IMPLEMENTADA;
	}
	
	TipoRet Iguales(Archivo a, char * version1, char * version2, bool &iguales){
		return NO_IMPLEMENTADA;
	}
		
	TipoRet VersionIndependiente(Archivo &a, char * version){
		return NO_IMPLEMENTADA;
	}
		
	void muestroRetorno(TipoRet retorno){
		switch (retorno){
			case OK:
				cout << "OK"<< endl;
				break;
			case ERROR:
				cout << "ERROR" << endl;
				break;
			case NO_IMPLEMENTADA:
				cout << "NO IMPLEMENTADA"<<endl;
		}
	}
