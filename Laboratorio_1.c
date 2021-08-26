/*
 ============================================================================
 Name        : Laboratorio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LENGTH 10
//const int  LENGTH = 10;

int main() {
	int input[10];
	for (int i=0;i < LENGTH;i++)
		{
			int valor;
			printf("Ingrese los numeros enteros : ");
			scanf("%d",&valor);
			input[i]=abs(valor);

		}

	order_ascending(input);

	puts("La matriz ordenada: ");
	for (int i = 0; i < LENGTH; i++)
		{
			if()
			printf("%d ", input[i]);
		}








	return 0;
}

int order_ascending(int arr[])
{
	int temp = 0;
	for (int i = 0; i < LENGTH; i++)
			{
	        for (int j = i+1; j < LENGTH; j++)
	        {
	           if(arr[i] > arr[j]) {
	               temp = arr[i];
	               arr[i] = arr[j];
	               arr[j] = temp;
	           }
	        }
	    }
	return 0;
}
