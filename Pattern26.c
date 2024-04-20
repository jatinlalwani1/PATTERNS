# include<stdio.h>
int main(){
    
    char k;
    for (int i=1;i<=4;i++){
        k=64+i;
        for (int j=1;j<=4;j++){
           if (j<=i){ 
            printf("%c",k--); // As first printed then decremented
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    
    }
return 0;
}