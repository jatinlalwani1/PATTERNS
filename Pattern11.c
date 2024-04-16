# include<stdio.h>
int main(){
    
    int k=0 , rows;
    printf("Enter the no. of rows you want in the pattern : ");
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        if (rows%2==0){
            if(i<=rows/2){
                k++;
            }
            if(i>rows/2+1){
                k--;
            }
        }
        else{
            i<=(rows+1)/2? k++:k--;
        }
        for (int j=1;j<=rows;j++){
           if (j<=k){ 
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