#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0 ; 
    int iSum = 0 ; 

    for(iCnt = 1  ; iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
            iSum = iSum+iCnt;
        }
    }
    if(iSum == iNo )
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
    bool bRet = false ;
    int iValue = 0 ; 
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    bRet = CheckPerfect(iValue);
    if(bRet == true )
    {
        printf("%d : is a perfect number ",iValue);
    }
    else 
    {
        printf("%d : is not a perfect number ",iValue);
    }

  
    return 0;
}