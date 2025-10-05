#include<iostream>
#include "prototipos.h"
#include "definiciones.h"
using namespace std;

// Libera una lista enlazada de modificaciones
void liberarModificaciones(Modificacion *m) {
	while (m != NULL) {
		Modificacion *aux = m;
		m = m->siguiente;
		if (aux->tipo == MOD_INSERCION && aux->contenido.textoInsertado != NULL)
			delete aux->contenido.textoInsertado;
		delete aux;
	}
}

// Libera una versión y todas sus subversiones recursivamente
void liberarVersion(Version *v) {
	if (v == NULL) return;
	
	// Liberar subversiones recursivamente
	for (int i = 0; i < v->cantSubversiones; i++) {
		liberarVersion(v->subversiones[i]);
	}
	
	// Liberar array de subversiones
	if (v->subversiones != NULL)
		free(v->subversiones);
	
	// Liberar lista de modificaciones
	liberarModificaciones(v->modificaciones);
	
	// Liberar identificador y arreglo de números
	if (v->identificador != NULL) delete v->identificador;
	if (v->numerosVersion != NULL) delete v->numerosVersion;
	
	delete v;
}
