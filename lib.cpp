#include "lib.h"

float maxarray(int n, float numeri[]){
    float max=numeri[0];
    for(int i=0;i<n;i++){

        if(numeri[i+1]>max){
            max=numeri[i+1];
        }else{

        }
    }
    return max;
}
