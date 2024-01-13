#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int valeur_position(int T[],int n,int valeur){
     int pos=0;
   for(int i=0;i<n;i++){
    if(T[i]==valeur){
        pos=i;
        break;
        return pos;
    }
   }
   return -1;
 }
int main() {
    float T[30];
    float valeur;
    int i;
    int nb;
    int pos;

    printf("enter le nombre d'elemet:");
    scanf("%d",&nb);
    for(i=0;i<nb;i++){
        printf("T[%d]:",i);
        scanf("%f",&T[i]);

    }
    printf("enter la valeur:");
    scanf("%f",&valeur);
    pos=valeur_position(T,nb,valeur);
    printf("la position est:%d",pos);
    return 0;
}
