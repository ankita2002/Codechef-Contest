#include <stdio.h>

int main(void) {
    int a,b,p1=0,p2=0,m1=0,m2=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        a=a+p1;
        b=b+p2;
        
        if(a>b && m1<(a-b))
        m1=a-b;
        else if (b>a && m2<(b-a))
        m2=b-a;
        p1=a;
        p2=b;
    }
    if(m1>m2)
    printf("1 %d",m1);
    else
    printf("2 %d",m2);
    
	return 0;
}

