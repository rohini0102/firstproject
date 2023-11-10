#include <stdio.h>
int main ()
{
	int branch;
	printf ("enter any branch");
	scanf ("%d",&branch);
	if (branch==1)
	{
		printf ("civil");
	}
	else if (branch==2)
	{
		printf ("eee");
	}
	else if (branch==3)
	{
		printf ("mechanical");
	}
	else if (branch==4)
	{
		printf ("ece");
	}
	else if (branch==5)
	{
		printf ("cse");
	}
	else
	{
		printf ("invalid branch");
	}
	return (0);
}
