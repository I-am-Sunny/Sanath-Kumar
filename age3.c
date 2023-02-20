#include <stdio.h>
#include <unistd.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,r1,r2,r3,n;

    printf("*************************************************************************************************\n");
    printf("                                      AGE CALCULATION USING C                                    \n");
    printf("*************************************************************************************************\n");
    sleep(1);

    do
    { 

    printf("Enter date of birth in DD format : ");
    scanf("%d",&d1);
    sleep(1);
    printf("Enter month of birth in MM format : ");
    scanf("%d",&m1);
    sleep(1);
    printf("Enter year of birth in YYYY format : ");
    scanf("%d",&y1);
    sleep(1);
    printf("Enter today's date in DD format : ");
    scanf("%d",&d2);
    sleep(1);
    printf("Enter present month in MM format : ");
    scanf("%d",&m2);
    sleep(1);
    printf("Enter present year in  YYYY format ");
    scanf("%d",&y2);
    sleep(1);
    
    if(d1==d2 && m1==m2)
    {
        printf("WOHOOOO......\nHAPPY BIRTHDAY\n");
        sleep(1);
    }
    if((d1>31 || d1<1) || (d2>31 || d2<1) || (m1>12 || m1<1) || (m2>12 || m2<1) || (y2<0) || (y1<0) )
    {
        printf("ERROR........\n");
        sleep(1);
        printf("PLEASE CHECK THE DATE YOU ENTERED");
    }
    else
    {
        r3=y2-y1;
        if(d2>d1)
        {
            r1=d2-d1;
        }
        else
        {
            m2=m2-1;
            d2=d2+30;
            r1=d2-d1;
        }
        if(m2>=m1)
        {
            r2=m2-m1;
        }
        else
        {
            r3=r3-1;
            m2=m2+12;
            r2=m2-m1;
        }
            printf("HEY YOUR ARE %d Years %d Months %d Days OLD\n",r3,r2,r1);
            printf("DO YOU WANT TO DO ONE MORE...\n");
            sleep(1);
            printf("1. YES\n");
            sleep(1);
            printf("2. NO\n");
            scanf("%d",&n);
    if (n>1)
    {   
        printf("GETTING OLD IS A CASE OF MIND OVER MATTER.\nIF YOU DON'T MIND,IT DOESN'T MATTER");
        sleep(1);
        printf("THANK YOU\n");
        sleep(1);
        printf("HAVE A NICE DAY......");
    }
    }
    }while (n==1);
    return 0;
 }