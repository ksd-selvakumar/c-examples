/* using while construct find the sum of the following series
 * sum = 0+2+4+6+ ... +100 */
#include <stdio.h>

void main()
{
	int sum=0;
	int zero=0;
	int d=0;
	while(sum<=100 && zero == (sum%2))
	    {	  
		  d=d+sum;
		  sum+=2;
		//  printf("%d\n",sum);
	    }
	printf("%d\n",d);
}
