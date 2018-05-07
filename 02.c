
int check(int a,int b, int n);

void   main(void)
{
    int a=5,b=10,n=6,x;
    x=check(a,b,n);
    printf(" returned value = %d",x);


}

int check(int a,int b, int n)
{
    if (((a>=0)&&(a<=n-1))&& ((b>=0)&&(b<=n-1)))
        return 1;
    else
        return 0;


}
