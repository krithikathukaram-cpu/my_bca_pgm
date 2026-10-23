#include<stdio.h>
int main(){

    int numer_of_student,rollnumber,catagory;
    int regular_seatnumber=100;
    int backlog_seatnumber=200;
    int seatnumber;
    
    
    printf("Enter number of student");
    scanf("%d",&numer_of_student);

    for(int count=1;count<=numer_of_student;count++){
        printf("Enter roll number");
        scanf("%d",&rollnumber);
        printf("Enter the catagory[0-Regular;1-Backlog]");
        scanf("%d",&catagory);
        if(catagory==0){
            regular_seatnumber++;
            seatnumber=regular_seatnumber;

        }else{
            backlog_seatnumber++;
            seatnumber=backlog_seatnumber;
        }
        if(rollnumber%2==0){

            printf("Roll No:%d",rollnumber);
            printf("Catagory:%d",catagory);
            printf("Seat number:%d",seatnumber);
            printf("Room: HALL A");

        }else{
            printf("Roll No:%d",rollnumber);
            printf("Catagory:%d",catagory);
            printf("Seat number:%d",seatnumber);
            printf("Room: HALL B");
        }


    }



}



#include<stdio.h>

int main(){
    int name,room_type,room_name,nights;
    float rate,base_amount,discount_percent;
    float discount,gst,final_amount;

    printf("Enter guest name:");
    scanf("%d",&name);

    printf("Enter room type:");
    scanf("%d",&room_type);

    printf("Enter number of nights:");
    scanf("%d",&nights);

    if(nights<1){
        printf
    }
}





