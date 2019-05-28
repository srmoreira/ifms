#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
 int valor, m, c, d, u, result, i;
 
 printf("Digite um valor: ");
 scanf("%d", &valor);
 i=valor;
 
while(i>0){
	printf("\n Valor: %d",i%10);
	i=i/10;
}

u=(valor%10);
d=(valor%100)/10;
c=(valor%1000)/100;
m=(valor%10000)/1000;

printf("\n");
printf("\n Soma: %d ",result=m+c+d+u);
printf("\n Media: %0.0d",result=result/2);
printf("\n");

if(u<=d&&u<=c&&u<=m)printf("\n Menor Valor: %d",u);
else{
if(d<=u&&d<=c&&d<=m) printf("\n Menor Valor: %d",d);
else
if(c<=u&&c<=d&&c<=m) printf("\n Menor Valor: %d",c);
else
if(m<=u&&m<=d&&m<=c) printf("\n Menor Valor: %d",m);}

if(u>=d&&u>=c&&u>=m)printf("\n Maior Valor: %d",u);
else{
if(d>=u&&d>=c&&d>=m) printf("\n Maior Valor: %d",d);
else
if(c>=u&&c>=d&&c>=m) printf("\n Maior Valor: %d",c);
else
if(m>=u&&m>=d&&m>=c) printf("\n Maior Valor: %d",m);}


return 0;
}

