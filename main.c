// 1  2  3  6  9  18  27  54
#include <stdio.h>
int main()
{
    printf("1  2  3  6  9  18  27  54 + .....nth term\n\n");
    int n;
    printf("n: ");
    scanf("%d",&n);

    series(1,1,1,n);//printf("%d",series(5));
    return 0;
}
void series(int i,int r,int d,int n)
{
    if(i==1)
    {
        printf("%d ",r);
        i++;
        r=r+d;
        series(i,r,d,n);
    }
    else if(i==n)
    printf("%d ",r);

    else
    {
        if(i%2!=0 && i!=1)
            d=3*d;
            i++;
        printf("%d ",r);

        series(i,r+d,d,n);
    }
}
