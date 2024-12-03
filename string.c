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

int WordCount(char *s){
    int wcount = 1;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]==' ' && s[i-1]!=' ')
            wcount++;
    }
    return wcount;
}

void Uppercase(char *s){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]<='z' && s[i]>='a')
            s[i] = s[i]-32;
    }
}

void Lowercase(char *s){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]<='Z' && s[i]>='A')
            s[i] = s[i]+32;
    }
}
int main(){
    char s[] = "Hello, World!";
    // printf("%d",Uppercase(s));
    Lowercase(s);
    puts(s);
    return 0;
}