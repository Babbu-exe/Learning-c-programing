#include <stdio.h>

int main() {
    int number[]={1,2,3,4,5,6};
    char grades[]={'a','b','c','d','f'};
    char name[]={"babbu"};
    number[2]=30;
    number[3]=40;
    number[4]=50;
    printf("%d\n", number[4]);
    printf("%c\n",grades [2]);
    printf("%c",name [4]);
    return 0;
}


//prompt and learning how to store value in a array //
#include <stdio.h>

int main() {
    int number[5]={0};
    printf("coco:");
    scanf("%d",&number[0]);
    
    printf("coco:");
    scanf("%d",&number[1]);
    
    printf("coco:");
    scanf("%d",&number[2]);
    
    printf("coco:");
    scanf("%d",&number[3]);
    
    printf("coco:");
    scanf(" %d",&number[4]);
    
    for(int i=0;i<5;i++){
        printf("%d",number[i]);
    }
    printf("");
    return 0;
}    



// 2d array is easy ...
#include <stdio.h>

int main() {
    int a [2][2]={{1,2},
                 {1,2}};
        printf("%d",a[0][0]);
    
    return 0;
}
