/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - Overview of C and Pointer
 *   Hari dan Tanggal    : Selasa, 14 April 2026
 *   Nama (NIM)          : Abydzar Dzakyan Akbar
 *   Nama File           : soal1mod1.c
 *   Deskripsi           : Menggambarkan lampu sesuai dengan bilangannya
 * 
 */


 #include <stdio.h>
 #include <string.h>
  
 int main() {
    int n;
    printf("");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){

        if (i%2 == 0 && i%3 == 0){
            printf("BIRU\n");
        } else if(i%3==0){
            printf("MERAH\n");
        } else if(i%2==0){
            printf("KUNING\n");
        } else if(i>=10 && i%2==0){
            printf("HIJAU\n");
        } else{
            printf("%d\n", i);
        }

    }
  
 }
