#include <stdio.h>
#include <stdlib.h>
char *multiply(char * num1, char * num2){

    int n1_length=strlen(num1); // The length of the first string
    int n2_length=strlen(num2); // The length of the second string
    int flag=0; // to add the result
    int j=n1_length-1; // index to first string
    int i=n2_length-1; // index to second string
    int carry=0;
    char *ptr=(char*)calloc((n1_length+n2_length+1),sizeof(char));
    while(i>=0){
        carry=0;
        int k=(n1_length+n2_length)-1-flag; // index to result string
        int b=num2[i]-'0'; // store value of each character of second string after converting to integer
        j=n1_length-1;
        while(j>=0||carry!=0){
            int a=num1[j]-'0';
            if(j<0){
                a=0;
                b=0;
            }
            int c=(a*b)+carry+ptr[k];// 35
            ptr[k]=c%10; // 5
            carry=c/10; // 3

            k--;
            j--;
        }
        flag++;
        i--;

    }
    for(int i=0;i<(n1_length+n2_length);i++){
            ptr[i]=ptr[i]+'0';
        }
        if(ptr[0]=='0'){
            ptr=ptr+1;
        }
    return ptr;

}
int main()
{
    char*ptr=multiply("2","2");
    printf("%s",ptr);


    return 0;
}
