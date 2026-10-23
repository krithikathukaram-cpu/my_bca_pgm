#include <stdio.h>

int main(){
int numbers[5];
// size 6: room for the new
int newData,index;
for(int i=0; i<=4; i++){
printf("Input %d array element:",i+1); 
scanf("%d", &numbers[i]);
}
printf("Enter the new element:");
scanf("%d", &newData);
printf("Enter the index value (0 to 5):");
scanf("%d", &index);

// insertion process: shift right from the end up to 'index'

for(int i=4; i>=index; i--){
numbers[i+1] = numbers[i];
}
numbers[index] = newData;
printf("Updated array: ");

for(int i=0; i<=5; i++){
printf("%d ", numbers[i]);
}
printf("\n");

return 0;
}