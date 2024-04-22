#include<stdio.h>
#include<stdlib.h>

void main(){
int n1;
int n2;
int r1;

printf("digite um valor:");
scanf("%d", &n1);
printf("\n digite outro valor:");
scanf("%d", &n2);

r1 = n1-n2;

printf("\n\n A subtração de %d e %d resulta em: %d",n1,n2,r1);


}
