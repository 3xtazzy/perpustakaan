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
  printf("\n\t\t\t                         <<< Menu Tambah Buku >>>                           ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi nambahin buku
  printf("\n\t\t\tMasukan detail buku dibawah...\n");
  printf("\t\t\tKode buku   :");
  fflush(stdin);
  scanf("%u", & tambahBuku.kode_buku);
  printf("\t\t\tNama buku   :");
  fflush(stdin);
  fgets(tambahBuku.judul_buku, MAKS_JUDUL_BUKU, stdin);
  printf("\t\t\tPenulis buku:");
  fflush(stdin);
  fgets(tambahBuku.penulis, MAKS_NAMA_PENULIS, stdin);
  printf("\t\t\tJenis Buku  :");
  fflush(stdin);
  fgets(tambahBuku.jenis_buku, MAKS_JENIS_BUKU, stdin);
  printf("\t\t\tHalaman     :");
  scanf("%u", & tambahBuku.halaman);
  printf("\t\t\tHarga       :");
  scanf("%f", & tambahBuku.harga);

  //Write ke file
  fwrite( & tambahBuku, sizeof(tambahBuku), 1, filePointer);
  fclose(filePointer);
  printf("\n\t\t\tBuku sudah ditambahkan ke database\n");
  printf("\n\t\t\tTekan tombol enter untuk kembali ke menu utama");
  fflush(stdin);
  getchar();
  system("cls");
}

//************************************************************//
//***                  Fungsi tambah buku                  ***//
//============================================================//
// Nama Fungsi   : tambah_buku                                //
// Input Argumen : kode_buku, judul_buku, penulis, jenis_buku //
//                 halaman, harga                             //
// Output Argumen: "Buku sudah ditambahkan ke database"       //
// Deskripsi     : fungsi tambah_buku digunakan untuk         //
//                 menambahkan buku ke perpustakaan dengan    //
//                 memasukkan beberapa data buku              //
//                                                            //
// Tgl: 14-12-2020                                            //
// I Putu Dede Raditya Aditama                                //
//============================================================//
