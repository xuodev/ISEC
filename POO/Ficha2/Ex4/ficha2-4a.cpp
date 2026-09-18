#include <stdio.h>

void troca(int &a, int &b){
    int c = a;
    a = b;
    b = c;
  
}

int main(){
    int a = 5;
    int b = 10;
    troca(a,b);
    printf("a: %d, b: %d", a, b);
}