#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter a");
    scanf("%d" , &a);
    printf("enter b");
    scanf("%d" , &b);
    int sum = a+b;
    printf("sum is : %d" , sum);
    return 0;
}
