/*      5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1*/

#include<stdio.h>

void main()
{
      int i,j,k,n;
     
     	 for(i=5;i>=1;i--)
      	 {
	 			for(k=1;k<=i;k++)
	 			{
	   				printf(" ");
	 			}
	 			for(j=i;j<=5;j++)
				{
	   				printf("%d",j);
	 			}
	 			for(n=4;n>=i;n--)
	 			{
	   				printf("%d",n);
	 			}
					 printf("\n");
	 			}
}

