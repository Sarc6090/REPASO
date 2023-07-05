/*Saber si alguien debe vacunarse dependiendo de los siguientes factores:
-Los que sena mayores de 18 y menores de 65, no hay una fecha exacta para vacunarse
-Menores de 18 NO deben vacunarse
-Mayores de 65 dependerán de 2 condiciones más:
	+Si no tienen enfermedades, les tocará el mes de Julio
	+Si tienen alguna enfermedad,les tocará en el mes de Junio*/

#include<stdio.h>

int main(){
	//Declaración de la variable 'edad'
	int edad;
	
	//Se solicita la edad al usuario 
	printf("\t\t\t\t\t\t¿Cuando me toca vacunarme?");
	printf("\nIngrese su edad por favor: ");
	scanf("%i", &edad); 
	
	//Nos aseguramos que sea una edad positiva
	if(edad<0){
		printf("\nIntroduzca una edad valida");
	}
	else if(edad<18){																													//Si es menor de edad, se le notifica que no se puede vacunar
		
		printf("\nUsted todavia NO puede vacunarse.");
		
	}
	else if (edad>=18 && edad<65){																										//Si tiene netre 18 a 65 años, le indica que no hay fecha exacta
		
		printf("\nNo hay una fecha exacta para que la vacuna le sea aplicada.");
		
	}
	else if(edad>=65){																													//Si es de la 3ra edad, se dividirá en 2 casos
	
		char enfermedad;																												//Creamos la variable de tipo char para el caso si tiene enfermedad base o no
		
		printf("\n¿Tiene alguna enfermedad de base? (Introduzca 'S' o 'N' para marcar lo como 'si' o 'no' respectivamente): ");			//Introduce si tiene enfermedad base o no
		scanf("%c", &enfermedad);
		
		if (enfermedad=='S'){																											//Si tiene enfermedad, se le nitifica de su fecha correspondiente
			printf("\nSu fecha de vacunacion sera el mes de JuLio");
		}
		
		else if(enfermedad=='N'){																										//Si no tiene enfermedad, se le nitifica de su fecha correspondiente
			printf("\nSu fecha de vacunacion sera el mes de JuLio");
		}
		else printf("\nIntroduzca  solamente 'S' o 'N'");																				//Si se introduce cualquier otro caracter, se le notifica que introduzca 'S' o 'N', no más
		
	}
	
	printf("\n\n***************************************************************************************************************");
    printf("\n************************************************Fin del programa***********************************************");
    printf("\n***************************************************************************************************************\n\n");
    
    return 0;

}

/*
	else{
		
		if(edad>=18 && edad<65){
			
			printf("\nNo hay una fecha exacta para que la vacuna le sea aplicada.");
			
		}
		else{
			
			char enfermedad;
			printf("\n¿Tiene alguna enfermedad de base? (Introduzca 'S' o 'N' para marcar lo como 'si' o 'no' respectivamente): ");
			scanf("%c", &enfermedad);
			
			if (edad>=65 && enfermedad=='S'){
				
				printf("\nSu fecha de vacunacion sera el mes de Junio");
				
			}
			else{
				
				if(edad>=65&&enfermedad=='N'){
					printf("\nSu fecha de vacunacion sera el mes de JuLio");
				}
				else printf("\nIntroduzca solamente 'S' o 'N'");
			}
		}
	}
*/
	
