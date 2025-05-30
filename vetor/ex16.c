#include <stdio.h>

#define M 5 
int main(){
    float v[M];
    int c[1];
    for (int i = 0; i < M; i++)
    {
        printf("[%i]", i);
        scanf("%f", &v[i]);
    }
    scanf("%d", &c[0]);
    if(c[0] == 0){

    }
    else if (c[0] == 1){
        for (int i = 0; i < M; i++)
        {
            printf("%.2f, ", v[i]);
        }
        
    }
    else if(c[0] == 2){
        for (int i = M-1; i >=0; i--)
        {
            printf("%.2f, ", v[i]);
        }
        
    }
}