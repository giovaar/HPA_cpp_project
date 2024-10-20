/*Proyecto numero 1 de herramientas de la programacion aplicada
integrantes:
Giovanny Arpaia 20-70-7872
Nestor Martinez
Christin Perez*/


#include <stdio.h>
#include <iostream>

int PrimerCaso() {
			printf("\t\t\t\t\t Universidad Tecnologica de Panama\n");
			printf("\t\t\t\t Facultad de Ingenieria de Sistemas Computacionales\n");
			printf("\t\t\t\t\t Herraminetas de Programacion Aplicada\n");
			printf("\t\t\t\t\t\t Proyecto N.1\n");
			
			printf("\n\n\t\t\t\t\t\t FUNCIONES Y ARREGLOS\n");
			
			printf("\n\n\t\t\t\t\t\t Integrantes:\n");
			printf("\t\t\t\t\t\t Giovanny Arpaia  20-70-7872\n");
			printf("\t\t\t\t\t\t Nestor Martinez\n");
			printf("\t\t\t\t\t\t Chritian Perez\n");
			
			printf("\n\t\t\t\t\t\t Profesora: Janitza Barraza \n");
			printf("\n\t\t\t\t\t\t Fecha: 26 de octubre de 2024\n");
			
}

int main() {
	int opcion, nombre[20],cedula[20], annos;
	float salarioBruto, aumento, SalarioNeto;
	printf("\t\t\t\t\t Universidad Tecnologica de Panama\n");
	printf("\t\t\t\t Facultad de Ingenieria de Sistemas Computacionales\n");
	printf("\t\t\t\t\t Herraminetas de Programacion Aplicada\n");
	printf("\t\t\t\t\t\t Proyecto N.1\n");
	printf("\n\n\n\t\t\t\t\t\t\t Menu\n");
	
	printf("\t\t\t\t\t 1.Presentacion\n\t\t\t\t\t 2.Banco Panameno de Produccion\n\t\t\t\t\t 3.salir\n");
	scanf("%d", &opcion);
	system("cls");
	
	switch(opcion) {
		case 1:
			PrimerCaso();
		break;
		case 2:
		break;
		case 3: 
			printf("Gracias por usar nuestro programa. \n\n VUELVA PRONTO");
		break;
		
		
		
		default: printf("Valor incorrecto");
	}
	
}
