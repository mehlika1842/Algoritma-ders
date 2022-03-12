# Algoritma-ders
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL, "Turkish");
int faktoriyel=1;
float sonuc=1.0,x;

printf("X değerini giriniz:"); 
scanf("%f",&x);

printf("1.adım=>1");
for(int i=1;i<4;i++)
{
 faktoriyel*=i;
 sonuc += (pow(x,i)/(float)faktoriyel); 
 printf("\n%d.adım=>%f",i+1,sonuc);
}
printf("\nSonuç=%.4f",sonuc);

return 0;
}
