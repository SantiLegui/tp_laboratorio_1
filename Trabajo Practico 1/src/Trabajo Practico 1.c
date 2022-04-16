/*
 ============================================================================
 Name        : Prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
	int opcionMenu;
	int opcionMenuForz;
	int kilometros;
	int aeroArg;
	int aeroLatam;
	int precioDebiArg;
	int precioDebiLatam;
	int precioCrediArg;
	int precioCrediLatam;
	int BtcArg;
	int BtcLatam;
	int precioUniArg;
	int precioUniLatam;
	int diffPrecio;
	setbuf(stdout, NULL);

do{


	printf("1.Ingresar Kilometros: (km = x)");
	printf("\n2.Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n - Precio vuelo Aerolíneas:\n - Precio vuelo Latam:");
    printf("\n3.Calcular todos los costos:\n a) Tarjeta de debito (descuento 10 por ciento)\n b) Tarjeta de credito (interes 25 por ciento)\n c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n d) Mostrar precio por km (precio unitario)\n e) Mostrar diferencia de precio ingresada (Latam - Aerolineas)");
    printf("\n4.Informar Resultados");
    printf("\n5.Carga Forzada de datos");
    printf("\n6.Salir");
    printf("\nElegir Opcion: ");
    scanf("%d", &opcionMenu);

switch(opcionMenu){

case 1:
	printf("\nIngresar Kilometros: ");
	scanf("%d", &kilometros);
	break;
case 2:
	printf("Ingresar precio de Aerolineas Argentinas: ");
	scanf("%d", &aeroArg);
	printf("Ingresar precio de Latam");
		scanf("%d", &aeroLatam);
	break;

case 3:
	diffPrecio = aeroArg - aeroLatam;
	precioDebiArg = aeroArg - (aeroArg * 10 / 100);
	precioDebiLatam = aeroLatam - (aeroLatam * 10 / 100);
	precioCrediArg = aeroArg + (aeroArg * 25 / 100);
    precioCrediLatam = aeroLatam + (aeroLatam * 25 / 100);
    precioUniArg = aeroArg / kilometros;
    precioUniLatam = aeroLatam / kilometros;

    BtcArg = aeroArg / 4606954.55;
    BtcLatam = aeroLatam / 4606954.55;
	break;
case 4:
	printf("\nDebito Argentina = %d", precioDebiArg);
	printf("\nDebito Latam = %d", precioDebiLatam);
	printf("\nCredito Argentina =%d", precioCrediArg);
	printf("\nCredito Latam=%d", precioCrediLatam);
	printf("\nPrecio Unitario Argentina=%d", precioUniArg);
	printf("\nPrecio Unitario Latam=%d", precioUniLatam);
    printf("\n La diferencia de precio es de %d pesos", diffPrecio);
    printf("\nBTC A =  %d", BtcArg);
	printf("\nBTC L =  %d", BtcLatam);
	break;
case 5:
	printf("\n1.Kilometros");
	printf("\n2. Precio de Vuelos:");
	printf("Que cambio desea realizar?: ");
	scanf("%d", &opcionMenuForz);
	if(opcionMenuForz == 1){
		printf("Ingresar Kilometros: ");
			scanf("%d", &kilometros);

	}else if(opcionMenuForz == 2){
		printf("Ingresar precio de Aerolineas Argentinas: ");
			scanf("%d", &aeroArg);
			printf("Ingresar precio de Latam");
				scanf("%d", &aeroLatam);
		}else{
		printf("Ingrese una opcion valida");
		}
	break;
}
}while(opcionMenu != 6);

}
