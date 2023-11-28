#include <stdio.h> //se incluyen las bibliotecas para las variables y los numeros random
#include <stdlib.h>
#include <time.h>

int main() // la variable principal del programa de inicializacion
{
    printf("----------Bienvenido al Programa de Suma de Matrices---------- \n"); // se agrega un titulo para dar mejor presentacion

    int fila, columna;                                // se define las variables para filas y columnas
    printf("ingrese el valor para filas: "); // se solicita al usuario ingresar el numero de filas
    scanf("%d", &fila);                         // se lee los datos ingresados por el usuario

    printf("ingrese el valor para columnas: "); // se solicita al usuario ingresar el numero de columnas
    scanf("%d", &columna);                            // se lee los datos ingresados por el usuario

    int matrixA[fila][columna];  // se define las variables con el numero de espacios ingresados por el usuario de filas y columnas.
    int matrixB[fila][columna]; // se define las variables de la matriz B con el numero de espacios ingresados por el usuario.
    int matrixS[fila][columna]; // se define las variables de la matriz suma.
    srand(time(NULL)); // se crea la funcion para numeros randoms

    printf("---Esta es la Matriz A---");

    for (int i = 0; i < fila; i++) // se crea el primerfor para la matriz original de las filas
    {
        printf("\n");               // se coloca para separa las filas
        for (int j = 0; j < columna; j++) // Se crea en segundo for para la matriz original de columnas
        {
            matrixA[i][j] = rand() % 100 + 1; // Se define que la matriz se ponga el rango de numeros random que se solicitan en cada cuadro de la matriz
            printf("%d \t", matrixA[i][j]);   // se inprimer la matriz con numeros random
        }
    }

        printf("\n");
        printf("---Esta es la Matriz B---");

    for (int i = 0; i < fila; i++) // se crea el primerfor para la matriz original de las filas
    {
        printf("\n");               // se coloca para separa las filas
        for (int j = 0; j < columna; j++) // Se crea en segundo for para la matriz original de columnas
        {
            matrixB[i][j] = rand() % 100 + 1; // Se define que la matriz se ponga el rango de numeros random que se solicitan en cada cuadro de la matriz
            printf("%d \t", matrixB[i][j]);   // se inprimer la matriz con numeros random
        }
    }

    printf("\n");
    printf("---Esta es la Matriz S---");
    for (int i = 0; i < fila; i++) // se crea el primer for para la matriz suna.
    {
        printf("\n");
        for (int j = 0; j < columna; j++) // se crea el segundor for para la matriz columna.
        {
            matrixS[i][j] = matrixA[i][j] + matrixB[i][j];// se realiza el operador para la suma de las matrices
            printf("%d \t", matrixS[i][j]);// se inprime la matriz suma.
        }
    }

    return 0;
}