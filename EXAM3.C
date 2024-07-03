#include <stdio.h>
/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/
main()
{
	int r,c,s;
	
	for(r=1;r<=5;r++)
	{
		for(s=1;s<r;s++)
		{
			printf("  ");
		}
		for(c=r;c<=5;c++)
	    {
			if(c%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}	
	    }
	    printf("\n");
	}
}