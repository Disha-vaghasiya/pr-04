/*1 0 1 0 1
    1 0 1 0
      1 0 1
        1 0
          1*/

#include<stdio.h>

void main()
{
  	int i,j,k;
  
   		for (i=1;i<=5;i++)
   		{
   			for(k=1;k<i;k++)
  			{
    			printf(" ");
  			}
  			for(j=5;j>=i;j--)
 			{
   				(j%2==1)?
	   					printf("1"):printf("0");
			}
  				printf("\n");
  		}

}
