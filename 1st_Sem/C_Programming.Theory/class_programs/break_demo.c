#include<stdio.h>
int main(){
    for (int j = 0; j <=5; j++){
        printf("Loop started");
        for(int i=0; i<5; i++){
            printf("Inner loop started");
            break;
            printf("From Inner loop");

        }
        if(j==2){
         printf("From inside the loop");
         break;
    }
    printf("Program termintee..");
}
