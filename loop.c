#include<stdio.h>
int one_to_twenty(){
    for(int i=0;i<=10;i++){
        printf("%d \n",i);
    }
 }


 int one_to_twenty_while(){
    int i=0;
    while(i<10){
        printf("%d \n",i);
        i++;

    }
}


int main(){
    one_to_twenty();
    printf("this is while loop \n");
    one_to_twenty_while();
    return 1;
    }
