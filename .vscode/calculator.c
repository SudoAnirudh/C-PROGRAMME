#include<stdio.h>
main()
{
    float num1,num2;
    int operator;
    printf("Enter A Number");
    scanf("%f",&num1);
    printf("Enter Another Number");
    scanf("%f",&num2);
        
        for(;;){
            printf("/nEnter Your Choice");
            printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
            scanf("%d",&operator);
            switch(operator)
            {
                case 1 : printf("SUM OF %f and %f is %f",num1,num2,num1+num2);
                break;
                case 2 : printf("sub of %f and %f is %f",num1,num2,num1-num2);
                break;
                case 3 : printf("div of %f and %f is %f",num1,num2,num1*num2); 
                break;
                case 4 : 
                if(num2==0)
                {
                    printf("Syntax Error");
                }
                else
                {
                    printf("Division of %f and %f is %f",num1,num2,num1/num2);
                    break; 
                }
                case 5 : return 0;
                break;
                default : 
                {
                    printF("Enter Valid oPTION number");
                    break;
                }
            }
        
        }

}