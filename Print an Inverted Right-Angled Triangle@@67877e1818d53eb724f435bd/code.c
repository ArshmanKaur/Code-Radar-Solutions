#include<stdio.h>
int main()
{
    int i,j,rows;
    scanf("%d", &N);
	
  	for ( i = N; i >= 1; i-- ) 
  	{
      	for ( j = 1 ; j <= i; j++ ) 
      	{
          	printf("*",i);
      	}
        printf("\n");
      	
  	
}
    