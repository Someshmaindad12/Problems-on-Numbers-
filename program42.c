/*
2. Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range
*/
#include<stdio.h>
void DisplayRangeEven(int iStart , int iEnd)
{   
    int iCnt = 0 ; 
    for(iCnt = iStart ; iCnt<=iEnd;iCnt++)
    {
        if(iCnt % 2 == 0 )
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    printf("Enter Starting Number : ");
    scanf("%d",&iValue1);
    printf("Enter Ending Number : ");
    scanf("%d",&iValue2);
    DisplayRangeEven(iValue1,iValue2);
    return 0;
}