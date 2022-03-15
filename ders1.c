#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int x,faktoriyel=1;
    float sonuc=1.0;
    printf("X'i gir:");
    scanf("%d",&x);	
    for(int i=1;i<5;i++)
    {
        faktoriyel *= 2*i * (2*i - 1);

        if(i % 2 == 0)
        {
            sonuc += (pow(x,2*i)/(float)faktoriyel);
        }
        else 
        {
            sonuc -= (pow(x,2*i)/(float)faktoriyel);
        }
    }
    printf("cosx=%f",sonuc);

    return 0;
}
