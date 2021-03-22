/*
 ============================================================================
 Name        : EJERCICIO_2_MinMax.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(void)

{
	setbuf(stdout,NULL);
	int min;
	int max;
	int i;
	int bufferInt;
	int flag=TRUE;

	for(i=0;i<5;i++)
	{
		printf("ingrese numero %d\n",i+1);
		scanf("%d",&bufferInt);

		if(flag==TRUE)
		{
			min=bufferInt;
			max=bufferInt;
			flag=FALSE;
		}
		else
		{
			if(bufferInt<min)
			{
				min=bufferInt;
			}
			if(bufferInt>max)
			{
				max=bufferInt;
			}
		}





		}


        printf("El numero maximo es %d\nE12l numero minimo es %d ",max,min);







return(0);
}










