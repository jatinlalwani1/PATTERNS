# include<stdio.h>
int main(){
    
    int k,rows;
    printf ("enter the number of rows : ");
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        k=1;
        for (int j=1;j<=rows;j++){
           if (j<=i){ 
            printf("%d",k);
            k=1-k;
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    
    }
return 0;
}