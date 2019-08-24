#include <stdio.h>
/*autor:Karen Aracely Flores Martinez
 *fecha: 24/08/19
 *grupo:006
 *horario:Viernes 7:00-9:00am
 *Matrícula:1866124
 actividad 1
*/
int main(){
	float x,x2,operacion,op2,op3,op4,op5;
	printf("introduzca un numero\n");
	scanf("%f",&x); /*Aqui introduciremos cualquier numero que no sea mayor que 10 ni menor que 0*/
	if(x<=10 & x>=0){ /*con esta accion descartamos los numeros mayores a 10 y menores que 0*/
	operacion=(x-1)/4; /*empezaremos realizando la operacion por partes, primero la primera fraccion*/
	op2=(operacion-(x-5)/36);/*una vez realizada la primera se le restara la segunda*/
	printf("La respuesta a la primera operacion es %.4f\n",op2); /*aqui se imprimirá lo que dio de la operacion que hicimos anteriormente*/
	printf("Introduzca otro valor a la x\n");
	scanf("%f",&x2); /*Aqui le pediremos al usuario que introduzca un valor diferente para la segunda operacion*/
	op3=(x2+1)/8; /*esta es la segunda operacion, y haremos lo mismo, calcularemos primero la primera fraccion*/
	op4=(op3-(2*x2-3)/16);/*y luego le restamos la otra*/
	op5=(op4*6);/*al final le multiplicamos el 6 que tiene*/
	printf("La respuesta a la segunda operacion es %.4f",op5);/*y a qui imprimiremos la segunda respuesta*/
}else{/*si la x no cumple con los requisitos entonces*/
	printf("error");/*esto se imprimira*/
}
	return 0;
}
