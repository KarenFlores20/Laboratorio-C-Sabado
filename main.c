#include <stdio.h>
#include <stdlib.h>

/*Actividad numero 1, introduzca dos numeros e imprima cual de los dos es el mayor */

int main() {
	printf("Pirmera actividad\n\n");
	int num1,num2; /*aqui vamos a declarar las variables*/
	printf("Introduzca dos numeros\n");/*Le pedimos al usuario que introduzca los numeros que desee*/
	scanf("%d",&num1);/*escaneamos los numeros, que sera lo que el usuario coloque*/
	scanf("%d",&num2);
	if(num1>num2){/*aqui empezamos con if, y preguntamos si el primer numero que introdujo es mayor que el segundo*/
		printf("El numero %d es el mayor\n\n",num1);/*Si, sí fue así entonces imprimirá que el numero mayor es el primero*/
	}else{/*ahora agregamos un else, para que cuando el numero no cumpla con lo de arriba entonces...*/
		printf("El numero %d es el mayor\n\n",num2);/*solo va imprimir que el segundo es el mayor*/
	}

/*empezamos con la Actividad numero 2, Crea un programa que declare tres varuables de tipo entero con los valores siguientes y muestre si se cumplen o no las siguientes condiciones usando if else*/
printf("Segunda Actividad\n\n");
	int A=5,B=3,C=-12;
	printf("Con A=3, B=5 Y C=3\n");
	printf("1.- A>3 es\n");
	if(A>3){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("2.- A<C es\n");
	if(A<C){
		printf("Verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("3.- B diferente de C\n");
	if(B|=C){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("4.- A=3\n");
	if("A==3"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("5.- AB=15\n");
	if("A*B==15"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("6.- C/B<A\n");
	if(C/B<A){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("7.- C/B==-10\n");
	if("C/B==-10"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("8.- A+B+C=5\n");
	if("A+B+C==5"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("9.- (A+B=8)Y(A-B=2)\n");
	if(("A+B==8")&&("A-B==2")){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("10.- A+B=8 Diferente de A-B=6\n");
	if(("A+B==8")||(A-B==6)){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("11.-A>3&&>3&&C<3\n");
	if(A>3&&B>3&&C<3){
		printf("verdadero");
	}else{
		printf("falso\n");
	}
	return 0;
}
