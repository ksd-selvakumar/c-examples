/* Write a program to generate the following seqence util 1000
 * 1,3,7,15,31
 *  */
#include <stdio.h>
void main()
{
	int ls=0;
	while(ls<1000)
	{
		ls=(ls*2)+1;
		if(ls<1000)
		printf("%d\t",ls);
	}
	
}
