#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
int a, b ;
printf ("Enter the value of a and b :");
 scanf("%d%d",&a,&b);
 sum();
 getch();
 }
 int sum (int x,int y)
 {
 int s;
 s= x + y;
 printf("The sum of the numbers are:%d" ,s);
 getch();
 }


