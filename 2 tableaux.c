#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T3[28];
    int i,j,Tmp;

    for(i=0;i<28;i++){
             printf("saisire les notes %d ",i+1);
              scanf("%d",&T3[i]);
    }
    for(i=0;i<28;i++){
            for(j=i+1;j<28;j++){
    if(T3[i]>T3[j]){
            Tmp=T3[i];
            T3[i]=T3[j];
            T3[j]=Tmp;
    }
            }
    }
    printf("les elements du tableau par ordre croissant sont:\n ");
    for(i=0;i<28;i++){
       printf("%d \n",T3[i]);
    }
    return 0;
}
