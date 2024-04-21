# include<stdio.h>
int main(){
    char a;
    for (int i=1;i<=5;i++){
        a='A';
        for (int j=1;j<=7;j++){
           if (j<=5-i || j>=3+i){ 
            printf("%c",a);
           }
           else{
            printf(" ");
           }
           a++;
        }
        printf("\n");
    
    }
return 0;
}