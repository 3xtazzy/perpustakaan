void peminjaman(void){
  Bukup peminjaman = {
    0
  }; //Memanggil ke struct ke fungsi
  Buku tambahBuku = {
	0
  }; //Memanggil struct buku
  FILE * filePointer; //filepointer
  FILE * fPBuku;
  filePointer = fopen("Bukup.bin", "ab+");
  fPBuku = fopen("Buku.bin", "rb");
  int ketemu = 0;
  char judulBuku[MAKS_JUDUL_BUKU];

  system("cls");
  printf("\t\t\t===========================================================================");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t------------   | PROGRAM PERPUSTAKAAN UNIVERSITAS UDAYANA  |   ------------ ");
  printf("\n\t\t\t------------                                                   ------------ ");
  printf("\n\t\t\t=========================================================================== ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");
  printf("\n\t\t\t             		      <<< Menu Peminjaman >>>         	              ");
  printf("\n\t\t\t--------------------------------------------------------------------------- ");

  //Fungsi nambahin buku
  printf("\n\t\t\tMasukan detail peminjaman dibawah...\n");

      printf("\t\t\tNama peminjam :");
      fgets(peminjaman.nama_peminjam, MAKS_NAMA_PEMINJAM, stdin);
      printf("\t\t\tNIM peminjam:");
      scanf("%d", & peminjaman.nim);
      printf("\t\t\tKode buku   :");
      fflush(stdin);
      scanf("%u", & peminjaman.kodep_buku);
      printf("\t\t\tJudul buku  :");
      fflush(stdin);
      fgets(peminjaman.judulp_buku, MAKS_JUDUL_BUKU, stdin);
      printf("\t\t\tBatas peminjaman (Tanggal/Bulan/Tahun) :");
      fflush(stdin);
      fgets(peminjaman.batas, MAKS_PEMINJAMAN, stdin);

      //Write ke file
      fwrite( & peminjaman, sizeof(peminjaman), 1, filePointer);

  fclose(filePointer);
  fclose(fPBuku);
  printf("\n\t\t\tDetail peminjaman sudah ditambahkan ke database peminjaman\n");
  printf("\n\t\t\tTekan tombol enter untuk kembali ke menu utama");
  fflush(stdin);
  getchar();
  system("cls");
}


//*****************************************************************//
//***                       Fungsi Peminjaman                   ***//
//=================================================================//
// Nama Fungsi   : peminjaman                                      //
// Input Argumen : nama peminjam, NIM, kode buku, judul buku,      //
//                 batas peminjaman                                //
// Output Argumen: Detail peminjaman sudah ditambahkan             //
//                 ke database peminjaman                          //
// Deskripsi     : fungsi peminjaman digunakan untuk mencatat      //
//                 data dari peminjam buku                         //
//                                                                 //
//                                     Rev. 1                      //
// Tgl: 15-12-2020                     Tgl: 24-12-2020             //
// I Ketut Krishna Mahendra Putra      I Putu Dede Raditya Aditama //
//=================================================================//
