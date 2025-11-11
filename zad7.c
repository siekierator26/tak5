#include <math.h>
#include <stdio.h>

int main(void)
{
   int array[4];
   int x;
   const int N = 4;
   int sum = 0;
   printf("Podaj pierwsza wartosc: ");
   scanf("%d", &array[0]);

   printf("Podaj druga wartosc: ");
   scanf("%d", &array[1]);

   printf("Podaj trzecia wartosc: ");
   scanf("%d", &array[2]);

   printf("Podaj czwarta wartosc: ");
   scanf("%d", &array[3]);

   printf("Podaj X: ");
   scanf("%d", &x);

   printf("Zawartosc tablicy: %d %d %d %d", array[0],array[1],array[2],array[3]);

   for (int i=0; i<N; i++){
      sum += array[i]*pow(x, 3-i);
   }
   printf("\nWynik: %d", sum);
}