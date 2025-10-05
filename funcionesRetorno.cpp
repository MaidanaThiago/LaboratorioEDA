#include<iostream>
#include "prototipos.h"
#include "definiciones.h"
using namespace std;

Archivo CrearArchivo(char * nombre){
	return NULL;
}

TipoRet BorrarArchivo(Archivo &a)/*FACU*/{
	
	if (a == NULL)
		return ERROR; // Seguridad adicional
	
	// Liberar todas las versiones de nivel 1
	for (int i = 0; i < a->cantVersionesNivel1; i++) {
		liberarVersion(a->versionesNivel1[i]);
	}
	
	// Liberar array de versiones de nivel 1
	if (a->versionesNivel1 != NULL)
		delete a->versionesNivel1;
	
	// Liberar nombre del archivo
	if (a->nombre != NULL)
		delete a->nombre;

	delete a;
	
	// Asignar NULL al puntero
	a = NULL;
	
	return OK;
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

	
	return NO_IMPLEMENTADA;
}

TipoRet BorrarLinea(Archivo &a, char * version, unsigned int nroLinea){
	
	
	return NO_IMPLEMENTADA;
}

TipoRet MostrarTexto(Archivo a, char * version)/*FACU*/{
	
	
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
