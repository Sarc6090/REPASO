#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){
	
	int eleccion;
	float radioCir, diametroCir, perimetroCir, areaCir;

	
	printf("***************************************************************************************************************\n");
	printf("*********************************Calculadora de perimetro y área de un circulo*********************************\n");
	printf("***************************************************************************************************************\n");
	
	printf("\nHay dos datos con lo que calcular lo deseado: \n1.-Diámetro\n2.-Radio\n\nEscoga la opción con la que deseé iniciar: ");
	scanf("%d", &eleccion);
	
	switch (eleccion) {
		 
		case 1:
			 
			printf("\nInserte el valor del diametro (hasta 6 decimales): ");
			scanf("%f", &diametroCir);
			
			radioCir=diametroCir/2;
			perimetroCir= PI * diametroCir;
			areaCir=PI*(pow(radioCir,2));
			printf("\nEl valor del perimetro es de: %f unidades", perimetroCir);
			printf("\nEl valor del area es de: %f unidades", areaCir);
			
			break;
		
		case 2:
			
			printf("\nInserte el valor del radio (hasta 6 decimales): ");
			scanf("%f", &radioCir);
			
			diametroCir=radioCir*2;
			perimetroCir=PI*diametroCir;
			areaCir=PI*(pow(radioCir,2));
			printf("\nEl valor del perimetro es de: %f unidades", perimetroCir);
			printf("\nEl valor del area es de: %f unidades", areaCir);
			
			break;
		
		default:
			
			printf("\nIngrese una opción válida");
			
	}
		 	
	printf("\n\n***************************************************************************************************************");
	printf("\n******************************************************Fin******************************************************");
	printf("\n***************************************************************************************************************");

	return 0;
	
}
