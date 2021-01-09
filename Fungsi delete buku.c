void delete_buku(void) {
  system("cls");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                          <<< Menu Hapus Buku >>>                           ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi delete buku
  int ketemu = 0, buku = 0;
  FILE * filePointer;
  FILE * tempfP;
  Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  filePointer = fopen("Buku.bin", "rb");
  tempfP = fopen("temp.bin", "wb");

  printf("\n\t\t\tMasukan Kode Buku untuk didelete:");
  fflush(stdin);
  scanf(" %d", & buku);

  while (fread( & tambahBuku, sizeof(tambahBuku), 1, filePointer)) {
    if (tambahBuku.kode_buku != buku) {
      fwrite( & tambahBuku, sizeof(tambahBuku), 1, tempfP);
    } else {
      ketemu = 1;
    }
  }
  if (ketemu == 0) {
    printf("\n\t\t\tBuku berhasil dihapus");
    getchar();
  } else {
    printf("\n\t\t\tBuku berhasil dihapus");
    getchar();
  }
  fclose(filePointer);
  fclose(tempfP);
  remove("Buku.bin");
  rename("temp.bin", "Buku.bin");
  printf("\n\t\t\tTekan tombol enter untuk kembali ke menu utama");
  fflush(stdin);
  getchar();
  system("cls");
}

//************************************************************//
//***                  Fungsi hapus buku                   ***//
//============================================================//
// Nama Fungsi   : delete_buku                                //
// Input Argumen : kode_buku                                  //
// Output Argumen: "Buku berhasil dihapus"                    //
// Deskripsi     : fungsi delete_buku digunakan untuk         //
//                 menghapus buku di file berdasarkan         //
//                 kode buku                                  //
//                                                            //
// Tgl: 29-12-2020                                            //
// I Putu Dede Raditya Aditama                                //
//============================================================//
