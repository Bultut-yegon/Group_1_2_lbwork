#include<stdio.h>
//Recursive function
int fn(int u){
    if(u<1)
    return 1;
    else
    return 7 + fn(u-2);
}
int main(){
    printf("%d\n",fn(4));
    return 0;
}