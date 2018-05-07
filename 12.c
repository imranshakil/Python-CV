
double innner_product(double a[],double b[], int n);

void   main(void)
{
    double a[]= {120.23,56.45,45,89,23.89};
    double b[]= {120.23,56.45,45,89,23.89},temp;
    int n;
    n = sizeof (a)/sizeof (double);

    temp=innner_product(a,b,n);
    printf("result = %f \n",temp);

}

double innner_product(double a[],double b[], int n)
{
    double sum=0;
    int i;
    for (i=0; i<n; i++)
    {
        sum =sum+ (a[i]*b[i]);
    }
    return sum;


}
