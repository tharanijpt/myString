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
void ToggleCase(char *s){
    
}

void TitleCase(char *s){

}

void Reverse(char *s){
    int i=0,j=0;
    char t;
    for(;s[j]!='\0';j++);
    j--;
    for(;i<j;i++,j--){
        t = s[i];
        s[i]=s[j];
        s[j]=t;
    }
}

void Compare(char *s1,char *s2){
    int i=0,j=0;
    for(;s1[i]!='\0' && s2[j]!='\0';i++,j++){
        if(s1[i]!=s2[j]){
            if(s1[i]<s2[j])
                printf("Smaller");
            else
                printf("Larger");
            return;
        }
    }
    printf("Equal");
};
void isPalindrome();

void prem(char s[],int k){
    static int a[10] = {0};
    static char res[10];
    int i;

    if(s[k]=='\0'){
        res[k]=='\0';
        puts(res);
    }

    for(int i=0;s[i]!='\0';i++){
        if(a[i]==0){
            res[k] = s[i];
            a[i]=1;
            prem(s,k+1);
            a[i]=0;
        }
    }
    
}

int main(){
    // char s[] = "Hello, World!";
    // printf("%d",Uppercase(s));
    // Reverse(s);
    // puts(s);
    char b[] = "Hello, World !p";
    // Compare(s,b);
    char s[] = "ABCD";
    prem(s,0);
    return 0;
}