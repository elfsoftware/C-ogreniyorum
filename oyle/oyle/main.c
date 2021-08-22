//
//  main.c
//  oyle
//
//  Created by Kübra Gönülal on 22.08.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int sayi;
    int toplam=0;
    int k;
    int ilksayi;
    printf("Bir sayi girin:");
    scanf("%d",&sayi);
    ilksayi=sayi;
    while (sayi>0) {
        k=sayi%10;
        sayi=sayi/10;
        toplam=toplam+k;
    }
    

    printf("%d sayisinin rakamlari toplami : %d", ilksayi, toplam);

    return 0;
    
}


