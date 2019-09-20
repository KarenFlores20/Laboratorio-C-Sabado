#include <stdio.h>
#include <stdlib.h>
/*Karen Aracely Flores Martinez, gpo:006, 20/09/19, horario:Viernes 7:00 a 9:00am
matrícula:1866124*/


/***********************************ACTIVIDAD 1*******************************************************/
int main()
{printf("***************ACTIVIDAD 1*****************\n\n\n");
	int i,cal,prom=0,cont=0,tot=0;/*Declaramos las variables*/
	printf("PROMEDIO\n\n");/*Damos una breve introduccion al programa*/
	printf("Introduzca sus 10 calificaciones\n");/*Le pedimos al usuario que ingrese los datos*/
	for(i=1;i<11;i++){/*Usamos ciclo for para que el usuario pueda introducir los 10 valores*/
		scanf("%d",&cal);/*Escaneamos la calificacion*/
		cont=cont+cal;/*Hacemos la sumas de las calificaciones*/
		prom=(cont/10);/*Hacemos el promedio*/
	}
	printf("\nSu promedio es: %d ",prom);/*lo imprimimos*/
	if(prom<7){/*Usamos un if para que si el promedio es menor que 7 ...*/
		printf("REPROBADO");/*está reprobado*/
	}else printf("APROBADO");/*Si no, el usuario aprobó*/
/***********************************ACTIVIDAD 2*******************************************************/
printf("\n\n*************ACTIVIDAD 2*******************************\n\n\n");
    int j,pot,base,op=1;/*Declaramos las variables*/
    printf("CALCULAR LA POTENCIA DE UN N%cMERO\n\n",163);/*Damos una breve introduccion al programa*/
    printf("Introduzca una base: ");/*Le pedimos al usuario que ingrese la base*/
    scanf("%d",&base);/*Escaneamos la base*/
    printf("Que potencia quiere darle: ");/*Le pedimos al usuario que ingrese una potencia*/
    scanf("%d",&pot);/*Escaneamos la potencia*/
    for(j=1;j<=pot;j++){/*Usamos ciclo for para que el usuario pueda multiplicar su base con la cantidad de potencia que agrego*/
    	op=op*base;/*Hacemos la operacion*/
	}
	printf("El resultado es: %d",op);/*Y al final imrpimimos el resultado*/
    return 0;
}

