#define <stdio.h>
#define <stdlib.h>

//Struct?

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
printf("Masukan pilihan: ");
scanf("%i", & pilihan);
fflush(stdin);
}
switch (pilihan) {
  case 1:
    //Fungsiadd;
    break;
  case 2:
    //Fungsidelete;
    break;
case 3:
    //Fungsisearch;
    break;
case 4:
//Fungsiminjem;
break;
case 5:
//Fungsipengembalian;
break;
  default:
    goto golongan;
  }

void tambah_buku(void) {
  //Fungsi nambahin buku
}

void delete_buku(void) {
   //Fungsi delete buku
}

