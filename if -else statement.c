#include <stdio.h>
int main() {
    int age = 0;
    printf("Whats your age :",age);
    scanf("%d", &age);
    if (age>=18){
        printf("you r eligible");
    }
    else {
        printf("you r not eleigible");
    }
    
    return 0;
}


// C Program to Check Whether a Number is Even or Odd
#include <stdio.h>
    int main(){
        int x=0;
        printf("Enter a number:");
        scanf("%d", &x);
        if(x%2==0){
            printf("Even");
        }
        else{
            printf("odd");
        }
    return 0;
