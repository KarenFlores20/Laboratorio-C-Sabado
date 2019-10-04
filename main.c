#include <stdio.h>
#include <stdlib.h>

/*Karen Aracely Flores Martinez, gpo:006, 04/10/19, horario:Viernes 7:00 a 9:00am
matrícula:1866124*/

/***********************************ACTIVIDAD 1*******************************************************/
int main() {
	/*printf("***************ACTIVIDAD 1*****************\n\n\n");
	printf("Lene el arreglo.\n");/*Damos una introduccion.*/
	/*int V[6][10][2],i,j,k;/*Declaramos las variables (incluido el arreglo).*/
	/*for(i=0;i<6;i++){/*Vamos a usar un for para llenar nuestro arreglo.*/
		/*for(j=0;j<10;j++){
			for(k=0;k<2;k++){/*Como nuestro arreglo es tridimensional utilizamos 3 for.*/
				/*scanf("%d",&V[i][j][k]);/*Escaneamos los valores que el usuario quiera meter a su arreglo.*/
		/*	}
		}
	}
	V[3][7][1]=4234;/*Declaramos que la posicion (V[][][]) tenga un valor fijo.*/
	/*printf("\nEl numero de empleado 3, de la oficina 7, del edificio 2, ha vendido: %d\n",V[3][7][1]);
	/*Imprimimos lo que el ejercicio nos pide.*/
	/***********************************ACTIVIDAD 2*******************************************************/
	printf("\n\n*************ACTIVIDAD 2*******************************\n\n\n");
	int V[6][10][2],i,j,k;/*Declaramos las variables (incluido el arreglo).*/
	for(i=0;i<6;i++){/*Vamos a usar un for para repetir nuestro arreglo.*/
		for(j=0;j<10;j++){
			for(k=0;k<2;k++){/*Como nuestro arreglo es tridimensional utilizamos 3 for.*/
				V[i][j][k]=V[i][j][k]+10;/*Ahora nuestras posiciones tendran el mismo valor aumentado en 10*/
			}
		}
	}
	V[3][7][1]=4244;/*Declaramos que la posicion (V[][][]) tenga un valor fijo.*/
	printf("\nEl numero de empleado 3, de la oficina 7, del edificio 2, ha vendido: %d",V[3][7][1]);
	/*Imprimimos lo que el ejercicio nos pide.*/
	getch();
	return 0;
}
