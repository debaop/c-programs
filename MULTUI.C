  #include<stdio.h>
  #include<conio.h>
  int main ()
  { int n, i, d;
  printf("\nInput value of n:");
  scanf("%d", &n);
  for( i=1; i<=10; i++)
  {
  d = n*i;
  printf("\n%d * %d = %d\n",n , i,d);
  }
 getch();
 return 0;
  }