#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float obliczOdchylenie(int numbers[], int N, float avg){
    float sum2 = 0;
    for (int i=0; i<N; i++){
        sum2 += pow((numbers[i]-avg),2);
    }
    float wariancja = sum2/N;
    return sqrt(wariancja);
}

int main(void)
{
    const int N = 30;
    int numbers[N];
    int sum = 0;
    float avg;
    float odchylenie;
    srand(time(0));


    printf("Zawartosc tablicy: ");

    for(int i=0; i<N; i++){
        numbers[i] = (rand() % 201) - 100;
        sum += numbers[i];
        printf("%d, ", numbers[i]);
    }

    avg = (float)sum/N;
    odchylenie = obliczOdchylenie(numbers, N, avg);

    printf("\nSrednia: %f", avg);
    printf("\nOdchylenie: %f", odchylenie);
    return 0;

}
