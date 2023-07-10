#include "nodos.h"




static void __add_new_word(Nodo **origin,char * new_word){
    Nodo* new_nodo = ( Nodo*)malloc(sizeof(Nodo));
    strcpy(new_nodo->content,new_word);
    if(*origin == NULL || strcasecmp(new_word,(*origin)->content) <= 0){
        new_nodo->next = *origin;
        *origin = new_nodo;
        return;
    }
    Nodo *p = *origin; 
        while(p->next !=NULL  &&
              strcasecmp(new_word,p->next->content) >= 0){  
            p = p->next;    
        }
        new_nodo->next = p->next;
        p->next = new_nodo;
        return; 
}


Nodo*  processing_list(Nodo **origin,char* p_list){
    FILE *_list = fopen(p_list, "r");
    if (_list == NULL) {
        perror("Error al abrir el archivo:");
        exit(1); 
    }
    char b[BUFFER_SIZE];
    int counter = 0;
    while (fgets(b, sizeof(b), _list) != NULL) {
            char* word = strtok(b, " ");           
            while (word != NULL ) {

                printf("---%s\n ",word);
                __add_new_word(origin,word);
                word = strtok(NULL, " ");
            }
        }
}


void show_list(Nodo **origin,char* path_output){
    FILE *_output = fopen(path_output, "w");
    if (_output == NULL) {
        perror("Error al escribir el archivo:");
        exit(1) ; 
    }  
    while(*origin != NULL){
        fprintf(_output, "%s\n", (*origin)->content);
        *origin = (*origin)->next;
    }
}