#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long q = 0, w = 0, e = 0, r = 0, t = 0;
	long y = 0, u = 0, i = 0, o = 0, p = 0, a = 0, s = 0;
	int x = 0;
	scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld", &q, &w, &e, &r, &t, &y, &u, &i, &o, &p);
	long d[10] = { q,w,e,r,t,y,u,i,o,p };
	for (x = 0; x < 10; x++)
	{
		if (d[x] > 0)
		{
			a++;
		}
		else
		{
			s++;
		}
	}
	printf("positive:%d\n", a);
	printf("negative:%d\n", s);
	return 0;
}