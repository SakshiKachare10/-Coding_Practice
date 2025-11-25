/*
    Algorithm

    START
       Accept first number as No1
       Accept second number as No2
       If the input is negative than convert into positive
       Perform Addition of no1 & no2
       Display the Addition on screen
    END   
*/

//////////////////////////////////////////////////////////////
/////////////////
// 
// Required Header files
//
//////////////////////////////////////////////////////////////
/////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
/////////////////
//
//  Function Name : AdditionOfTwoNumbers
//  Description   : It is used to perform addition
//  Input         : Float , Float
//  Output        : Float
//  Author        : Sakshi Dipak Kachare
// Date           : 12/10/2025
//
//////////////////////////////////////////////////////////////
///////////////////

float AdditionOfTwoNumbers(float fNo1 ,  // First input
    float fNo2  // Second input
)
{
    float fSum = 0.0f;  // To store the result

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    // Updator
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;  // Buisness Logic

    return fSum;  // Enf Of AdditionOfTwoNumbers
}

/////////////////////////////////////////////////////////////
/////////////////////
//
// Entry point function for the application
//
/////////////////////////////////////////////////////////////
/////////////////////

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;  // To Accept user input
    float fRet = 0.0f;  // To store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionOfTwoNumbers(fValue1,fValue2);  // Method call

    printf("Addition is : %f\n",fRet);

    return 0;  // End of main
}

///////////////////////////////////////////////////////////
////////////////////
//
//  Testcases successfully handled by the application
//
// Input1 : 10.5   Input2 = 3.2
// Output : 13.7
// Input1 : -10.5  Input2 = 3.2
// Output : 13.7
// Input1 : 10.5   Input2 : -3.2
// Output : 13.7
// Input1 : -10.5  INput2 :  -3.2
// Output : 13.7
// Input1 : 10.5   Input2 : 0.0
// Output : 10.5
///////////////////////////////////////////////////////////
/////////////////////