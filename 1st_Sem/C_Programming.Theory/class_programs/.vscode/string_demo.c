#include<stdio.h>
int main(){
    char name[9];
    printf("Enter your first name:");
    scanf("%8s",name);
    printf("Hello, %s!\n", name);
    
    return 0;
}

#include<stdio.h>
int main(){
    char str[50];
    printf("Enter your name:");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    return 0;
}
 
