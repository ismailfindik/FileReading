#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){

  FILE *dosya=fopen("matris.txt","r");  
   int dizi[3][3];
   int top1,i,j;
   int cay=1;
   int kahve=2;
   int kola=3;


    if((dosya= fopen("matris.txt", "r"))!= NULL){
           
      for(i=0;i<3;i++){
          
          for(j=0;j<3;j++){
              
              fscanf(dosya,"%d\n",&dizi[i][j]);
			  }    
  }
fclose(dosya);
}

     if((dosya= fopen("matris.txt", "a"))!= NULL){
           
      for(i=0;i<3;i++){
       	
		   int top1= (cay*dizi[i][0])+ (kahve*dizi[i][1])+ (kola*dizi[i][2]);
              
			   fprintf(dosya," % d.masanýn hesabý= %d TL dir. Lütfen kasaya ödemenizi yapýnýz:)\n",i+1,top1);    
      }
}
fclose(dosya);
getch();
return 0;
}
