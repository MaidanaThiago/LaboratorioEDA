#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H
#include "definiciones.h"
//Prototipos TipoRet
Archivo CrearArchivo(char * nombre);

TipoRet BorrarArchivo(Archivo &a);

TipoRet CrearVersion(Archivo &a, char * version);
TipoRet BorrarVersion(Archivo &a, char * version);

TipoRet MostrarVersiones(Archivo a);

TipoRet InsertarLinea(Archivo &a, char * version, char * linea,unsigned int nroLinea);

TipoRet BorrarLinea(Archivo &a, char * version, unsigned int nroLinea);

TipoRet MostrarTexto(Archivo a, char * version);

TipoRet MostrarCambios(Archivo a, char * version);

TipoRet Iguales(Archivo a, char * version1, char * version2, bool &iguales);

TipoRet VersionIndependiente(Archivo &a, char * version);

//Prototipos de funciones
void liberarModificaciones(Modificacion *m);

void liberarVersion(Version *v);
#endif
