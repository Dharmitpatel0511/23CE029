//This program is prepared by 23TCEJ5O_Dharmit
#include<stdio.h>
int main()
{
    int Yellow=10,Pink=20,Calculation;
    printf("Balls Before Execution:\n");
    printf("Yellow=%d\n",Yellow);
    printf("Pink=%d\n",Pink);
    Calculation = ++Yellow + Yellow++ + --Yellow + ++Pink - --Pink - --Pink;
    printf("\nCalculation=%d\n",Calculation);
    printf("\nBalls after execution:\n");
    printf("Yellow=%d",Yellow);
    printf("\nPink=%d\n",Pink);
    printf("\nDharmit Fadadu  23TCEJ6O\n");
    return 0;
}
