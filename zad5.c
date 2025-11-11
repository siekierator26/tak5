#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int findMax(int numbers[], int N)
{
    int max = numbers[0];
    for (int i=0; i<N; i++) {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    return max;
}

int findMin(int numbers[], int N)
{
    int min = numbers[0];
    for (int i=0; i<N; i++) {
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    return min;
}

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
    int max;
    int min;
    srand(time(0));


    printf("Zawartosc tablicy: ");

    for(int i=0; i<N; i++){
        numbers[i] = (rand() % 201) - 100;
        sum += numbers[i];
        printf("%d, ", numbers[i]);
    }

    avg = (float)sum/N;
    odchylenie = obliczOdchylenie(numbers, N, avg);
    max = findMax(numbers, N);
    min = findMin(numbers, N);

    printf("\nSrednia: %f", avg);
    printf("\nOdchylenie: %f", odchylenie);
    printf("\nWartosc maksymalna: %d", max);
    printf("\nWartosc minimalna: %d", min);
    return 0;

}
