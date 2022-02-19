#include<stdio.h>
int main()
{
    int L,B,W,C,area,Tot_cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=((L+2*W)*(B+2*W)-(L*B));
    Tot_cost=area*C;
    printf("%d",Tot_cost);
    return 0;
}