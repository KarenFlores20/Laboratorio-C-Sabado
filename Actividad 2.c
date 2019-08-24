#include <stdio.h>
/*autor:Karen Aracely Flores Martinez
 *fecha: 24/08/19
 *grupo:006
 *horario:Viernes 7:00-9:00am
 *Matrícula:1866124
 actividad 2
*/
int main(){
float x,x2,op1,op2,op3,op4,op5,op6,opn1,opn2,opn3,opn4,opn5;
	printf("introduzca un valor para x\n");
	scanf("%f",&x); /*Aqui introduciremos un valor*/
	if(x<=10 & x>=0){ /*con esta accion descartamos los numeros mayores a 10 y menores que 0*/
	op1=(-((x-2)/3));/*Aqui empezaremos las operaciones paso por paso*/
	op2=(op1+1);
	op3=(op2*-1);
	op4=(op3+x);
	op5=(op4*2/3);
	op6=(op5+1);
	printf("La respuesta del ejercicio es %.4f\n",op6);/*Aqui se mostrara el resultado*/ /*Añadimos el .4 antes del f para que solo tome 4 decimales*/
	/*Empezaremos el segundo ejercicio*/
	printf("introduzca un valor para x\n");
	scanf("%f",&x2);/*Aqui introduciremos el valor del segundo x*/
	opn1=(-((x-3)/2));/*Haremos el mismo procedimiento de paso por paso*/
	opn2=(-2*(x+1));
	opn3=(opn1+opn2);
	opn4=(opn3*-1);
	opn5=(opn4+2);
	printf("La respuesta del segundo ejercicio es %.4f",opn5);/*Aqui nos dara el resultado de la operacion*/
}else{/*si la x no cumple con los requisitos entonces*/
	printf("error");/*esto se imprimira*/
}
return 0;
}
