#include <stdio.h>

int main(void){
    printf("Hallo Would.");
    int num=0;
    for(int i=0;i<10;i++){
        num=num*i;
    }
    printf("   %d",num);
    return 0;
}