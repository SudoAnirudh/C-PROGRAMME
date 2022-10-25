#include<stdio.h>
main()

{
    int num1, num2, opt ;

    printf("Enter A Number");
    scanf("%d",&num1);
    printf("Enter Another Number");
    scanf("%d",&num2);
    
    for(;;){
        printf("Enter Your Choice\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1 : printf("Sum Of %d and %d is %d",num1,num2,num1+num2);
            break;
            case 2 : printf("Difference Between %d And %d Is %d",num1,num2,num1-num2);
            break;
            case 3 : printf("Product Of %d And %d is %d ",num1,num2,num1*num2);
            break;
            case 4 : 
            if (num2==0)
            {
                printf("Syntax Error");
            }
            else{
                printf("Division Of %d and %d Gives %d",num1,num2,num1/num2);
            }
            break;

            case 5: return 0;
            break;
            default: 
            printf("Enter Valid Choice");
            break;

        }
    }
}
