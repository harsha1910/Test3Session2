#include<stdio.h>
typedef struct _fraction 
{
    int num,den;
}F;
F input_fraction()
{
    F f;
    printf("enter num,den \n ");
    scanf("%d%d",&f.num,&f.den);
    return f;
}
F Largest_fraction(F f1,F f2,F f3)
{
    int cd=f1.den*f2.den*f3.den;
    int f1num=(f1.num*cd)/f1.den;
    int f2num=(f2.num*cd)/f2.den;
    int f3num=(f3.num*cd)/f3.den;
    if(f1num>f2num && f1num>f3num)
    {
        return f1;
    }
    else if(f2num>f3num)
    {
        return f2;
    }
    else
    {
        return f3;
    }
}
void output(F f1,F f2,F f3,F largest)
{
    if(f1.num==largest.num && f1.den==largest.den)
    {
        printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
    }
    else if(f2.num==largest.num && f2.den==largest.den)
    {
         printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
    }
    else
    {
         printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
    }
}
int main()
{
    F f1,f2,f3,largest;
    f1=input_fraction();
    f2=input_fraction();
    f3=input_fraction();
    largest=Largest_fraction(f1,f2,f3);
    output(f1,f2,f3,largest);
    return 0;
}
