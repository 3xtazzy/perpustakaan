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
  char judulBuku[MAKS_JUDUL_BUKU] = {
    0
  };
  Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  FILE * filePointer;
  filePointer = fopen("Buku.bin", "rb");
  while (fread( & tambahBuku, sizeof(tambahBuku), 1, filePointer)) {
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
  if (!ketemu) {
    printf("\n\t\t\tNo Record");
  }
  printf("\n\t\t\tTekan tombol enter untuk kembali ke menu utama");
  fflush(stdin);
  getchar();
  system("cls");
}

//************************************************************//
//***                  Fungsi lihat buku                   ***//
//============================================================//
// Nama Fungsi   : lihat_buku                                 //
// Input Argumen : -                                          //
// Output Argumen: kode_buku, judul_buku, jenis_buku, penulis,//
//                 halaman, harga                             //
// Deskripsi     : fungsi lihat_buku digunakan untuk          //
//                 melihat keseluruhan buku dalam file        //
//                 Buku.bin                                   //
//                                                            //
// Tgl: 15-12-2020                                            //
// I Ketut Krishna Mahendra Putra                             //
//============================================================//
