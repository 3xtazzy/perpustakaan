void pengembalian(void){
  system("cls");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                         <<< Menu Pengembalian >>>                          ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi menghapus buku yang dikembalikan
  int ketemu = 1, bukup = 0;
  FILE * filePointer;
  FILE * tempfP;
  Bukup peminjaman = {
    0
  }; //Memanggil ke struct ke fungsi
  filePointer = fopen("Bukup.bin", "rb");
  tempfP = fopen("temp.bin", "wb");

  printf("\n\t\t\tMasukan Kode Buku yang sudah dikembalikan:");
  fflush(stdin);
  scanf(" %d", & bukup);

  while (fread( & peminjaman, sizeof(peminjaman), 1, filePointer)) {
    if (peminjaman.kodep_buku != bukup) {
      fwrite( & peminjaman, sizeof(peminjaman), 1, tempfP);
    } else {
      ketemu = 0;
    }
  }
  if (ketemu != '1') {
    printf("\n\t\t\tBuku telah dikembalikan");
    getchar();
  } else {
    printf("\n\t\t\tBuku tidak ditemukan");
    getchar();
  }
  fclose(filePointer);
  fclose(tempfP);
  remove("Bukup.bin");
  rename("temp.bin", "Bukup.bin");
  printf("\n\t\t\tTekan tombol enter untuk kembali ke menu utama");
  fflush(stdin);
  getchar();
  system("cls");
}

//************************************************************//
//***                  Fungsi Pengembalian                 ***//
//============================================================//
// Nama Fungsi   : pengembalian                               //
// Input Argumen : kode buku                                  //
// Output Argumen: "Buku telah dikembalikan" atau "Buku tidak //
//                 ditemukan"                                 //
// Deskripsi     : fungsi pengembalian digunakan untuk        //
//                 mengembalikan buku yang telah              //
//                 dipinjam                                   //
//                                                            //
// Tgl: 29-12-2020                                            //
// I Ketut Krishna Mahendra Putra                             //
//============================================================//
