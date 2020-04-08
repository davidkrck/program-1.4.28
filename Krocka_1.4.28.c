#include <stdio.h>

void rozsah_hodnot(float *data, int l, float *min, float *max);

int main(){
    int l = 8;
    float data[] = {3,2,7,15,2,75,1,98};
    float max, min;

    rozsah_hodnot(data, l, &max, &min);

    printf("Najväcsia hodnota z pola: %1.f\n", max);
    printf("Najmensia hodnota z pola: %1.f", min);

}

void rozsah_hodnot(float *data, int l, float *min, float *max){
    int i;
    *min = data[0];
    *max = data[0];

    for(i = 0; i < l; i++){
        if(*min < data[i])
            *min = data[i];
        else if (*max > data[i])
            *max = data[i];    
    }
}