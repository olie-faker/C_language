#include<stdio.h>
int main()
{
   int age = 0;
printf("请输入用户年龄：\n");
scanf("%d", &age);
if (age<18)
printf("未成年人\n");
else 
printf("成年人\n");
return 0;
}