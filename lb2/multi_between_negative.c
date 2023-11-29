#include "multi_between_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"
#include <stdlib.h>

int multi_between_negative(int *x,int n,int index_1,int index_2){
    int index_3;
    int multiplication=1;
    for (index_3=index_1;index_3<index_2;index_3++){
        multiplication=multiplication*x[index_3];
    }
    return multiplication;
}