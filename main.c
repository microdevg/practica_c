/**
 * @file main.c
 * @author German Velardez (germanvelardez16@gmail.com)
 * @brief Codigo para ordenar alfabeticamente texto
 * @version 0.1
 * @date 2023-07-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "nodos.h"
#include "stdio.h"





int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Se requieren dos parámetros.\n");
        return 1; // Indica un error en la ejecución
    }

    char* path_list = argv[1];  // lista de palabras
    char* path_output = argv[2];  // archivo de salida
    if(path_list == NULL || path_output == NULL){
        printf("Error en los parametros revisar!\r\n");
        return 1;
    }

    Nodo* origin= NULL;

    processing_list(&origin,path_list);
    show_list(&origin,path_output);

    printf("\r\nFin del programa \r\n");
    return 0;

}


