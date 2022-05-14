/*
 * funciontp2.h
 *
 *  Created on: 14 may 2022
 *      Author: Lauty
 */

#ifndef FUNCIONTP2_H_
#define FUNCIONTP2_H_
#include <stdio.h>
#include <stdlib.h>


/// @fn 	void menu(void)
/// @brief 	Es la funcion que se llama en el main que muestra el menu con las opciones del programa a selecionar, no retorna nada ya que el programa termina en la funcion.
void menu(void);


/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int initPassengers();
#endif /* FUNCIONTP2_H_ */
