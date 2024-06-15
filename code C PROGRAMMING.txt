#include<stdio.h>

void add(){
    //int x=10;
    //int y=20;
    //int res=x+y;
    //print("Result :%d",res);
    int x=10;
    int y=20;
    int res=x+y;
    printf("Result :%d \n",res);
}

void subtract(){
     int j=50;
     int k=80;
     int res=k-j;
     printf("result :%d\n",res);
}


void multi(){
    int r=7;
    int s=7;
    int res=r*s;
    printf("result :%d\n",res);
}

void divide(){
    int k=27;
    int l=3;
    int res=k/l;
    printf("result :%d\n",res);
}



int main(){
    printf("-------------ADDITION-----------\n");
    add();
    printf("-------------SUBTRACTION-----------\n");
    subtract();
    printf("-------------Multiplication-----------\n");
    multi();
    printf("-------------divission-----------\n");
    divide();
    return 0;
}