#include <stdio.h>

int main(void)
{
    enum Numbers{ZERO, ONE, TWO, THREE=3, FOUR=3, FIVE=65, SIX=23, SEVEN=333};
    printf("%d\n", ZERO);
    printf("%d\n", ONE);
    printf("%d\n", TWO);
    printf("%d\n", THREE);
    printf("%d\n", FOUR);
    printf("%d\n", FIVE);
    printf("%d\n", SIX);
    printf("%d\n", SEVEN);
    return 0;
}