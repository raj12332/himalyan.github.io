#include<stdio.h>
int main()
{
    int n,i=1,w;
    scanf("%d%d",&n,&w);
    for(i=1;i<=n;i++){
        printf("%d*%d=%d\n",w,i,w*i);
    }
    return 0;

}