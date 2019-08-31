#include <stdio.h>
#include <stdlib.h>
/*Karen Aracely Flores Martinez, gpo:006, 30/08/19, horario:Viernes 7:00 a 9:00am
matrícula:1866124*/

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
	int A=5,B=3,C=-12;/*Declaramos las variables que vamos a utilizar*/
	printf("Con A=3, B=5 Y C=3\n\n");/*Le decimos al usuario el valor de cada una*/
	printf("1.- A>3 es:  ");
	if(A>3){/*Con el if vamos a poner la operacion*/
		printf("verdadero\n");/*Si cumple con el if se imprimirá verdadero*/
	}else{
		printf("falso\n");/*Y si no se ira directo al falso*/
	}
	printf("2.- A<C es:  ");/*haremos el mismo procedimiento con todos los demas*/
	if(A<C){
		printf("Verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("3.- B diferente de C es:  ");
	if(B|=C){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("4.- A=3 es:  ");
	if("A==3"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("5.- AB=15 es:  ");
	if("A*B==15"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("6.- C/B<A es:  ");
	if(C/B<A){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("7.- C/B==-10 es:  ");
	if("C/B==-10"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("8.- A+B+C=5 es:  ");
	if("A+B+C==5"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("9.- (A+B=8)Y(A-B=2) es:  ");
	if(("A+B==8")&&("A-B==2")){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("10.- A+B=8 Diferente de A-B=6 es:  ");
	if(("A+B==8")||(A-B==6)){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("11.-A>3&&>3&&C<3 es:  ");
	if(A>3&&B>3&&C<3){
		printf("verdadero\n\n");
	}else{
		printf("falso\n\n");
	}
/*Ahora empezaremos con la actividad 3*/
printf("Actividad extra\n\n");
	int d,e,f; /*Declaramos las variables que vamos a utilizar*/
	printf("De un valor a la variable A ");
	scanf("%d",&d);/*Dejamos que el usuario ingrese el valor de d que será A*/
	printf("\nDe un valor a la variable B ");
	scanf("%d",&e);/*Aqui ingresará e que sera B*/
	printf("\nDe un valor a la variable C ");
	scanf("%d",&f);/*Y por ultimo ingresará f que sera C*/
	printf("\n\n1.- A>3 es:  ");/*Empezamos con el primer ejercicio*/
	if(d>3){/*Usamos el if para ver si es verdad lo que dice*/
		printf("verdadero\n");/*Si lo es, imprimira esto*/
	}else{/*Si lo de arriba no es verdad entonces se saldrá del programa e imprimirá falso*/
		printf("falso\n");
	}
	printf("2.-A<C es:  ");/*Ahora repetimos el mismo procedimiento*/
	if(d<f){
		printf("verdadero\n");
	}else{
		printf("falso");
	}
	printf("3.- B|=C es:  ");
	if("e|=f"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("4.- A==3 es:  ");
	if("d==3"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("5.-A*B==15 es:  ");
	if("d*e==15"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("6.- C/B<A es:  ");
	if("f/e<d"){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("7.- C/B==-10 es:  ");
	if(f/e==-10){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("8.- A+B+C==5 es:  ");
	if(d+e+f==5){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("9.- (A+B==8)&&(A-B==2) es:  ");
	if((d+e==8)&&(d-e==2)){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("10.- (A+B==8)||(A-B==6) es:  ");
	if((d+e==8)||(d-e==6)){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}
	printf("11.- A>3&&B>3&&C<3 es:  ");
	if(d>3&&e>3&&f<3){
		printf("verdadero\n");
	}else{
		printf("falso\n");
	}/*y aqui terminan los programas*/
	return 0;
}
