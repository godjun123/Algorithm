#include<stdio.h>
int main()
{
    int a,b,c,d;
    int me,mother;
    int k=2;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
    mother=b*d;
    me=(a*d)+(c*b);
    while(k<=me&&k<=mother)
    {
        if((mother%k!=0)||(me%k!=0))
        {
            k++;
        }
        else
        {
            mother/=k;
            me/=k;
        }
    }
    printf("%d %d",me,mother);
}