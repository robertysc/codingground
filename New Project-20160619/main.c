#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    int i=1,j=2, n = 4*1000*1000, sum=0;
	
	for (; j < n; j+=i, i=j-i) {
			if(!(j&1))
			    sum += j;
	}
	printf("s=%d\n",sum);
	

    return 0;
}

