# include<stdio.h>
int main(){
    
    int k=0,length,n;
    printf("enter the length you want to have in the pattern : ");
    scanf("%d",&length);
    n=(length+1)/2;
    for (int i=1;i<=length;i++){
        if(n%2==0){
            if(i<=n) k++;
            if(i>n+1) k--;
        }
        else {
            i<=n?k++:k--;
        }    
        for (int j=1;j<=length;j++){
           if (j>=n+1-k && j<=n-1+k){ 
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