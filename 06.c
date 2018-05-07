
int polynomial(int x);

int main(void)
{
    int x,poly;
    scanf("%d",&x);
    poly=polynomial(x);
    printf("value %d",poly);
}

int polynomial(int x)
{
   int poly;
   poly= (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
   return poly;
}
