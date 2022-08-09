#include <stdio.h>
#include <stdlib.h>

int main()

{
float T1	[13],T2[15] ,max ,min;
int i,j,x,y ;
printf(" veuillez entrer les notes du classe 1 \n" ) ;
for(i=0 ;i<13 ;i++){
printf("note%d:\n " ,i+1);
scanf("%f",&T1[i]);
}
for(i=0;i<13;i++){
                 printf("les notes du classe1:\n " ) ;
                 printf("note%d :%f\n " ,i+1,T1[i]);
}

max=0;
max=T1[0];
for(i=0;i<13;i++){
  if(max < T1[i])
    max=T1[i];
}
printf("le maximum des notes du classe 1 est %.2f :\n",max);


min=0 ;
for(i=0 ;i<13 ;i++){
if(min>T1[i])
      min=T1[i];
}
printf("le minimum des notes du classe 1 est %.2f :\n",min);

x=0 ;
for (i=0;i<13;i++){
if (T1[i]>=10)
x=x+1;
}
 printf("le nombre des etudiant ayont une note superieure ou egale a 10 est:%d\n",x);



printf(" veuillez entrer les notes du classe 2 \n" );
for(i=0	;i<15 ;i++){
printf(" note %d:\n ",i+1) ;
scanf("%f",&T2[i]);
}
for(i=0;i<15;i++){
          printf("les notes du classe 2:\n");
          printf(" note%d :%.	2f\n ",i+1,T2[i]) ;
}
max=0;
max=T2[0];
for(i=0;i<15;i++){

if(max<T2[i])
max=T2[i];
}
printf("le maximum des notes du classe 2	est%.2f:\n ",max) ;


min=0 ;
min=T2[0] ;
for(i=0 ;i<15 ;i++){
if(min>T2[i])
   min=T2[i];
}
printf("le minimum des notes du classe 2 est%f:\n ",min) ;


y=0 ;
for(i=0 ;i<15 ;i++){
if(T2[i]>=10)
y=y+1;
}
printf("le nombre des etudiants ayont une note superieur ou egale a 10est :%d\n ",y);

    return 0;
}








