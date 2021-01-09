void cari_buku(void) {
  system("cls");
  int ketemu = 0;
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t                          <<< Menu Cari Buku >>>                            ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi cari buku
 Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  char judulBuku[MAKS_JUDUL_BUKU];
  FILE * filePointer; //filepointer
  filePointer = fopen("Buku.bin", "rb");
  if(filePointer == NULL)
    {
        printf("\n\t\t\tFile belum terbuka\n");
        exit(0);
    }

  printf("\n\t\t\tMasukkan nama buku untuk dicari :");
  fflush(stdin);
  fgets(judulBuku,MAKS_JUDUL_BUKU, stdin);

  while(fread(&tambahBuku, sizeof(tambahBuku),1, filePointer)==1){
    if(strcmp(tambahBuku.judul_buku,judulBuku)== 0){
        ketemu++;
        printf("\n\t\t\t|> DATA BUKU <|");
        printf("\n\t\t\tKode Buku      : %u\n", tambahBuku.kode_buku);
        printf("\t\t\tJenis buku     : %s", tambahBuku.jenis_buku);
        printf("\t\t\tPenulis Buku   : %s", tambahBuku.penulis);
        printf("\t\t\tHalaman        : %d\n", tambahBuku.halaman);
        printf("\t\t\tHarga          : Rp%.3f\n", tambahBuku.harga);
    }
  }
    if(ketemu == 0){
        printf("\t\t\tBuku tidak ditemukan\n");
    }

  fclose(filePointer);
  printf("\t\t\tTekan tombol enter untuk kembali ke menu utama");
  getchar();
  system("cls");
}

//************************************************************//
//***                  Fungsi cari buku                    ***//
//============================================================//
// Nama Fungsi   : cari_buku                                  //
// Input Argumen : judulBuku                                  //
// Output Argumen: kode_buku, jenis_buku, penulis, halaman,   //
//                 harga atau "Buku tidak ditemukan"          //
// Deskripsi     : fungsi cari_buku digunakan untuk           //
//                 mencari buku dalam file Buku.bin           //
//                 berdasarkan judul yang diinputkan          //
//                                                            //
// Tgl: 15-12-2020                                            //
// I Komang Wikan Adnyana                                     //
//============================================================//
