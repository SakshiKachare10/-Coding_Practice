#include<stdio.h>

int Addition(int A, int B)
{
    int Sum = 0;
    Sum = A + B;
    return Sum;
}

int main()
{
    int i = 0, j = 0, Ans=0;

    printf("Enter 1st number: ");
    scanf("%d",&i);

    printf("Enter 2nd number: ");
    scanf("%d",&j);

    Ans = Addition(i,j);

    printf("Addition is :%d\n",Ans);

    return 0 ;


}