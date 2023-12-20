#include <stdio.h>
#include <stdlib.h>

#define theNum 12

int func1(int num);
int func2(int num);

int main(){
    int num1;
    int num2;

    num1 = func1(theNum);
    num2 = func2(theNum);

    printf("%d/n", num1 + num2);
    return 0;
}

int func1(int num){
    return num*2; 
}

int func2(int num){
    return num*10; 
}