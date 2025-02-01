#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo)
{
    if(iNo % 3 == 0)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}
int main()
{
    int iValue = 0 ; 
    bool bRet = false;
    printf("Enter Number : \t");
    scanf("%d",&iValue);
    bRet = CheckDivisible(iValue);
    if(bRet == true )
    {
        printf("%d is divisible by 3",iValue);
    }
    else 
    {
        printf("%d is NOT divisible by 3",iValue);
    }
    return 0;
}