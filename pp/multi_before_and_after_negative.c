#include "multi_before_and_after_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"
#include <stdlib.h>

int multi_before_and_after_negative(int *x,int n,int index_1,int index_2){
    int index_4;
    index_4=index_1;
    int s=0;
    int index_5;
    int l=1;
    for (s=0;s<index_4;s++){
        l=l*x[s];
    }
    for (index_5=index_2;index_5<n;index_5++){
        l=l*x[index_5];
    }
    return l;
}