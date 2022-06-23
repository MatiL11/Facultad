#include <stdio.h>
#include <stdlib.h>

int main () {
    // declarar variables
    int array[25];
    int i;
    int suma = 0;
    int opcion;

    system("cls");

    // cargar array
    for (i = 0; i < 25; i++) { 
        printf("Ingrese las edades: "); 
        scanf("%d", &array[i]);
    }

    // opciones 
    printf("Seleccione una opcion:\n");
    printf("1. Edad promedio\n");
    printf("2. Edades mayores a 34\n");
    printf("3. Edades menores a 21\n");
    printf("4. Salir\n");
    scanf("%d", &opcion);

    // menu de opciones
    switch (opcion){
        case 1: // edad promedio
            for (i = 0; i < 25; i++) { 
                suma = suma + array[i];
            }  
            printf("La edad promedio es: %d\n", suma / 25);
            break;
        case 2: // edades mayores a 34
            for (i = 0; i < 25; i++) { 
                if (array[i] > 34) {
                    printf("Las edades mayores a 34 son: %d\n", array[i]);
                }
            }
            break;
        case 3: // edades menores a 21
            for (i = 0; i < 25; i++) {
                if (array[i] < 21) {
                    printf("Las edades menoes a 21 son: %d\n", array[i]);
                }
            }
            break;
        case 4: // salir
            printf("Gracias por usar el programa\n");
            break;
        default: // opcion no valida
            printf("Opcion no valida\n");
            break;
    }

    printf("Desea repetir el programa?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &opcion);
    if (opcion == 1) {
        system("cls");
        main();
    } else {
        printf("Saliendo del programa\n");
    }

    system("pause"); // pausa para que el usuario vea el resultado
    return 0;
}