/* 
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion estructurada
Realizado: 14/02/2022
Ciclo: 01/2022
Descripcion: Programa 8 en C que simula una distribudora de equipo de computo, la cual maneja 2 precios, 
para distribuidor los precios tienen un 10%, para cliente normal, los precios son sin descuento
El programa pregunta al inicio si es distribuidor o cliente y despues pregunta La cantidad a pagar,  calcula el descuento y total para la materia programacion estructurada.
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Variables
	int tipo;  
	float cantidad, descuento=0, total;
	printf("Tipo de cliente (1.Distribuidor, 2.Cliente): ");
	scanf("%d",&tipo);
	printf("Cantidad a pagar: \t $");
	scanf("%f",&cantidad);
	//Proceso
	if(tipo==1) {
		descuento=cantidad*0.1;
	}
	total=cantidad-descuento;
	//Salida
	printf("Descuento: \t\t -$%.2f\n",descuento);
	printf("\t\t\t--------------------\n");
	printf("Total: \t\t\t $%.2f",total);
	//Retorno
	return 0;
}
