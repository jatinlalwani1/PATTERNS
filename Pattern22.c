# include<stdio.h>
int main(){
    
    int k;
    for (int i=1;i<=4;i++){
        k=49;
        for (int j=1;j<=7;j++){
           if (j>=5-i && j<=3+i){
             printf("%c",k);
             k++;
             if (j==4){
                k=65;
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

/*
 In this program i have used the ASCII values of the character and digits to get the digits and character get printed
1 has the ASCII value of 49 and
A has the ASCII value of 65 
And one more thing to note that here i was easily able print the int type variable k with the help of character format specifier (%c)
which is because in every character variable, the ASCII value of that particular character is stored which is an integer value only 
that's why it got executed with no error
*/