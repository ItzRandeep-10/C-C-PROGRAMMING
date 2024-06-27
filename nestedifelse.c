                            #include<stdio.h>

int check_eligibility(){
    int pre;
    printf("enter your pre marks:\n");
    scanf("%d",&pre);
    if (pre>300){
        printf("Tum Pass ho pre mein");

        int mains;
        printf("Enter Your Mains Marks :");
        scanf("%d",&mains);

        if (mains>600){
            printf("Pass ho mains meins");
            int inter;
            printf("Enter Your Interw Marks :");
            scanf("%d",&inter);

            if(inter>700){
                printf("Tum Ias ban gye..");
            }
            else{
                printf("Tum Interw mein Fail hogye..!");
            }
        }
        else{
            printf("Fail ho mains mein");
        }


    }

    else{
        printf("Tum Fail ho gye pre mein");
    }
}

int main(){
    check_eligibility();
    return 0;
}







