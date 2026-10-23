#include<stdio.h>
int main(){
    int day=1;        //1,2,3,4,5,6,7
    switch (day){
        case 1:
        printf("Week Day : Monday");
        break;
        case 2:
        printf("Week Day : Tuesday");
        break;
        case 3:
        printf("Week Day : Wednesday");
        break;
        case 4:
        printf("Week Day : Thursday");
        break;
        case 5:
        printf("Week Day : Friday");
        break;
        case 6:
        printf("Week Day : Saturday");
        break;
        case 7:
        printf("Week Day : Sunday");
        break;
        default:
        printf("Invaild Option..");
    }
}
