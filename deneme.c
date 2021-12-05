/* #include <stdio.h>
#include <conio.h>
#include <stdlib.h> */
 /* BİR DİZİDEKİ ELEMANLARIN DEĞERİ KADAR YILDIZ BASMA */
/*  int main()
{
int i;    
int grafik[10] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

    for (i =0; i < 10; i++) {
        printf("%4d. eleman  degeri : %5d -->", i , grafik[i]);
  
    for(int j = 0; j < grafik[i]; j++) {
        printf("*");
    }
    printf("\n");
    }
return 0;
} 
 /* LİNEER SEARCH */
 /* int main () {
    int dizi[100], i, aranan_bilgi;
        printf("Aranacak bilgiyi klavyeden giriniz: ");
        scanf("%d", &aranan_bilgi);
    for(i=0; i < 100; i++) {
        dizi[i] = i;
        dizi[i] = dizi[i] * 2;
        if(aranan_bilgi == dizi[i]) {
            printf("Aranan bilgi %d --> %d. indiste bulundu: ", aranan_bilgi, i);
        }
       
        

    }

}  */ 
 /* 3 OGRENCİNİN NOT GİRİŞİ HESAPLANMASI KODU */
 /* int ogr1Not[3], ogr2Not[3], ogr3Not[3], ogr1Ort, ogr2Ort, ogr3Ort;
    for(int i = 0; i < 3; i++) {
        printf("%d. ogrencinin %d. notu :" ,1, i+1);
        scanf("%d", &ogr1Not[i]);
        printf("\n");
        printf("%d. ogrencinin %d. notu :" ,2, i+1);
        scanf("%d", &ogr2Not[i]);
        printf("\n");
        printf("%d. ogrencinin %d. notu :" ,3, i+1);
        scanf("%d", &ogr3Not[i]);
        printf("\n");
    }
     int cikti = ogr1Not[0] + ogr2Not[1] + ogr3Not[2]; 
    printf("Ekran ciktisi : %d",ogr1Not[0] + ogr2Not[1] + ogr3Not[2]);
    ogr1Ort = (ogr1Not[0] + ogr1Not[1] + ogr1Not[2]) / 3;
    ogr2Ort = (ogr2Not[0] + ogr2Not[1] + ogr2Not[2]) / 3;
    ogr3Ort = (ogr3Not[0] + ogr3Not[1] + ogr3Not[2]) / 3;
        printf("\n");
            printf("\n");
           printf("1. sinav ort %d\n" , ogr1Ort);
           printf("2. sinav ort %d\n" , ogr2Ort);
           printf("3. sinav ort %d\n" , ogr3Ort);
    return 0;
}  */
 /* 3 OGRENCİNİN 3 SINAV NOTUNUN HESAPLANMASI KODU MATRİS KULLANARAK */
/* int main () {
    int ogrNotlar[3][3];
    for(int i =0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d. ogrencinin %d. notunu giriniz : " ,(i+1), (j+1));
            scanf("%d", &ogrNotlar[i][j]);
        }
    }
        printf("Ekran ciktisi %d\n", ogrNotlar[0][0] + ogrNotlar[1][1] + ogrNotlar[2][2]);
    
        for(int k = 0; k < 3; k++) {
            printf("%d. sınavın not ortalaması: %d\n" ,1 , ogrNotlar[0][i] + ogr);
    return 0;
}
 

 int main () {
    char dizi[50];
    printf("Lutfen karakterleri yazdiriniz: ");
    gets(dizi);
}  */
 /* GİRİLEN CÜMLEYİ TERSTEN YAZDIRMA */
/*  int main () {
    char cumle[100];
    int i;
    printf("Lütfen cümle giriniz: ");
    gets(cumle);

    for(i = strlen(cumle); i >=0; i-- ) {
        printf("%c\n", cumle[i]);
    }

}  */
 /* GİRİLİEN METİNDE ARANAN HARFİ VE KACINCI İNDİSTE OLDUGUNU BULAN KOD */
 /* int main() {
 char dizi[100];
    char aranacak_harf;
    printf("Lutfen metni giriniz: ");
    gets(dizi);
    printf("\n");
    printf("\n");

printf("Lufen aranacak harfi giriniz: -->");
scanf("%c", &aranacak_harf);
int bulunanharfsayisi = 0;
for(int i = 0; i < strlen(dizi); i++) {
    if(aranacak_harf == dizi[i]) {
        bulunanharfsayisi++;
        printf("Cumledeki pozisyounu :%d\n" ,i );
}
}
        printf("Bu kadar harf bulunmustur: %d\n", bulunanharfsayisi);
    } 
 */
/* 
int main()
{
    int i, n, A[100], B[100], C[100];
    printf("Dizinin eleman sayisi: ");
    scanf("%d", &n);
    printf("\n");

    for(i=0; i<n; i++){
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("B[%d]= ", i);
        scanf("%d", &B[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        C[i]=A[i]+B[i];
        printf("C[%d]= %d\n", i, C[i]);
    }
    return 0;
} */


 