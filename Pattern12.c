# include<stdio.h>
int main(){
    
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for (int i=1;i<=r;i++){
        for (int j=1;j<=2*r-1;j++){
           if (j>=i && j<=2*r-i){ 
            printf("*");
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    
    }
return 0;
}