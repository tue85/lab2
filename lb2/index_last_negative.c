#include "index_last_negative.h"

int index_last_negative(int *x){
    int index_2;
    int i;
    for (i=0;i<n;i++){
        if (x[i]<0){
        index_2=i;
        }
    }
    return index_2;
}