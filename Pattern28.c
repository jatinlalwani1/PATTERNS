# include<stdio.h>
int main(){
    
    int k=0,p;
    for (int i=1;i<=5;i++){
        if(i%2==1){
            k=k+1;
        }
        else{
            k--;
            k=k+i;
        }
        p=k;
        for (int j=1;j<=9;j++){
           if (j<=2*i-1){
            if(j%2!=0){
                printf("%d",p);
                if(i%2){
                    p++;k++;
                }
                else{
                    p--;
                }
            }
            else{
                printf("*");
            }
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    
    }
return 0;
}