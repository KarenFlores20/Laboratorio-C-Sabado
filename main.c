#include <stdio.h>
#include <stdlib.h>
/*
*Autor:Karen Aracely Flores Martínez
*Fecha: 06/09/2019
*Grupo:006
*Horario:Viernes 7 am - 9 am
*Matrícula: 1866124
*/
/******************************ACTIVIDAD 1***********************************************/

int main() {
	int nota;/*Declaramos las variables*/
	printf("Introduzca la nota de la materia del 1 al 10: ");/*Aqui le diremos al usuario que agrgue una nota del 1 al 10*/
	scanf("%d",&nota);/*Escaneamos la nota*/
	if(nota<=10 && nota>0){/*Agregamos un if para que solo tome valores de 1 al 10*/
	     if(nota>=5){/*Agregamootro if para saber lo que deba imprimirse*/
	     	printf("APTO");/*Se imprimira correctamente si puso un 5 o mayor*/
		 }else if(nota<5){/*Y Ahora veremos si puso un numero menor a 5*/
		 	printf("NO APTO");/*Si así fue entonces se imprimirá esto*/
		 }
	}else {
		printf("ERROR:nota incorrecta");/*Se imprimirá esto si la persona colocó un numero mayor que 10 o menor que 1*/
	  
	}
/******************************ACTIVIDAD 2************************************************/
    int dia;/*Declaramos la variable*/
    printf("\n\nIntroduzca el numero de alg%cn d%ca de la semana:  ",163,161);/*Aqui le pediremos al usuario que eliga un número de la semana (1-7)*/
    scanf("%d",&dia);/*Lo guardamos aqui*/
    if(dia<=7 && dia>0){/*Nos aseguramos de que el usuario introduzca un número mayor a 0 y menor que 1*/
    	switch(dia){/*Usaremos switch para que nos lleve excatamente a quenúmero eligió*/
    		case 1: printf("L%cnes",163);break;
    		case 2: printf("Martes");break;
    		case 3: printf("Miercoles");break;
    		case 4: printf("Jueves");break;
    		case 5: printf("Viernes");break;
    		case 6: printf("S%cbado",160);break;
    		case 7: printf("Domingo");break;
		}
	}else {
		printf("ERROR:D%ca incorrecto",161);/*Esto aparecerá si el usuario eligio un numero menor que 1 o mayor que 7*/
	}
	/******************************ACTIVIDAD EXTRA*************************************************/
	int opcion;/*Declaramos las variables*/
	printf("\n\nBienvenido a servicio al cliente, por favor eliga una opci%cn\n",162);/*Damos una bienvenida al usuario*/
	printf("1.-El internet falla.\n2.-DevC no corre el programa.\n3.-Mi computadora no enciende.\n4.-Va muy lenta.\n5.-Se congel%c la pantalla.\n",162);/*Le mostramos al usuario las opciones que tiene*/
	scanf("%d",&opcion);/*Escaneamos el número*/
	if(opcion<=5 && opcion>0){/*Aseguramos que el usuario introdujo un número mayor que 0 y menor que 5*/
		switch(opcion){/*Creamos las opciones que se le brindarán*/
			case 1: printf("a)Probablemente tu cable est%c mal conectado %c no llegue la se%cal.\nb)La computadora no esta actualizada.\nc)No tiene la fecha correcta.",130,162,164);break;
			case 2: printf("a)Est%c descargado erroneamente.\nb)No est%c actualizado.",160,160);break;
			case 3: printf("a)No sirve, llevela a arreglar");break;
			case 4: printf("a)Revice su memoria RAM, debe tener una de 2, si no es as%c entonces su computadora esta llena en espacio, intente borrando algunas cosas",161);break;
			case 5: printf("a)Reinicie la computadora.\nb)Sucede esto por que su computadora est%c muy lenta",160);break;
	}
}else{
	printf("\nSelecione una opci%cn v%clida",162,160);
}
	return 0;
}
