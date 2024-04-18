#include<stdio.h>
int main()
{
  int a,b;
  int i,j,k;
  char nemo[50][51]={0,};
  int count=0;
  scanf("%d%d",&a,&b);
  for(i=0;i<a;i++)
  {
    scanf("%s",nemo[i]);
  }
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            for(k=0;k<b;k++)
            {
                if(k%2==0&&nemo[i][k]=='W')
                {
                    count++;
                }
                if(k%2!=0&&nemo[i][k]=='B')
                {
                    count++;
                }
            }
        }
        else if(i%2!=0)
        {
            for(j=0;j<b;j++)
            {
                if(j%2==0&&nemo[i][j]=='B')
                {
                    count++;
                }
                if(j%2!=0&&nemo[i][j]=='W')
                {
                    count++;
                }
            }
        }
    }

  printf("%d",(a*b)-count);
                
}