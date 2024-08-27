#include<stdio.h>
#include<conio.h>
int main ()
{ int i, j,t,n, a[20];
printf("Enter the value of N:");
scanf("%d", &n);
printf("enter the numbers: ");
for (i=0 ; i<n;i++)
{ scanf("%d\n",&a[i]);
}
for (i=0 ; i<n; i++)
{ for (j=i+1; j<n; j++)
     {
      if(a[i]>a[j])
      {

      t = a[i];
      a[i] = a[j];
      a[j] = t;
      }
	}
	}
      printf("The numbers are given below in ascending order:");
      for (i=0; i<n; i++)
      printf( "%d", a[i]);
      getch();
      return 0;
      }


