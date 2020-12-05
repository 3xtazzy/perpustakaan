#include <stdio.h>

#include <stdlib.h>

//Struct?
typedef struct Buku {
  int no_buku;
  char jenis_buku[50]
  char judul_buku[50];
  int halaman;
  float harga;
}
Buku;

int main(void) {
  //Tes
}

void menu(void) {
  int pilihan;
  menu:
    printf("Program Perpustakaan Universitas Udayana");
  scanf("%*[^\n]");
  fflush(stdin);

  printf("Menu program \n");
  printf("1. Add new book\n");
  printf("2. Delete book\n");
  printf("3. Search for book\n");
  printf("4. Peminjaman\n");
  printf("5. Pengembalian\n");
  printf("6. Exit\n");
  printf("Masukan pilihan: ");
  scanf("%i", & pilihan);
  fflush(stdin);
}
switch (pilihan) {
case 1:
  //tambah_buku();
  break;
case 2:
  //delete_buku();
  break;
case 3:
  //cari_buku();
  break;
case 4:
  //peminjaman();
  break;
case 5:
  //pengembalian();
  break;
case 6:
  exit(0);
  break;
default:
  goto menu;
}

void tambah_buku(void) {
  //Fungsi nambahin buku
}

void delete_buku(void) {
  //Fungsi delete buku
}

void cari_buku(void) {
  //Fungsi cari buku
}

void peminjaman(void) {
  //Fungsi peminjaman
}

void pengembalian(void) {
  //Fungsi pengembalian
}
