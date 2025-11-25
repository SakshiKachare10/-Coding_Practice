#include<stdio.h>

int AdditionTwoNumbers(int No1, int No2)
{
    int iSum = 0;
    iSum = No1 + No2;
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter 1st number: \n");
    scanf("%d",&iValue1);

    printf("Enter 2nd number: \n");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumbers(iValue1,iValue2);

    printf("Addition is :%d\n",iRet);

    return 0 ;


}