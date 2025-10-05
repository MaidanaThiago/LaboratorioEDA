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


// 2.Tipo de Modificación
typedef enum {
	MOD_INSERCION,
	MOD_BORRADO
} TipoModificacion;


// 3.Estructura de Modificación
typedef struct _modificacion {
    TipoModificacion tipo;// Inserción o Borrado
unsigned int nroLinea;// Número de línea (1-based)


// Solo se necesita almacenar la línea si es una INSERCIÓN.
union {
char *textoInsertado;// Solo si tipo == MOD_INSERCION
// char *textoBorrado;// No es estrictamente necesario según el enunciado
} contenido;
	

struct _modificacion *siguiente;// Puntero al siguiente cambio
} Modificacion;


// 4.Estructura de Versión
typedef struct _version {
char *identificador;//Ej: "2.1.3" (para MostrarVersiones)


// Campos de jerarquía
struct _version *padre;//Versión de la cual hereda (NULL si es de nivel 1)
struct _version **subversiones;//Array dinámico de subversiones (hijos/hermanos)
int cantSubversiones;//Cantidad actual de subversiones
// Campo de contenido
Modificacion *modificaciones;//Lista de modificaciones de esta versión
// ?? Campos ADICIONALES para la LÓGICA de numeración y corrimiento
int *numerosVersion;//Array de enteros: [2, 1, 3]
unsigned int cantNiveles;//3
//El índice que ocupa en el array de su padre/Archivo (el último número - 1)
unsigned int indiceEnPadre; 
} Version;


// 5. Estructura Archivo (Tu propuesta)
typedef struct _archivo {
char *nombre;
Version **versionesNivel1;//Array dinámico de versiones de nivel 1 (1, 2, 3, etc.)
int cantVersionesNivel1;//Cantidad actual de versiones de nivel 1
} _archivo;


typedef _archivo *Archivo;

typedef enum _opciones{
	Creararchivo, Crearversion, Mostrarversiones, Insertarlinea, salgo, Borrarlinea,Mostrarcambios,Borrararchivo,Borrarversion,Mostrartexto,iguales,Versionindependiente, error, limpio
}opciones;
	
#endif
