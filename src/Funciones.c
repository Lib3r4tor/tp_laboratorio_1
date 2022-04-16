/*
 * 		Funciones.c
 *
 *  	Created on: 15 abr. 2022
 *      Author: Lauty
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "funciones.h"

void menu(void)
{
    float milla;			//Son los kilometros
    char mensajeMilla[40] = "Ingrese los kilometros del vuelo";
    char empresa[40] = "Ingrese el precio de la aerolinea";
    float valorA = 0;
    float valorL = 0;
    float calculoDebA = 0;
    float calculoDebL = 0;
    float creditoA = 0;
    float creditoL = 0;
    float calculoBitcoinA;
    float calculoBitcoinL;
    float diferenciaPrecio = 0;
    float precioPerKmA;
    float precioPerKmL;
    int respSa;
    int opcionSelec;
    int flagCalculos = 0;
    int flagMilla = 0;
    int flagPrecioL = 0;
    int flagPrecioA = 0;
    int respSegunda;



    while(respSa != 1)
    {
    printf(	"\n Bienvenido al menu\n"
                "\n Ingrese una opcion \n"
    			"1- Ingresar Kilometros del vuelo \n"
    			"2- Ingresar precios de vuelos: \n"
    			"\tAerolineas Argentinas: \n"
    			"\tLatam:  \n"
    			"3- Calcular costos. \n"
    			"4- Informar resultados. \n"
    			"5- Carga forzada de datos. \n"
    			"6- Salida del programa \n"
    			);
    	scanf("%d",&opcionSelec);

    	switch(opcionSelec)
    	{
    	    case 1:
    	        milla = ingresoNumero(mensajeMilla);
                flagMilla = 1;
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
                    cargaForzada();
                    break;

                case 6:
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

double ingresoNumero(char mensaje[])
{
    float resultado;
    float aux;

    printf("Ingrese el numero: ");
	scanf("%f", &resultado);
	aux = validacionNumero(resultado);

    return aux;
}

int validacionNumero(int numero)
{

    while(numero < 0)
    {
        printf("Numero no valido, reintente: ");
        scanf("%d",&numero);
    }
    return numero;
}

double calculo(double precioIngresado, int opcion)
{
	double resultado;
	double bitcoin = 4606954.55;
	if(opcion == 1)
	{
		resultado = precioIngresado - (precioIngresado * 0.10);
	}
	else
	{
	    if(opcion == 2)
	    {
		    resultado = precioIngresado + (precioIngresado * 0.25);
    	}
    	else
    	{
	        if(opcion == 3)
	        {
		        resultado = precioIngresado / bitcoin;
	        }
	    }
	}
	return resultado;
}

void cargaForzada(void)
{
    float millaForza = 7090;
    float valorAForza = 162965;
    float valorLForza = 159339;
    float calculoDebAForza = 0;
    float calculoDebLForza = 0;
    float creditoAForza = 0;
    float creditoLForza = 0;
    float calculoBitcoinAForza;
    float calculoBitcoinLForza;
    float diferenciaPrecioForza = 0;
    float precioPerKmAForza;
    float precioPerKmLForza;


                    calculoDebAForza = calculo(valorAForza,1);

                    calculoDebLForza = calculo(valorLForza,1);


                    creditoAForza = calculo(valorAForza,2);

                    creditoLForza = calculo(valorLForza,2);


                    calculoBitcoinAForza = calculo(valorAForza,3);

                    calculoBitcoinLForza = calculo(valorLForza,3);


                    precioPerKmAForza = valorAForza / millaForza;

                    precioPerKmLForza = valorLForza / millaForza;



                    if(valorAForza > valorLForza)
                    {
                        diferenciaPrecioForza = valorAForza - valorLForza;
                    }
                    else
                    {
                        if(valorAForza < valorLForza)
                        {
                            diferenciaPrecioForza = valorLForza - valorAForza;
                        }
                    }
                    printf("\nAqui estan los resultados de la operacion\n");

                    printf("\nKilometros ingresados: %.2f\n",millaForza);

                    printf("\nPrecio Aerolíneas: %f\n",valorAForza);
                    printf("Precio con tarjeta de debito: %.2f\n",calculoDebAForza);
                    printf("Precio con tarjeta de credito: %.2f\n",creditoAForza);
                    printf("Precio pagando con bitcoin: %.2f\n",calculoBitcoinAForza);
                    printf("Precio unitario: %.2f\n",precioPerKmAForza);

                    printf("\nPrecio Latam %f\n",valorLForza);
                    printf("Precio con tarjeta de debito: %.2f\n",calculoDebLForza);
                    printf("Precio con tarjeta de credito: %.2f\n",creditoLForza);
                    printf("Precio pagando con bitcoin: %.2f\n",calculoBitcoinLForza);
                    printf("Precio unitario: %.2f\n",precioPerKmLForza);

                    printf("La diferencia de precio entre las dos Aerolineas es %.2f\n",diferenciaPrecioForza);
}
