#include<stdio.h>
int main()
{
    int choice;
    int a=10, b=5;
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1:
        printf("sum=%d",a+b);
        break;

       case 2:
        printf("difference=%d",a-b);
        break;

       case 3:
        printf("product=%d",a*b);
        break;

       case 4:
        printf("divesion=%d",a/b);
        break;


    }
    return 0;
}
