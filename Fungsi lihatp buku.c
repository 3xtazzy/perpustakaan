void lihatp_buku(void){
  system("cls");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                      <<< Menu Lihat Buku Dipinjam >>>                      ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi lihat buku yang dipinjam
  int ketemu = 0;
  char judulp_buku[MAKS_JUDUL_BUKU] = {
    0
  };
  Bukup peminjaman = {
    0
  }; //Memanggil ke struct ke fungsi
  FILE * filePointer;
  filePointer = fopen("Bukup.bin", "rb");
  while (fread( & peminjaman, sizeof(peminjaman), 1, filePointer)) {
    printf("\n\t\t\tKode Buku        = %u", peminjaman.kodep_buku);
    printf("\n\t\t\tNama Buku        = %s", peminjaman.judulp_buku);
    printf("\t\t\tBatas Peminjaman = %s", peminjaman.batas);
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
//***                  Fungsi lihatp buku                  ***//
//============================================================//
// Nama Fungsi   : lihatp_buku                                //
// Input Argumen : -                                          //
// Output Argumen: kode_buku, judul_buku, jenis_buku, penulis,//
//                 halaman, harga                             //
// Deskripsi     : fungsi lihatp_buku digunakan untuk         //
//                 melihat keseluruhan buku yang              //
//                 dipinjam                                   //
//                                                            //
// Tgl: 29-12-2020                                            //
// I Ketut Krishna Mahendra Putra                             //
//============================================================//
