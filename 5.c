#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]){
    int l = strlen(str);
    int flag = 0;
    for (int i = 0; i < l;i++){
        if(str[i]!=str[l-i-1]){
            flag = 0;
            break;
        }else{
            flag = 1;
        }
    }
    return flag;
}

int main()
{
    char str[10];
    scanf("%s", str);
    int res = is_palindrome(str);
    if(res==1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}