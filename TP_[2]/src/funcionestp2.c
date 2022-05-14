/*
 * funcionestp2.c
 *
 *  Created on: 14 may 2022
 *      Author: Lauty
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "funciontp2.h"
#include "estructuras.h"

int initPassengers(Passenger listaTickets[], int CANT)
{
    int index;
    index = -1;
    for(int i=0; i<CANT; i++)
    {
       if(listaTickets[i].estado==LIBRE)
       {
           index = i;
           break;
       }
    }

    return index;
}

void menu(void)
{
    int alta;
    int espacioLibre;
    int opcionSelec;
    int respSa;
    int respSegunda;




    while(respSa != 1)
    {
    printf(	"\n Bienvenido al menu\n"
                "\n Ingrese una opcion \n"
    			"1- Alta \n"
    			"2- Modificar \n"
    			"3- Baja \n"
    			"4- Informar. \n"
    			"5- Salida del programa \n"
    			);
    	scanf("%d",&opcionSelec);

    	switch(opcionSelec)
    	{
    	    case 1:
    	    	espacioLibre = int initPassengers();

                break;
            case 2:
                    printf("\nIngrese el precio de una empresa\n"
					   "\n1- Aerolineas Argentinas."
					   "\n2- LATAM."
					   "\n3- Volver.");
				scanf("%d", &respSegunda);
				switch(respSegunda)
				{
					case 1:
						valorA = ingresoNumero(empresa);
						flagPrecioA = 1;
						break;
					case 2:
						valorL = ingresoNumero(empresa);
						flagPrecioL = 1;
						break;
					case 3:
						break;
					default:
						printf("\nSeleccion no valida, reintente: ");
						break;
				}
                break;
            case 3:

                if(flagPrecioA == 1 && flagPrecioL == 1 && flagMilla == 1)
                {
                    calculoDebA = calculo(valorA,1);

                    calculoDebL = calculo(valorL,1);


                    creditoA = calculo(valorA,2);

                    creditoL = calculo(valorL,2);


                    calculoBitcoinA = calculo(valorA,3);

                    calculoBitcoinL = calculo(valorL,3);


                    precioPerKmA = valorA / milla;

                    precioPerKmL = valorL / milla;



                    if(valorA > valorL)
                    {
                        diferenciaPrecio = valorA - valorL;
                    }
                    else
                    {
                        if(valorA < valorL)
                        {
                            diferenciaPrecio = valorL - valorA;
                        }
                    }



                    printf("\nLos calculos se han hecho.\n");
                    flagCalculos = 1;
                }
                else
                {
                    printf("\nNo se han ingresados los datos suficientes para la operacion\n");

                }

                break;
                case 4:

                if(flagCalculos == 1)
                {
                    printf("\nAqui estan los resultados de la operacion\n");

                    printf("\nKilometros ingresados: %.2f\n",milla);


                    printf("\nPrecio Aerolíneas: %f\n",valorA);
                    printf("Precio con tarjeta de debito: %.2f\n",calculoDebA);
                    printf("Precio con tarjeta de crédito: %.2f\n",creditoA);
                    printf("Precio pagando con bitcoin: %.2f\n",calculoBitcoinA);
                    printf("Precio unitario: %.2f\n",precioPerKmA);

                    printf("\nPrecio Latam: %f\n",valorL);
                    printf("Precio con tarjeta de debito: %.2f\n",calculoDebL);
                    printf("Precio con tarjeta de credito: %.2f\n",creditoL);
                    printf("Precio pagando con bitcoin: %.2f\n",calculoBitcoinL);
                    printf("Precio unitario: %.2f\n",precioPerKmL);


                    printf("La diferencia de precio  es %.2f\n",diferenciaPrecio);
                }
                else
                {
                    printf("\nNo se han ingresados los datos suficientes para la operacion\n");
                }
                    break;
                case 5:
                    printf("¿Estas seguro de salir del menu?\n1- Para confirmar\n Presione cualquier tecla para para continuar en el programa");
                    scanf("%d",&respSa);

                    switch(respSa)
                    {
                        case 1:
                            printf("Gracias por usar nuestro menu");
                            break;
                        default:
                            printf("Volviendo al menu...");
                    }
                    break;
                default:

                    printf("Respuesta invalida, por favor, ingrese una opcion");
    	            scanf("%d",&opcionSelec);
    	            break;


        }
    }
}

