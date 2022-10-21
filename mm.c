#include <stdio.h>
int main()
{
  int N;
  int n=0;

  scanf("%d", &N);

  for(int s1=1;s1<=200 && n<N;s1++)
    {
        for(int s2=s1;s2<=200;s2++)
        {
            for(int H=s2;H<=200;H++)
            {
              if((s1*s1 + s2*s2) == H*H)
              {
               printf("%d %d %d\n", s1, s2, H);
               n++;
              }
            }
        }
    }



}
