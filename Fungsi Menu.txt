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

    int b;
    char j_menu[50] = "|>>> MENU PROGRAM <<<|";
    char j_pilihan[25] = "Masukan Pilihan : ";
    printf("\n\n\t");
    for (b = 0; b < 22; b++) {
      Sleep(50);
      printf("%c", j_menu[b]);

    }
    printf("\n\n");
    printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t\xB2 1. Menambahkan buku    \xB2\n");
    printf("\t\xB2 2. Menghapus buku      \xB2\n");
    printf("\t\xB2 3. Mencari buku        \xB2\n");
    printf("\t\xB2 4. Melihat semua buku  \xB2\n");
    printf("\t\xB2 5. Peminjaman          \xB2\n");
    printf("\t\xB2 6. Buku yang dipinjam  \xB2\n");
    printf("\t\xB2 7. Pengembalian        \xB2\n");
    printf("\t\xB2 8. Kembali             \xB2\n");
    printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t");
    for (b = 0; b < 18; b++) {
      Sleep(50);
      printf("%c", j_pilihan[b]);

    }
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
      lihatp_buku();
      break;
    case 7:
      pengembalian();
      break;
    case 8:
      exit(0);
      break;
    default:
      printf("Masukan input yang benar!");
    }
  } while (pilihan != 8);
}

//*************************************************************************************************//
//***                                         Fungsi Menu                                       ***//
//=================================================================================================//
// Nama Fungsi   : menu                                                                            //
// Input Argumen : void                                                                            //
// Output Argumen: void                                                                            //
// Deskripsi     : fungsi menu digunakan untuk menampilkan                                         //
//                 beberapa pilihan menu yang dapat dipilih                                        //
//                 oleh user                                                                       //
//                                     Rev. 2                       Rev. 1                         //
// Tgl: 14-12-2020                     Tgl: 24-12-2020              Tgl: 13-12-2020                //
// I Putu Dede Raditya Aditama         I Komang Wikan Adnyana       I Ketut Krishna Mahendra Putra //
//=================================================================================================//
