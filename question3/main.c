#include<stdio.h>
#define MAX 100

int checkPerfect(int n1);
void PerfectNumbers(int stLimit, int enLimit);

int main()
{
    int stLimit, enLimit;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &stLimit);
    printf("Input highest search limit of perfect numbers : ");
    scanf("%d", &enLimit);

    printf("\n The perfect numbers between %d to %d are : \n", stLimit, enLimit);
    PerfectNumbers(stLimit, enLimit);
    printf("\n\n");
    return 0;
}

int checkPerfect(int n1)
{
    int i, sum, num;
    sum = 0;
    num = n1;
    for(i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }

    if(sum == n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void PerfectNumbers(int stLimit, int enLimit)
{
    while(stLimit <= enLimit)
    {
        if(checkPerfect(stLimit))
        {
            printf(" %d ", stLimit);
        }
        stLimit++;
    }
}
