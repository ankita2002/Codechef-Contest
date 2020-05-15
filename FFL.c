#include <stdio.h>
#include<string.h>
int main(void) {
    int a,f;
    scanf("%d",&a);
    for(f=0;f<a;f++)
    {
        int b,c,r,p[10000],place[10000],m1=300,m2=300,s,j;
        scanf("%d %d",&b,&c);
        r=100-c; // REMAINING
        
        for(j=0;j<b;j++)
        scanf("%d",&p[j]); //price
        for(j=0;j<b;j++)
        scanf("%d",&place[j]); //defender or forward
        
        for(j=0;j<b;j++)
        {
            if(place[j]==1 && m1>p[j])
            m1=p[j];
        }
        for(j=0;j<b;j++)
        {
            if(place[j]==0 && m2>p[j])
            m2=p[j];
        }
        
        s=m1+m2;
        if(s>r)
        printf("no\n");
        else
        printf("yes\n");
    }
	// your code goes here
	return 0;
}

