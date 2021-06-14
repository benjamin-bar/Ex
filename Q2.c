// Benji coded here

#include <stdio.h>

int main(){

int i, smol, a, x[1000];


scanf("%d", &a);

for(i = 0; i < a; i++){

scanf("%d", &x[i]);
}
smol = x[0];

for(i = 1; i < a; i++){

if(x[i] < smol){

smol = x[i];
}
}

printf("%d\n", smol);

return 0;
}
