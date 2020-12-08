#include <stdio.h>

#include <stdlib.h>

#define MAKS_JENIS_BUKU 50
#define MAKS_JUDUL_BUKU 50
#define MAKS_NAMA_PENULIS 50

//Deklarasi fungsi untuk meminimalisir error
void tambah_buku(void);
void delete_buku(void);
void cari_buku(void);
void peminjaman(void);
void pengembalian(void);

//Struct?
typedef struct Buku {
  unsigned int kode_buku;
  char jenis_buku[MAKS_JENIS_BUKU];
  char judul_buku[MAKS_JUDUL_BUKU];
  char penulis[MAKS_NAMA_PENULIS];
  unsigned int halaman;
  unsigned int harga;
} Buku;

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
  printf("Masukkan judul buku   : \n");
  scanf ("%[^\n]%*c", judul_buku);
  printf("Masukkan jenis buku   : \n");
  scanf ("%[^\n]%*c", jenis_buku);
  printf("Masukkan nomor buku   : \n");
  scanf ("%d", &no_buku);
  printf("Masukkan penulis buku : \n");
  scanf ("%[^\n]%*c", penulis);
  
  //Validasi input data
  
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
