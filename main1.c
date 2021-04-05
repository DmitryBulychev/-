#include <stdio.h>

int main() {
   double x, y;
    printf("Введите координату x >");
    scanf("%lf",&x);
    printf("Введите координату y >");
    scanf("%lf",&y);
    printf("x=%6.3lf;  y=%6.3lf\n",x,y);
    if((y<=0&&x<=1&&x>=-1)||(y<=1&&y>=-1&&x<=0)){
        printf("Введенная точка попадает в область\n");
    }
    else printf("Введенная точка не попадает в область\n");
    return 0;
}
