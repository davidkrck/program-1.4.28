#include <stdio.h>

void rozsah_hodnot(float *data, int l, float *min, float *max){
    int i;
    min = 0;
    max = 0;
    int temp = 0; 
    for(i = 0, i < l; i++){
        if(temp < data[i])
            max = data[i];
        else if (temp > data[i])
        {
            min = data[i];
            
        }    

    }
}

int main(){
    int l = 8;
    float data[] = (3,2,7,15,2,75,1,98);
    float max, min;

    printf("max :%f", max);
    printf("min :%f", min);



}