#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
     char *p;
     int a=0;
     //char *q;
     int i,j;
     p=(char*)malloc(sizeof(char)*30);
     //q=(char*)malloc(sizeof(char)*30);
     if(p==NULL){
        return 1;
     }
     printf("enter un chaine de caractere:");
     gets(p);
     for(i=0;i<(strlen(p)/2);i++){
        if(p[i]!=p[strlen(p)-i-1]){
            a=1;
        }
     }
     if(a==0){
        printf("le mot est plaindorme");
     }
     else{
        printf("le mot n'est pas un plaindorme");
     }
    return 0;
}

