//CODE.exe Benjamin
#include <stdio.h>
#include <math.h>


int main (){

float a, b, c, d;
int i;

scanf("%f %d", &a &d);

b = 1;
c = 1;

for (i = 1; i < d; i++){

b = b * pow((double) (-1), (double) (2 * i - 1)) * a * a/ (2 * i * (2 * i - 1));

c = c + b;

}


printf("%.5f\n", c);

return 0;
}
