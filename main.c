#include <stdio.h>
#include <stdlib.h>
/*Karen Aracely Flores Martinez, gpo:006, 27/09/19, horario:Viernes 7:00 a 9:00am
matrícula:1866124*/


/***********************************ACTIVIDAD 1*******************************************************/

int main() {
	printf("***************ACTIVIDAD 1*****************\n\n\n");
	int R=2,nc[24],ndc=57,i;/*Declaramos las variables*/
	nc[R]=57;/*Llenamos el arreglo con 57 en la posicion R*/
	printf("Llene el arreglo.\n");
	for(i=0;i<24;i++){/*Usamos For para que el arreglo se llene*/
	    printf("\n%d:00:",i);
		scanf("%d",&nc[i]);/*Guardamos las variables*/
		
    }
    nc[R]=57;
    printf("Son las 0%d:00am y el numero de coches es %d\n\n",R,nc[R]);/*Imprimimos lo que tiene el arreglo en la posicion R*/
    R=21;/*Ahora R vale 21*/
    nc[R]=57;/*Llenamos el arreglo con 57 en la posicion R*/
    
    printf("Son las %d:00 pm y el numero de coches es %d\n\n",R,nc[R]);/*Imprimimos lo que tiene el arreglo en la posicion R*/
    /***********************************ACTIVIDAD 2*******************************************************/
    printf("***************ACTIVIDAD 1*****************\n\n\n");
    int A=8,B=4;/*Declaramos las variables*/
    R=(A/B);/*Hacemos la operacion para guardar la nueva R*/
    printf("Son las %d:00 am y el numero de coches es %d\n\n",R,nc[R]);/*Imprimimos lo que tiene el arreglo en la posicion R*/
	return 0;
	
}
