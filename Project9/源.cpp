#include<stdio.h>
int main()
{
	int i, j, n;
	int s, t;

	printf("please input a n:");
	scanf("%d", &n);
	i = 0;
	s = 0;

	while (i <= n)
	{
		t = 1;
		j = 1;
		i++;
		do 
		{
			t = t*j;
			j++;
		} while (j <= i);
		printf("i! =%d.\n", t);
		s = s + t;
	}
	printf("total equals to %d", s);
	return 0;
}