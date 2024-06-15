#include<stdio.h>
void equal_to(){
        int n,m;
    printf("enter you number n :");
    scanf("%d",&n);
    printf("enter your number m :");
    scanf("%d",&m);
    if(n==m){
    printf("maje hi maje\n");
    }
    else{
        printf("maje nhi hai\n");
    }

}



void gt_eq(){
int n,m;
    printf("enter you number n :");
    scanf("%d",&n);
    printf("enter your number m :");
    scanf("%d",&m);
    if(n>=m){
    printf("maje hi maje\n");
    }
    else{
        printf("maje nhi hai\n");
    }

}

void st_eq(){
int n,m;
    printf("enter you number n :");
    scanf("%d",&n);
    printf("enter your number m :");
    scanf("%d",&m);
    if(n<=m){
    printf("maje hi maje\n");
    }
    else{
        printf("maje nhi hai\n");
    }

}

int main(){
    //equal_to();
    //gt_eq();
    st_eq();

    return 0;
}
