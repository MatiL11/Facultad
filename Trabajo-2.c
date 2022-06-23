#include <stdio.h>
#include <stdlib.h>

int main () {
    // declarar variables
    int array[30];
    int i;
    int suma = 0;
    int opcion;

    system("cls");

    // cargar array
    for (i = 0; i < 30; i++) { 
        printf("Ingrese los valores del array: "); 
        scanf("%d", &array[i]);
    }

    // opciones
    printf("Seleccione una opcion:\n");
    printf("1. Cantidad de valores positivos\n");
    printf("2. Cantidad de valores negativos\n");
    printf("3. Cantidad de ceros\n");
    printf("4. Promedio de los positivos\n");
    printf("5. Promedio general\n");
    printf("6. Salir\n");
    scanf("%d", &opcion);

    // menu de opciones
    switch (opcion) {
        case 1: // cantidad de valores positivos
            for (i = 0; i < 30; i++) { 
                if (array[i] > 0) {
                    suma = suma + 1;
                }
            }
            printf("La cantidad de valores positivos es: %d\n", suma);
            break;
        case 2: // cantidad de valores negativos
            for (i = 0; i < 30; i++) { 
                if (array[i] < 0) {
                    suma = suma + 1;
                }
            }
            printf("La cantidad de valores negativos es: %d\n", suma);
            break;
        case 3: // cantidad de ceros
            for (i = 0; i < 30; i++) { 
                if (array[i] == 0) {
                    suma = suma + 1;
                }
            }
            printf("La cantidad de ceros es: %d\n", suma);
            break;
        case 4: // promedio de los positivos
            for (i = 0; i < 30; i++) { 
                if (array[i] > 0) {
                    suma = suma + array[i];
                }
            }
            printf("El promedio de los positivos es: %d\n", suma/i);
            break;
        case 5: // promedio general
            for (i = 0; i < 30; i++) { 
                suma = suma + array[i];
            }
            printf("El promedio general es: %d\n", suma/i);
            break;
        case 6: // salir
            printf("Saliendo...\n");
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

    system("pause");   // pausa para que el usuario vea el resultado
    return 0;
}