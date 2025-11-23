#include<stdio.h>
int main(){
    int age=0;
    float gpa=0.0f;
    char grade='\0';
    
    printf("enter your age :");
    scanf("%d", & age);
    
    printf("enter your gpa :");
    scanf("%f",&gpa);
    
    printf("enter your grade :");
    scanf(" %c",&grade);
    
    printf("%d\n" ,age);
    printf("%f\n",gpa);
    printf(" %c\n",grade);
}
