# include<stdio.h>
int main(){
    
    for (int i=1;i<=7;i++){
        for (int j=1;j<=7;j++){
           if (j==i || j==8-i){ 
                if (i==j){
                    printf("\\");
                }
                else{
                    printf("/");
                }
                // For backward slash cutting the center of the program
                // if (i==8-j){
                //     printf("/");
                // }
                // else{
                //     printf("\\");
                // }  
                // For forward slash cutting the center of the pattern
           }
           else{
            printf("*");
           }
        }
        printf("\n");
    
    }
return 0;
}