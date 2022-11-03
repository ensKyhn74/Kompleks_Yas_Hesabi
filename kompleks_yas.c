#include <stdio.h>
// klavyeden girilen şimdiki tarih ve doğum tarihi değerlerine göre,
// yaş (gün ay yıl olarak) ekrana yazdırılır

int main() 

{
 
 int gun,ay,yil;  // şimdiki tarih	
 
 int dGun,dAy,dYil; // doğum tarihi
 	
 int sonucGun,sonucAy,sonucYil; // aranılan bilgi	
 
 printf("simdiki tarihi gun/ay/yil olarak girin: ");
 scanf("%d %d %d",&gun,&ay,&yil);
 
 printf("dogum tarihinizi gun/ay/yil olarak girin: ");	
 scanf("%d %d %d",&dGun,&dAy,&dYil);
 
  if(dGun > gun)  // sonucun negatif çıkmaması için blok içindeki işlemler yapılır.
  {
   gun = gun + 30;

   ay = ay - 1;    
  }
    

  if(dAy > ay) // sonucun negatif çıkmaması için blok içindeki işlemler yapılır.
  {
   ay = ay + 12;

   yil = yil - 1;   
  }

   sonucGun = gun - dGun;
   sonucAy = ay - dAy;
   sonucYil = yil - dYil;	
    
   printf("%d gun %d ay %d yil",sonucGun,sonucAy,sonucYil); 
  
   return 0;

}
 //  DETAYLI ANLATIM
     /* güncel tarih 10.04.2022 olsun,kullanıcının doğduğu tarih 16.11.1990 olsun
             
             21.satırdaki if'e girdi
             16 > 10 -> 10 + 30 = 40 (gün değişkeninin yeni değeri: 40)
                        4 - 1 = 3   (ay değişkeninin yeni değeri: 3)
           
             29.satırdaki if'e girdi
             11 > 4 -> 3 + 12 = 15  (ay değişkeninin yeni değeri: 15)
                    2022 - 1 = 2021 (yil değişkeninin yeni değeri: 2021)
             
            sonucGun = 40 - 16 = 24
            sonucAy = 15 - 11 = 4 
            sonucYil = 2021 - 1990 = 31
    */
