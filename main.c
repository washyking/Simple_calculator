#include <stdio.h>
#include <math.h>

int calculate(void);

double num1;

double num2;

int operations;



int main()
{
    printf("Which operation do you want?\n");
    printf("1 - Addition?\n");
    printf("2 - Subtraction?\n");
    printf("3 - Multiplication?\n");
    printf("4 - Division?\n");

    scanf("%d",&operations);
    if ((operations < 1) || (operations > 4)) {
    printf ("No! That won't do, try again!\n");
    scanf("%d",&operations);
}
    

    calculate();

    
    return 0;
}

int calculate(void){
     
    float result;

    printf("Type first number\n");

    scanf("%lf",&num1);



    printf("Type second number\n");

    scanf("%lf",&num2);
   

    switch (operations)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;

    case 3:
        result = num1 * num2;
        break;

    case 4:
        
        if (num1 != 0)
        {
            result = num1/num2;
        }
        else if(num1 == 0)
        {
            result = num1;
        }
        else{
            printf("Invalid operation\n");
            return -1;
        } 
        break;
    
    default:
        printf("Invalid operation\n");
            return -1;
    }
    
    printf("result: %.2f", result);
    return result;
}

