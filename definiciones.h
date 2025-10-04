#ifndef DEFINICIONES_H
#define DEFINICIONES_H
#include <stdbool.h>
#include <stddef.h> 

// 1. Tipo de Retorno (Requerido por el problema)
typedef enum _retorno {
	OK,
		ERROR,
		NO_IMPLEMENTADA
} TipoRet;

// 2. Tipo de Modificaci�n
typedef enum {
	MOD_INSERCION,
		MOD_BORRADO
} TipoModificacion;

// 3. Estructura de Modificaci�n (Tu propuesta, simplificando la union ya que el BL solo necesita el nroLinea)
typedef struct _modificacion {
	TipoModificacion tipo;          // Inserci�n o Borrado
	unsigned int nroLinea;          // N�mero de l�nea (1-based)
	
	// Solo se necesita almacenar la l�nea si es una INSERCI�N.
	union {
		char *textoInsertado;       // Solo si tipo == MOD_INSERCION
		// char *textoBorrado;      // No es estrictamente necesario seg�n el enunciado
	} contenido;
	
	
#endif
