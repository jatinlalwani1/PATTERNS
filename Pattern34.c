# include<stdio.h>
int main(){
    
    int line;
    int k=1,p;
    printf("Enter the number of line you want : ");
    scanf("%d",&line);
    for (int i=1;i<=line;i++){
        p=k;
        for (int j=1;j<=i;j++){
           printf("%d",p);
           p=p-(line-i+j);
        }
        printf("\n");
        k=k+1+line-i;
    
    }
return 0;

}