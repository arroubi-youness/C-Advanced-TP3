#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int** create_matrix_pointer(){
    int i,j;
    int **T;
   T=(int**)malloc(sizeof(int*)*3);
   for(i=0;i<3;i++){
     T[i]=(int*)malloc(sizeof(int)*4);
   }
   for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("T[%d][%d]:",i,j);
        scanf("%d",&T[i][j]);
    }
   }
   return T;
}
int sommee(int**P){
int i,j;
int som=0;
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        som=som+ (P[i][j]);
    }
}
return som;
}
int main() {
    int T[3][4];
    int**P;
    int i,j;
    int somm=0;
    int somme=0;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("T[%d][%d]:",i,j);
            scanf("%d",&T[i][j]);
        }
    }
   for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            somme=somme+T[i][j];

        }}
        printf("la somme :%d\n",somme);
        P = create_matrix_pointer();
        printf("la somme avec pointer:%d",sommee);
    return 0;
}

