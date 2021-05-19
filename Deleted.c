#include <stdio.h>
int main(void) {
	// your code goes here
	int X;
	float Y,amount;
	scanf("%d",&X);
	scanf("%f\n",&Y);
	
	if(X<=Y)
	{
	    if(X%5==0)
	    {
	        amount = Y - 0.50;
	        amount = amount - X;
	        printf("%.2f",amount);
	    }
	    else{
	        amount = Y;
	        printf("%.2f",amount);
	    }
	}
	else{
	    amount = Y;
	    printf("%.2f",amount);
	}
	return 0;
}
