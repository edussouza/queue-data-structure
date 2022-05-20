/*
	Name: Fila.h 	
	Author: Eduardo Cruz de Souza
	Date: 03/05/2022
	Description: Implementation of queue data structure
*/

#ifndef Fila_h
#define Fila_h

#define Max 10 
#define sinal -1
#define ghost -2
        
typedef struct{
    int inicio;
    int fim;
    unsigned char Vetor[Max];
} Fila;

Fila createQueue();
void showQueue(Fila);
bool emptyQueue(Fila);
unsigned char getFirst(Fila);
Fila pushQueue(Fila, unsigned char);
Fila popQueue(Fila);

#endif