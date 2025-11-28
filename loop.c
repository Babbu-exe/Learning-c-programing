//using for loop for getting output 1 to 10
#include <stdio.h>
int main () {
    int i;
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}
////using for while for getting output 1 to 10
#include <stdio.h>
int main (){
    int i =1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

// user input taking.. nested loops using code ..type
#include <stdio.h>

int main() {
    int row =0;
    int column=0;
    char symbol='\0';
    printf("enter no of rows= ");
    scanf("%d",&row);
    
    printf("enter no of columns= ");
    scanf("%d",&column);
    
    printf("enter no of symbol= ");
    scanf(" %c",&symbol);
    
    for(int i=0;i<row;i++){
        for(int i=0;i<column;i++){
            printf("%c",symbol);
        }
    printf("\n");
    } 

    return 0;
}
