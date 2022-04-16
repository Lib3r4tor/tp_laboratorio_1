/*
 * Funciones.h
 *
 *  Created on: 5 abr 2022
 *      Author: Lauty
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>


/// @fn 	void menu(void)
/// @brief 	Es la funcion que se llama en el main que muestra el menu con las opciones del programa a selecionar, no retorna nada ya que el programa termina en la funcion.
void menu(void);

/// @fn 	void cargaForzada(void)
/// @brief 	Se utiliza en la opcion 5, esta funcion realiza los calculos y muestra los resultados ya puestos por defecto.
void cargaForzada(void);

/// @fn 	double calculo(double, int)
/// @brief	Su funcion es hacer los 3 calculos solicitados.
/// @param 	precioIngresado: es del precio ingresado de la aerolinea.
/// @param 	opcion, son numeros harcodeados que realizan las operaciones(1 para el descuento de 10%, 2 para el interes del 25% y 3 para calcular en bitcoins).
/// @return	El resultado de los calculos.
double calculo(double precioIngresado, int opcion);

/// @fn 	double ingresoNumero(char[])
/// @brief 	Pide al usuario el numero de la operacion kilometros o precios, una vez que lo ingresa se lo llama a la funcion
///	ingresoNumero() para validar al mismo, en caso que se valida retornara el numero.
/// @param 	mensajeMillas o empresa, son las cadenas usadas para la operacion.
/// @return	retorna el numero de kilometro o el precio validado.
double ingresoNumero(char mensaje[]);

/// @fn 	int validacionNumero(int)
/// @brief 	Recibe el numero de la funcion ingresoNumero(char) para validarla, luego de ser validada retornara el numero.
/// @param 	numero es el caracter que recibe la funcion.
/// @return	retorna el numero ya validado.
int validacionNumero(int numero);


#endif /* FUNCIONES_H_ */
