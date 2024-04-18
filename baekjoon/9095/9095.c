#include<stdio.h>
int main()
{
    int ma[11]={1,2,4};
    int num;
    scanf("%d",&num);
    int i,k;
    int a;
    for(i=0;i<num;i++)
    {
		scanf("%d", &a);
		for(k=3;k<a;k++)
        {
			ma[k] = ma[k-3] + ma[k-2] + ma[k-1];
		}
		printf("%d\n", ma[a-1]);
	}
    
}