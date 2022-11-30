
#include <stdio.h>
#include <math.h>
#define PI 3.141592654

long long factorialReturn(long long n)
{
    long long f, i;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int  n1,y,i,op;
    float num1 , num2 ,res;
    long long intResult;
    printf("Welcome To Calci.shady \n");
    printf("Press Enter to continue.");
    getchar();
    printf("\n\nSelect opertion: \n1.Addition \n2.Subtraction \n3.Multiplication\n4.Division\n5.Square\n6.Cube\n7.Square Root\n8.sine\n9.cos\n10.tan\n11.log(base e)\n12.log(base 10)\n13.e^x\n14.permutation (nPr)\n15.combination (nCr)\n");
    scanf("%d" , &op);
    
    if (op==1)
    {
        printf("You choose Addition\n");
        printf("Enter first number: ");
        scanf("%f" ,&num1);
        printf("Enter second number: ");
        scanf("%f" , &num2);
        res=num1+num2;
        printf("Result = %.5f", res);
    }
    
    else if (op==2)
    {
        printf("You choose Subtraction\n");
        printf("Enter first number: ");
        scanf("%f" ,&num1);
        printf("Enter second number: ");
        scanf("%f" , &num2);
        res=num1-num2;
        printf("Result = %.5f", res);
    }
    else if (op==3)
    {
        printf("You choose Multiplication\n");
        printf("Enter first number: ");
        scanf("%f" ,&num1);
        printf("Enter second number: ");
        scanf("%f" , &num2);
        res=num1*num2;
        printf("Result = %.5f", res);
    }
    else if (op==4)
    {
        printf("You choose Division\n");
        printf("Enter first number: ");
        scanf("%f" ,&num1);
        printf("Enter second number: ");
        scanf("%f" , &num2);
    if(num2==0)
        {
          printf("Divisor cant be 0!\n");
        }
    else
        {  
          res=num1/num2;
          printf("Result = %.5f", res);
        }
    } 
      
    else if (op==5)
    {
        printf("You chose Square\n");
        printf("Enter Number: ");
        scanf("%f" ,&num1);
        res=num1*num1;
        printf("Result = %f", res);
    }
    else if (op==6)
    {
        printf("You chose cube\n");
        printf("Enter Number: ");
        scanf("%f" ,&num1);
        res=num1*num1*num1;
        printf("Result = %f", res);
    }
    else if (op==7)
    {
        printf("You chose Square Root\n");
        printf("Enter Number: ");
        scanf("%d" ,&n1);
         for(i=0;i<n1;i++)
         {
            y=i*i;
            if(y==n1)
              {
                 break;
              }
         }
          if (y==n1)
              printf("Root of %d is %d", n1, i);
          else
              printf("No real root found");
     }
    
    //to calculate sin
    else if(op==8)
    {
        double a;
        printf("Enter angle in radians: ");
        scanf("%lf", &a);
        res = sin(a);
        printf("\nResult = %lf", res);
    }
    
    //to calculate cos
    else if(op==9)
    {
        double a;
        printf("Enter angle in radians: ");
        scanf("%lf", &a);
        res = cos(a);
        printf("\nResult = %lf", res);
    }
    
    //to calculate tan
    else if(op==10)
    {
        double a;
        printf("Enter angle in radians: ");
        scanf("%lf", &a);
        res = tan(a);
        printf("\nResult = %lf", res);
    }
    
    //to calculate log (base e)
    else if(op==11)
    {
        double a;
        printf("Enter a number: ");
        scanf("%lf", &a);
        if(a<=0.0)
        {
            printf("Math Error\n");
        }
        else
        {
            res = log(a);
            printf("\nResult = %lf", res);
        }
    }   
    //to calculate log (base 10)
    else if(op==12)
    {
        double a;
        printf("Enter a number: ");
        scanf("%lf", &a);
        if(a<=0.0)
        {
            printf("Math Error\n");
        }
        else
        {
            res = log10(a);
            printf("\nResult = %lf", res);
        }
    }
    
    //to calculate e^x
    else if(op==13)
    {
        double a;
        printf("Enter a number: ");
        scanf("%lf", &a);
        res = exp(a);
        printf("\nResult = %lf", res);
    } 
    
    //permutation
    else if(op==14)
    {
        long long n, r;
        printf("\nEnter two numbers: ");
        scanf("%lld%lld", &n, &r);
        if(n>=r && n>0 && r>=0)
        {
            intResult = factorialReturn(n) / factorialReturn(n - r);
            printf("\nResult = %lld", intResult);
        }
        else
        {
        printf("Math Error\n");
        }
    }
    
    //combination
    else if(op==15)
    {
        long long n, r;
        printf("\nEnter two numbers: ");
        scanf("%lld %lld", &n, &r);
        if(n>=r && n>0 && r>=0)
        {
            intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
            printf("\nResult = %lld", intResult);
        }
        else
        {
            printf("Math Error\n");
        }
    }
     
        
     else
        {
         printf("Wrong Command");
        }

    return 0;
}
