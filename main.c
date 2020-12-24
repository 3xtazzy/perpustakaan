#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define MAKS_JENIS_BUKU 50
#define MAKS_JUDUL_BUKU 50
#define MAKS_NAMA_PENULIS 50
#define MAKS_USER 20
#define MAKS_PASS 20

//Struct?
typedef struct Buku {
  int kode_buku;
  char jenis_buku[MAKS_JENIS_BUKU];
  char judul_buku[MAKS_JUDUL_BUKU];
  char penulis[MAKS_NAMA_PENULIS];
  int halaman;
  float harga;
} Buku;

void login(void) {
	int j;
        char a[25] = " <<< LOGIN >>> ";
	system("color F2");
	char user[MAKS_USER] = "apausernya";
	char pass[MAKS_PASS] = "apapassnya";
	char inputUser[MAKS_USER], inputPass[MAKS_PASS];
	int result;
	printf("\n\t\t\t===========================================================================");
	printf("\n\t\t\t");
	for(j=0;j<30;j++){
        Sleep(50);
        printf("*");
	}
	for(j=0;j<15;j++){
        Sleep(50);
        printf("%c", a[j]);
	}
	for(j=0;j<30;j++){
        Sleep(50);
        printf("*");
	}
        printf("\n\t\t\t===========================================================================");
        printf("\n");
        printf("\n");
	do {
	printf("Masukan Username : ");
	    scanf("%s", inputUser);
	    printf("Masukan Password : ");
	    scanf("%s", inputPass);
	    if(strcmp(user,inputUser)==0 && strcmp(pass, inputPass)==0){
	    	result = 0;
	        printf("Akses diterima. Selamat Datang\n");
	        system("pause");
	        menu();
	    }
	    else{
	    	 result = 1;
	         printf("Username dan Password tidak match\n");
	         system("cls");
	    }
	} while (result != 0);
}
void menu(void) {
  int pilihan;
  do {
  system("cls");
  system("color B0");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                     <<< Selamat Berkunjung :D >>>                          ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  scanf("%*[^\n]");
  fflush(stdin);
  printf("\nMenu program \n");
  printf("1. Menambahkan buku\n");
  printf("2. Menghapus buku\n");
  printf("3. Mencari buku\n");
  printf("4. Melihat semua buku\n");
  printf("5. Peminjaman\n");
  printf("6. Pengembalian\n");
  printf("7. Kembali\n");
  printf("Masukan pilihan: ");
  scanf("%i", & pilihan);
  fflush(stdin);

  switch (pilihan) {
  case 1:
    tambah_buku();
    break;
  case 2:
    delete_buku();
    break;
  case 3:
    cari_buku();
    break;
  case 4:
    lihat_buku();
    break;
  case 5:
    peminjaman();
    break;
  case 6:
    pengembalian();
    break;
  case 7:
    exit(0);
    break;
  default:
    printf("Masukan input yang benar!");
  }
} while (pilihan != 7);
}
void tambah_buku(void) {
  Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  FILE * filePointer; //filepointer
  filePointer = fopen("Buku.bin", "ab+");

  system("cls");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                        <<< Add New Book Menu >>>                           ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi nambahin buku
  printf("\nMasukan detail buku dibawah...\n");
  printf("Kode buku   : ");
  fflush(stdin);
  scanf("%u", & tambahBuku.kode_buku);
  printf("Nama buku   : ");
  fflush(stdin);
  fgets(tambahBuku.judul_buku, MAKS_JUDUL_BUKU, stdin);
  printf("Penulis buku: ");
  fflush(stdin);
  fgets(tambahBuku.penulis, MAKS_NAMA_PENULIS, stdin);
  printf("Jenis Buku  : ");
  fflush(stdin);
  fgets(tambahBuku.jenis_buku, MAKS_JENIS_BUKU, stdin);
  printf("Halaman     : ");
  scanf("%u", & tambahBuku.halaman);
  printf("Harga       : ");
  scanf("%f", & tambahBuku.harga);

  //Validasi input data

  //Write ke file
  fwrite( & tambahBuku, sizeof(tambahBuku), 1, filePointer);
  fclose(filePointer);
  system("cls");
}
void delete_buku(void) {
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                         <<< Delete Book Menu >>>                           ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi delete buku
  printf("Test");
}
void cari_buku(void) {
  system("cls");
  int ketemu = 0;
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                      <<< Search For Book Menu >>>                          ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi cari buku
  Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  char judulBuku[MAKS_JUDUL_BUKU];
  FILE * filePointer; //filepointer
  filePointer = fopen("Buku.bin", "rb");
  printf("\n");
  printf("\n\t\t\tMasukkan nama buku untuk dicari : ");
  fflush(stdin);
  fgets(judulBuku,MAKS_JUDUL_BUKU, stdin);

  while(fread(&tambahBuku, sizeof(tambahBuku),1, filePointer)){
    if(!strcmp(tambahBuku.judul_buku,judulBuku)){
        ketemu = 1;
        break;
    }
  }
  if(ketemu == 0){
    printf("\n\t\t\tKode Buku = %u", tambahBuku.kode_buku);
    printf("\n\t\t\tNama Buku = %s", tambahBuku.judul_buku);
    printf("\t\t\tPenulis = %s", tambahBuku.penulis);
    printf("\t\t\tJenis Buku = %s", tambahBuku.jenis_buku);
    printf("\t\t\tHalaman = %u", tambahBuku.halaman);
    printf("\n\t\t\tHarga = Rp%.3f", tambahBuku.harga);
  }else{
    printf("\n\t\t\tBuku tidak ditemukan\n");
  }
  fclose(filePointer);
  printf("\n\t\t\tTekan tombol enter untuk kembali ke menu utama");
  getchar();
  system("cls");
}
void peminjaman(void) {
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                         <<< Menu Peminjaman >>>                            ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi peminjaman
  printf("Test");
}
void pengembalian(void) {
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                        <<< Menu Pengembalian >>>                           ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi pengembalian
  printf("Test");
}
void lihat_buku(void) {
  system("cls");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                        <<< Menu Lihat Buku >>>                           ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
	
  //Fungsi lihat buku
  int ketemu = 0;
  char judulBuku[MAKS_JUDUL_BUKU] = {0};
  Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  FILE *filePointer;
  filePointer = fopen("Buku.bin","rb");
  while(fread (&tambahBuku, sizeof(tambahBuku), 1, filePointer)){
      printf("\n\t\t\tKode Buku = %u", tambahBuku.kode_buku);
      printf("\n\t\t\tNama Buku = %s", tambahBuku.judul_buku);
      printf("\t\t\tPenulis = %s", tambahBuku.penulis);
      printf("\t\t\tJenis Buku = %s", tambahBuku.jenis_buku);
      printf("\t\t\tHalaman = %u", tambahBuku.halaman);
      printf("\n\t\t\tHarga = Rp%.3f", tambahBuku.harga);
      printf("\n\t\t\t");
      ketemu = 1;
   }
  fclose(filePointer);
  if(!ketemu){
      printf("\n\t\t\tNo Record");
  }
  printf("\n\n\t\t\tPress enter to go to main menu.....");
  fflush(stdin);
  getchar();
  system("cls");
}
int main(void) {
  //Tes
  login();
  return 0;
}
