
#include <stdio.h>

int main()
{
    int  op;
    float num1 , num2 ,res;
    printf("Welcome To Calci.shady \n");
    printf("Press Enter to continue.");
    getchar();
    printf("\nSelect opertion: \n1.Addition \n2.Subtraction \n3.Multiplication\n4.Division\n\n");
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
        printf("Result = %.f", res);
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
    else
    {
        printf("Wrong Command");
    }

    return 0;
}