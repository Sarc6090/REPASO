#include<stdio.h>
#include<math.h>


double calcularPerimetro(double radio) {
    return M_PI * radio * 2.0;
}

double calcularArea(double radio) {
    return M_PI * (pow(radio, 2.0));
}

int main() {
    int eleccion;

    printf("***************************************************************************************************************\n");
    printf("*********************************Calculadora de perimetro y área de un circulo*********************************\n");
    printf("***************************************************************************************************************\n");

    printf("\nHay dos datos con lo que calcular lo deseado: \n1.-Diámetro\n2.-Radio\n\nEscoga la opción con la que deseé iniciar: ");
    scanf("%d", &eleccion);

    switch (eleccion) {

        case 1:
            printf("\nInserte el valor del diametro (hasta 6 decimales): ");
            double diametroCir;
            scanf("%lf", &diametroCir);
            double perimetroCir = calcularPerimetro(diametroCir / 2.0);
            double areaCir = calcularArea(diametroCir / 2.0);
            printf("\nEl valor del perimetro es de: %f unidades", perimetroCir);
            printf("\nEl valor del area es de: %f unidades", areaCir);

            break;

        case 2:

            printf("\nInserte el valor del radio (hasta 6 decimales): ");
            double radioCir;
            scanf("%lf", &radioCir);

            perimetroCir = calcularPerimetro(radioCir);
            areaCir = calcularArea(radioCir);;
            printf("\nEl valor del perimetro es de: %f unidades", perimetroCir);
            printf("\nEl valor del area es de: %f unidades", areaCir);

            break;

        default:

            printf("\nIngrese una opción válida");

    }

    printf("\n\n***************************************************************************************************************");
    printf("\n************************************************Fin del programa***********************************************");
    printf("\n***************************************************************************************************************");

    return 0;

}
