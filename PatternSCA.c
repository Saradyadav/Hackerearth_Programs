

\\sayan50...
#include<stdio.h>
int main()
{
    int rows, i, j, space;
    printf("Enter number of times\n ");
    scanf("%d",&rows);
    for(i=rows; i>=1; --i)
    {
    	if(i==7)
    	printf("\tSay Hi");
    	else
    	{
        for(space=0; space < rows-i; ++space)
            printf("  ");
        for(j=i; j <= 2*i-2; ++j)
        	if(j%3==0)
            printf(" ");
            else
        printf("Hi ");
		for(j=0; j < i-1; ++j)
		if(j%3==0)
		printf(" ");
		else
		 printf(" SCA");
	}
        printf("\n");
    }
    return 0;
}
