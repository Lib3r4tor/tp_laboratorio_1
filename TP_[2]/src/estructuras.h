/*
 * estructuras.h
 *
 *  Created on: 14 may 2022
 *      Author: Lauty
 */

#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_
#include <stdio.h>
#include <stdlib.h>

struct
{
	int id;//Campos o atributos
	char name[51];
	char lastName[20];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
}typedef Passenger;

#endif /* ESTRUCTURAS_H_ */
