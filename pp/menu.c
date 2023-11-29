#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"

int main()
{
    int b;
    scanf("%d",&b);
    char g = 0;
    int a[20];
    int j = 0;
    do
    {
        scanf("%d%c",&a[j],&g);
        j++;
    }
    while(g!='\n');
    int c,d,v,y;
    c=index_first_negative(a);
    d=index_last_negative(a,j);
    v=multi_between_negative(a,j,c,d);
    y=multi_before_and_after_negative(a,j,c,d);
    switch(b){
        case 0:
            printf("%d",c);
            break;
        case 1:
            printf("%d",d);
            break;
        case 2:
            printf("%d",v);
            break;
        case 3:
            printf("%d",y);
            break;
        default:
            printf("Данные некорректны");
    }
    return 0;
}