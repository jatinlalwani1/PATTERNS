# include<stdio.h>
int main(){
    
    int k,line,n;
    char a;
    printf("Enter the number of lines you want : ");
    scanf("%d",&line);
    for (int i=1;i<=line;i++){
        k=1;
        n=1;
        a='A';
        for (int j=1;j<=line*2-1;j++){
           if (j>=line+1-i && j<=line-1+i){
            if(k){
                if (i%2==1){
                    printf("%d",n++);
                }
                else{
                    printf("%c",a++);
                }
            }
            else{
                printf(" ");
            }
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