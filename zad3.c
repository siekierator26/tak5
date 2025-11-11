#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
   const int N = 30;
   int numbers[N];
   int sum = 0;
   float avg;
   srand(time(0));

   printf("Zawartosc tablicy: ");

   for(int i=0; i<N; i++){
      numbers[i] = (rand() % 201) - 100;
      sum += numbers[i];
      printf("%d, ", numbers[i]);
   }

   avg = (float)sum/N;
   printf("\nSrednia: %f", avg);
   return 0;
}
