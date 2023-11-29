#include "index_first_negative.h"

int index_first_negative(int *x){
    int i = 0;
    while(x[i] >= 0){
    i++;
    }
    return i;
}
