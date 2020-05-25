#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	  int n,i,j,a[10000],max=0,min=10000,c=0;
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  
	  for(i=0;i<n;i++)
	  {
	      c=1;
	      for(j=i;j>0;j--)
	      {
	          if(a[j]-a[j-1]==2 || a[j]-a[j-1]==1) c++;
	          else break;
	      }
	      for(j=i;j<n;j++)
	      {
	          if(a[j+1]-a[j]==1 || a[j+1]-a[j]==2) c++;
	          else break;
	      }
	      if(c>max) max=c;
	      if(c<min) min=c;
	      }
	      printf("%d %d\n",min,max);
	  }

	return 0;
}

