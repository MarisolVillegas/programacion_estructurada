/*Arreglos unidimensionales
Dado un numero n<100
Mostrar los n numeros y si son primos o no*/
/*Marisol Villegas Rincón  1898149 */

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main() {
    int x, y, i, flag, temp;
    printf("Introduzca un numero entero menor a 100: ");
    scanf("%d", &y);
    x = 1;

    if (x>y) {
        temp = x;
        x= y;
        y = temp;
    }

    printf("Los numeros primos entre %d y %d son ", x, y);
    while (x < y) {
        flag = 0;
        for (i = 2; i <= x / 2; ++i) {
            if (x % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("\n%d ", x);
        x++;
    }

    return 0;
}
