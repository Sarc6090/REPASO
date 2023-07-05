//Teorema de pit�gora, Calculadora que obtendr� los catetos o la hipotenusa de un triangulo rectangulo

#include<stdio.h>
#include<math.h>

//Funci�n que calcula la ra�z del teorema
double calcularPitagoras(double sumaCuadrados){
	return pow(sumaCuadrados, 0.5);
}


int main(){

	//Declaraci�n de variables
	int eleccion;
	double cateto_1, cateto_2, hipotenusa;
	
	//Inicio del programa en pantalla
	printf("*********************************************************************************************************************************\n");
    printf("*********************************Calculadora del Teorema de Pitagoras de un triangulo rectangulo*********************************\n");
    printf("*********************************************************************************************************************************\n");
    
	//Men� para el usuario para elegir lo que desea, introduce su elecci�n
    printf("\nMenu:\n(1)--->	Calcular hipotenusa.\n(2)--->	Calcular un cateto.\n\nRECORDATORIO: El Teorema de Pitagoras tiene la siguiente forma: c^2=(a^2)+(b^2)\n\nInserte su eleccion del menu: ");
    scanf("%i", &eleccion);
	
	//Dependiendo de su elecci�n, se tomara un caso
	switch(eleccion){
		
		//Caso 1, Se desea saber la hipotenusa
		case 1:
			
			//Introduce sus catetos
			printf("\nInserte los dos catetos.");
			printf("\nCateto 1: ");
			scanf("%lf", &cateto_1);
			printf("\nCateto 2: ");
			scanf("%lf", &cateto_2);
			
			//Se calcula la hipotenusa al llamar la variable 'calcularPitagoras' despu�s de realizar la suma de cuadrados
			double hipotenusaTrian=calcularPitagoras(pow(cateto_1, 2)+pow(cateto_2, 2));
			
			//Muestra el resultado en pantalla
			printf("EL resultado del Teorema de Pitagoras es: (%.3f) = (%.3f)^2 + (%.3f)^2", hipotenusaTrian, cateto_1, cateto_2);
			 
			break;
			
			
		//Caso 2, Se desea saber uno de los catetos
		case 2:
			
			//Introduce la hipotenusa y su cateto
			printf("\nInserte la hipotenusa y el cateto.");
			printf("\nHipotenusa: ");
			scanf("%lf", &hipotenusa);
			printf("\nCateto: ");
			scanf("%lf", &cateto_1);
			
			//Se calcula el cateto al llamar la variable 'calcularPitagoras' despu�s de realizar la suma de cuadrados
			double catetoTrian=calcularPitagoras(pow(hipotenusa, 2)-pow(cateto_1, 2));
			
			//Muestra el resultado en pantalla
			printf("EL resultado del Teorema de Pitagoras es: (%.3f) = (%.3f)^2 - (%.3f)^2", catetoTrian, hipotenusa, cateto_1);
			 
			break;
			
			
		//Si se elige otra opcion que no est� en el men�, se le notifica que escoja una opci�n v�lida
		default:
			printf("\nInserte una opcion valida.");
		
	}
	
	//Se notifica del fin del programa
	printf("\n\n***************************************************************************************************************");
    printf("\n************************************************Fin del programa***********************************************");
    printf("\n***************************************************************************************************************");
	
	return 0;
}

