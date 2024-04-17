# include<stdio.h>
int main(){
    
    int k;
    for (int i=1;i<=7;i++){
        k=7-i;
        for (int j=1;j<=7;j++){
           if (j<=8-i){ 
            printf("%d ",k);
            k--;
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    
    }
return 0;
}