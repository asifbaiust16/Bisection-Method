#include<stdio.h>
#include<math.h>

float func(double x)
{
    return (x*x*x-x-11);
}
int main()
{
    double a,b;

    int iteration,i=1;
    printf("Root finding of function x*x*x-x-11 using bisection method:\n\n");

    printf("Enter the first approximation of the root:\n");
    scanf("%lf",&a);

    printf("Enter the second approximation of the root:\n");
    scanf("%lf",&b);

    printf("Enter the iteration you want to perform :");
    scanf("%d",&iteration);


    double root,f1,f2,f3;
    for(i=1;i<iteration;i++)
    {
        root=(a+b)/2;
        f1=func(a);
        f3=func(b);
        f2=func(root);
        if(f2==0)
        {
            root=f2;
            break;
        }
        printf("The root after %d iteration is %lf\n",i,root);
        printf("The function value is %lf\n",f2);
        if(f1*f2<0)
            b=root;
        else if(f2*f3<0)
            a=root;
    }

}
