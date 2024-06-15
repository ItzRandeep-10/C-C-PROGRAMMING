/* Arithmaic Operator*/
#include<stdio.h>

void sub(){
int x,y,res;
x=40;
y=20;
res=x-y;
printf("result:%d\n",res);
}
void div(){
int x,y,res;
x=49;
y=7;
res=x/y;
printf("result:%d\n",res);
}
void mul(){
int x,y,res;
printf("ENTER VALUE OF X :\n");
scanf("%d",&x);
printf("ENTER VALUE OF y :\n");
scanf("%d",&y);
res=y*x;
printf("result:%d\n",res);
}

void modulus(){
int x,y,res;
printf("ENTER VALUE OF y :\n");
scanf("%d",&y);
printf("ENTER VALUE OF X :\n");
scanf("%d",&x);

res=y%x;
printf("result:%d\n",res);
}

void add(){
int a,b,res;
a=20;
b=40;
res=a+b;
printf("result:%d\n",res);
}
int main(){
printf("------------Modulus-----------\n");
modulus();
printf("-------------ADDITION-----------\n");
add();
printf("-------------SUBTRACTION-----------\n");
sub();
printf("-------------DIVISSION-----------\n");
div();
printf("-------------multiplication-----------\n");
mul();

return 0;
}
