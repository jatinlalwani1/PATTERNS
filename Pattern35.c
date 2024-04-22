#include <stdio.h>
int main(){
    
    int k,flag=1,line;
    printf("Enter the number of lines you want in the pattern : ");
    scanf("%d",&line);
    for (int i = 1,k=0; i <= 2*line-1; i++){
        if (i<line-k){
            printf(" ");
        }
        else{
            if(flag){
            printf("*");
            }
            else{
                printf(" ");
            }
            flag=1-flag;
        }
        if(i==line+k){
            k++;
            printf("\n");
            if(i==2*line-1){
                break;
            }
            i=0;
            flag=1;
        }
    }
    return 0;
}