#include <stdio.h>
#include <math.h>
int main() {
    double a, b;//a=-1.3, b= 5.5
    double y;
    double m;
    printf("Введите переменную а = ");
    scanf("%lf", &a);
    printf("Введите переменную b = ");
    scanf("%lf", &b);
    if (a<b){
        m = (2*a*b)/(1+log(b));
    }
    else
    { m= tan(a)-1/sin(b);
    }
/* */
    if (m<a){
        y= log(a*m-b);
    }
    else if(a==m){
        y=pow(cos(a),2)-sin(m*b);
    }
    else if (m>a){
        y= (b+m)/(1-pow(cos(a), 2));
    }
    printf("m равно %.3lf\ny равно %.3lf", m, y);

    return 0;
}
