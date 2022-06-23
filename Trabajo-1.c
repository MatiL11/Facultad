#include <stdio.h>
#include <stdlib.h>

int main () {
    // declarar variables
    int array[50];
    int i;
    int suma = 0;
    int producto = 1;
    int opcion;

    system("cls");

    //cargar array
    for (i = 0; i < 50; i++) { 
        printf("Ingrese los valores del array: "); 
        scanf("%d", &array[i]);
    }

    // opciones 
    printf("Seleccione una opcion:\n");
    printf("1. Sumar todos los elementos del array\n"); 
    printf("2. Multiplicar todos los elementos del array\n");
    printf("3. Mostrar todos los elementos del array\n");
    printf("4. Mostrar los componente de indice par\n");
    printf("5. Mostrar los componente de indice impar\n");
    printf("6. Salir\n");
    scanf("%d", &opcion);

    // menu de opciones
    switch (opcion) {
        case 1: // sumar todos los elementos del array
            for (i = 0; i < 50; i++) { 
                suma = suma + array[i];
            }
            printf("La suma de los elementos del array es: %d\n", suma);
            break;
        case 2: // multiplicar todos los elementos del array
            for (i = 0; i < 50; i++) { 
                producto = producto * array[i];
            }
            printf("El producto de los elementos del array es: %d\n", producto);
            break;
        case 3: // mostrar todos los elementos del array
            for (i = 0; i < 50; i++) { 
                printf("El elemento %d del array es: %d\n", i, array[i]);
            }
            break;
        case 4: // mostrar los componente de indice par
            for (i = 0; i < 50; i++) { 
                if (i % 2 == 0) {
                    printf("Los componentes de indice par del array son: %d\n", i);
                }
            }
            break;
        case 5: // mostrar los componente de indice impar
            for (i = 0; i < 50; i++) { 
                if (i % 2 != 0) {
                    printf("Los componente de indice impar son: %d\n", i);
                }
            }
            break;
        case 6: // salir del programa
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