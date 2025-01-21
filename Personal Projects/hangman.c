#include <stdio.h>
#include <math.h>

int addtwo(){
    int l1[] = {2,4,3};
    int l2[] = {5,6,4};
    // printf("%d\n",sizeof(l1));
    int num1 = 0;
    int sum1 = 0;
    int length = (sizeof(l1))/4;
    for(int i = length-1; i>=0; i--){
        printf("%d\n",l1[i]);
        int n = l1[i];
        sum1 += n * (pow(10,i));
        printf("%d\n",sum1);
    }

}

int main(){
    addtwo();
}