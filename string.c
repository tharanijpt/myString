#include<stdio.h>

int Length(char *s){
    int i=0;
    for(;s[i]!='\0';i++);
    return i;
}

int VowelCount(char *s){
    int vcount = 0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            vcount++;
    }
    return vcount;
}

int ConsonantCount(char *s){
int ccount = 0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]<='z' && s[i]>='a') || s[i]<='Z' && s[i]>='A'){
            if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
                ccount++;
        }
    }
    return ccount;
}

int main(){
    char *s = "Hello, World!";
    printf("%d",ConsonantCount(s));
    return 0;
}