#include<stdio.h>
int main()
{
    char name[10];
    int age;
    printf("Enter your name:");
    scanf("%s",name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("\n Welcome to github!! your name is:%s and age:%d\n",name,age);
    return 0;
}