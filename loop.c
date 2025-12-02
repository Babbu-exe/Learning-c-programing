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


// LEARN THIS....... WILL HELP IN QUESTION//
for (int i =1;i<=r;i++){
        for(int j =1;j<=c;j++){
            printf("%c",s);
        }
        printf("\n");


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



//TAKING INPUTS FOR ROWS COLOUMNS AND SYMBOL AND PRINT THE PATTERN//

#include <stdio.h>
int main(){
    int r,c;
    //USER INPUT FOR ROWS AND COLOUMNS//
    printf("Enter no of rows: ");
    scanf("%d",&r);
    printf("Enter no of columns: ");
    scanf("%d",&c);
    //USER INPUT FOR SYMBOL//
    char s;
    printf("Enter your symbol: ");
    scanf(" %c",&s);
    //LOOP FOR PRINTING//
    for (int i =1;i<=r;i++){
        for(int j =1;j<=c;j++){
            printf("%c",s);
        }
        printf("\n");
    }
}


//prompt with print # symbol as many orws and coloumn you want//

#include <stdio.h>

int main() {
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",& n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("#");
        }
    printf("\n");
    }

    return 0;
}



//question for ulti ladder with symbol
#include <stdio.h>

int main() {
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",& n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){  //logic is sampe for all reverse ladder// 
            printf("#");
        }
    printf("\n");
    }

    return 0;
}

//printing ladder in intiger form //
#include <stdio.h>

int main() {
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",& n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){   //logic is same for all ladder pattern //
            printf("%d",j);
        }
    printf("\n");
    }

    return 0;
}



//printing reverse ladder in intiger form //
#include <stdio.h>

int main() {
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",& n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){
            printf("%d",j);
        }
    printf("\n");    
    }
    return 0;
}
