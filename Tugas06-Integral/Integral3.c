#include<stdio.h>

double f(double x){
    return 2*x+3;
}

main(){
    double a,b,h,sum=0,integral,x;
    int n;
    printf("Masukkan batas bawah\na: ");
    scanf("%lf",&a);
    printf("Masukkan batas atas\nb: ");
    scanf("%lf",&b);
    printf("Masukkan jumlah blok\nn: ");
    scanf("%ld",&n);
    h=(b-a)/n;
    int i;
    for(i=1;i<n;i++){
        x =a+i*h;
        sum=sum+f(x);

    }
    integral=h/2.0*(f(a)+2*sum+f(b));
    printf("\nIntegralnya adalah: %lf",integral);
}