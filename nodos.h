#ifndef NODOS_H
#define NODOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 250
#define BUFFER_WORD 50



typedef struct Nodo {
    char content[BUFFER_SIZE];
    struct Nodo* next;
    struct Nodo* before;
} Nodo;


/**
 * @brief 
 * 
 * @param origin Paso la referencia doble de la estructura. 
 * Si no lo hago no puedo modificar el puntero
 * @param path  Donde escribire el contenido
 */
void show_list(Nodo **origin,char* path);


/**
 * @brief Funcion para procesar una linea de text
 * @param origin: Paso la referencia doble de la estructura. 
 * Si no lo hago no puedo modificar el puntero
 * @param p_list: linea de texto a procesar
 */
Nodo* processing_list(Nodo **origin ,char* p_list);




#endif
