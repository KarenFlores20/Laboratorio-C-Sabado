#include <stdio.h>
#include <stdlib.h>
/*Karen Aracely Flores Martinez, gpo:006, 27/09/19, horario:Viernes 7:00 a 9:00am
matrícula:1866124*/


/***********************************ACTIVIDAD 1*******************************************************/

int main() {
	printf("***************ACTIVIDAD 1*****************\n\n\n");
	int R=2,nc[24],ndc=57,i;
	nc[R]=57;
	printf("Llene el arreglo.\n");
	for(i=0;i<24;i++){
	    printf("\n%d:00:",i);
		scanf("%d",&nc[i]);
		
    }
    nc[R]=57;
    printf("Son las 0%d:00am y el numero de coches es %d\n\n",R,nc[R]);
    R=21;
    nc[R]=57;
    
    printf("Son las %d:00 pm y el numero de coches es %d\n\n",R,nc[R]);
    /***********************************ACTIVIDAD 2*******************************************************/
    printf("***************ACTIVIDAD 1*****************\n\n\n");
    int A=8,B=4;
    R=(A/B);
    printf("Son las %d:00 am y el numero de coches es %d\n\n",R,nc[R]);
	return 0;
	
}
