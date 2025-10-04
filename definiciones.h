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

// 2. Tipo de Modificación
typedef enum {
	MOD_INSERCION,
		MOD_BORRADO
} TipoModificacion;

// 3. Estructura de Modificación (Tu propuesta, simplificando la union ya que el BL solo necesita el nroLinea)
typedef struct _modificacion {
	TipoModificacion tipo;          // Inserción o Borrado
	unsigned int nroLinea;          // Número de línea (1-based)
	
	// Solo se necesita almacenar la línea si es una INSERCIÓN.
	union {
		char *textoInsertado;       // Solo si tipo == MOD_INSERCION
		// char *textoBorrado;      // No es estrictamente necesario según el enunciado
	} contenido;
	
	
#endif
