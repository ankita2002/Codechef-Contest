#include <stdio.h>
#include<math.h>
int main(void) {
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c,d,e,f,g;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        e=(a+c-b)/2;   //apples
        f=(a+b-c)/2;  //mangoes
        g=(b+c-a)/2;
        
        printf("\n%d %d %d",e,f,g);
    }
	// your code goes here
	return 0;
}

