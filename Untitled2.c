#include <stdio.h>
int main(){
int n,x,i,somme=0,cpt=0;
float moy;
do{
    printf("saisir n entier");
    scanf("%d",&n);
}while(n<0);
for(i=0;i<n;i++){
    printf("saisir une valeur negatif");
    scanf("%d",&x);
}while(x<0);
printf("le nombre que vous avez saisie est:%d",x);
}
