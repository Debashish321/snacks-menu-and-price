#include<stdio.h>
int main()
{
    int n;
    printf("enter a number from 1 to 5 -> ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Food item -> French Fries\nPrice -> Rs99");
        break;
        case 2:printf("Food item -> Sandwich\nPrice -> Rs149");
        break ;
        case 3:printf("Food item -> Pizza\nPrice -> Rs239");
        break;
        case 4:printf("Food item -> Burger\nPrice -> Rs129");
        break;
        case 5:printf("Food item -> Pasta\nPrice -> Rs179");
        break;
        default:printf("Wrong choice entered\nChoose from 1 to 5 only");
    }
    return 0;
}
