#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
     char *p;
     char *q;
     int i,j;
     p=(char*)malloc(sizeof(char)*30);
     q=(char*)malloc(sizeof(char)*30);
     if(p==NULL || q==NULL){
        return 1;
     }
     printf("enter un chaine de caractere:");
     gets(p);
     for(i=strlen(p)-1; i>=0; i--){
       printf("%c", *(p+i));
     }
    return 0;
}

