#include<stdio.h>
int input_n_and_r(int *n,int *r)
{
    printf("enter n and r value \n");
    scanf("%d%d",n,r);
}
int fact(int r)
{
    int n,i,v=1;
    for(i=r;i>=1;i--)
    {
        v=v*i;
    }
    return v;
}
int ncr(int n,int r)
{
    int result;
    result=fact(n)/(fact(r)*fact(n-r));
    return result;
}
void output(int n,int r,int result)
{
    printf("the ncr value for n= %d , r= %d is %d",n,r,result);
}
int main()
{
    int n,r,result,num;
    input_n_and_r(&n,&r);
    result=ncr(n,r); 
    output(n,r,result);
    return 0;

}