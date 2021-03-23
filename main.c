#include <stdio.h>

void operation()
{
    int a,b,sum,sub,multi,greater,less,sign,i,t,remainder;
    double divide;
    printf("If you want to do summation press 1:\n");
    printf("If you want to do subtraction press 2:\n");
    printf("If you want to do multiplication press 3:\n");
    printf("If you want to do division press 4:\n");
    printf("If you want to find remainder press 5:\n");
    printf("If you want to find largest value press 6:\n");
    printf("If you want to find smallest value press 7:\n");

    printf("\nPlease enter a number for how many times you want to calculate:::");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("\nPress the number you want to check::");
        scanf("%d",&sign);
        printf("\n\nEnter two numbers::::");
        scanf("%d %d",&a,&b);
        if(sign==1)
    {
        sum=a+b;
        printf("Summation = %d\n",sum);
    }
    else if(sign==2)
    {
        sub=a-b;
        printf("Subtraction = %d\n",sub);
    }
    else if(sign==3)
    {
        multi=a*b;
        printf("Multiplication = %d\n",multi);
    }
    else if(sign==4)
    {
        if(b==0)
       {
         printf("Math Error\n");
       }
        else
       {
        divide=a/b;
        printf("Division = %0.2lf\n",divide);
       }
    }
    else if(sign==5)
    {
        remainder=a%b;
        printf("Remainder = %d\n",remainder);
    }
    else if(sign==6)
    {
        greater=a>b;
        printf("Largest value");
    }
    else if(sign==7)
    {
        less=a<b;
        printf("Smallest value");
    }
    }

}

void main()
{
    int i,n,j,k,l;
    printf("\t\t\t\t\t**************************************\n");
    printf("\t\t\t\t\t   Welcome to the BODMAS calculator\n");
    printf("\t\t\t\t\t**************************************\n");
    printf("\t\t\t  I can help you in Addition, Subtraction, Multiplication & Division\n");
    printf("\t\t\t       You can also find Remainder, Biggest value, Small value\n");
    printf("\t\t\t\t\t        Here are the features:\n");
    printf("\t\t\t\t\t      \n\n\n\n\n");
    for (i = 0; i < 500000000; i++ );
    {
    operation();
    }
    return 0;
}
