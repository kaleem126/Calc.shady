
#include <stdio.h>

int main()
{
    int  n1,y,i,op;
    float num1 , num2 ,res;
    printf("Welcome To Calci.shady \n");
    printf("Press Enter to continue.");
    getchar();
    printf("\n\nSelect opertion: \n1.Addition \n2.Subtraction \n3.Multiplication\n4.Division\n5.Square\n6.Cube\n7.Square Root\n");
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
     
        
     else
        {
         printf("Wrong Command");
        }

    return 0;
}
