#include <stdio.h>
// creating a funtion //
void check(){
    int age;
    printf("Enter your Age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("you r eligible");
    }
    else{
        printf("not eligible");
    }
}                              //thing to notice there is no return in funtion//


//main start after you create a funtion//
int main()
{
    check();
    return 0;
}
