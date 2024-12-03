#include<stdio.h>

int Length(char *s){
    int i=0;
    for(;s[i]!='\0';i++);
    return i;
}

int main(){
    char *s = "Hello, World!";
    printf("%d",Length(s));
    return 0;
}