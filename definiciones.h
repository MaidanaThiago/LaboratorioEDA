#ifndef DEFINICIONES_H
#define DEFINICIONES_H
#include <stdbool.h>
#include <stddef.h> 
#include "prototipos.h"
typedef char *cadena;

// 1.Tipo de Retorno (Requerido por el problema)
typedef enum _retorno {
	OK,
	ERROR,
	NO_IMPLEMENTADA
} TipoRet;


// 2.Tipo de Modificaci�n
typedef enum {
	MOD_INSERCION,
	MOD_BORRADO
} TipoModificacion;


// 3.Estructura de Modificaci�n
typedef struct _modificacion {
    TipoModificacion tipo;// Inserci�n o Borrado
unsigned int nroLinea;// N�mero de l�nea (1-based)


// Solo se necesita almacenar la l�nea si es una INSERCI�N.
union {
char *textoInsertado;// Solo si tipo == MOD_INSERCION
// char *textoBorrado;// No es estrictamente necesario seg�n el enunciado
} contenido;
	

struct _modificacion *siguiente;// Puntero al siguiente cambio
} Modificacion;


// 4.Estructura de Versi�n
typedef struct _version {
char *identificador;//Ej: "2.1.3" (para MostrarVersiones)


// Campos de jerarqu�a
struct _version *padre;//Versi�n de la cual hereda (NULL si es de nivel 1)
struct _version **subversiones;//Array din�mico de subversiones (hijos/hermanos)
int cantSubversiones;//Cantidad actual de subversiones
// Campo de contenido
Modificacion *modificaciones;//Lista de modificaciones de esta versi�n
// ?? Campos ADICIONALES para la L�GICA de numeraci�n y corrimiento
int *numerosVersion;//Array de enteros: [2, 1, 3]
unsigned int cantNiveles;//3
//El �ndice que ocupa en el array de su padre/Archivo (el �ltimo n�mero - 1)
unsigned int indiceEnPadre; 
} Version;


// 5. Estructura Archivo (Tu propuesta)
typedef struct _archivo {
char *nombre;
Version **versionesNivel1;//Array din�mico de versiones de nivel 1 (1, 2, 3, etc.)
int cantVersionesNivel1;//Cantidad actual de versiones de nivel 1
} _archivo;


typedef _archivo *Archivo;

typedef enum _opciones{
	Creararchivo, Crearversion, Mostrarversiones, Insertarlinea, salgo, Borrarlinea,Mostrarcambios,Borrararchivo,Borrarversion,Mostrartexto,iguales,Versionindependiente, error, limpio
}opciones;
	
#endif
