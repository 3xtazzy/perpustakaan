void login(void) {
  int j;
  char a[25] = " <<< LOGIN >>> ";
  system("color F2");
  char user[MAKS_USER] = "admin";
  char pass[MAKS_PASS] = "apapassnya";
  char inputUser[MAKS_USER], inputPass[MAKS_PASS];
  int result;
  printf("\n\t\t\t==========================================================================="); 
  printf("\n\t\t\t");
  for (j = 0; j < 30; j++) {
    Sleep(50);
    printf("*");
  }
  for (j = 0; j < 15; j++) {
    Sleep(50);
    printf("%c", a[j]);
  }
  for (j = 0; j < 30; j++) {
    Sleep(50);
    printf("*");
  }
  printf("\n\t\t\t===========================================================================");
  printf("\n");
  printf("\n");
  do {
    printf("\tMasukan Username : ");
    scanf("%s", inputUser);
    printf("\tMasukan Password : ");
    scanf("%s", inputPass);
    if (strcmp(user, inputUser) == 0 && strcmp(pass, inputPass) == 0) {
      result = 0;
      printf("\n\tAkses diterima. Selamat Datang\n");
      system("pause");
      menu();
    } else {
      result = 1;
      printf("Username dan Password tidak match\n");
      system("cls");
    }
  } while (result != 0);
}

//************************************************************//
//***                      Fungsi Login                    ***//
//============================================================//
// Nama Fungsi   : login                                      //
// Input Argumen : char inputUser[MAKS_USER]                  //
//               : char inputPass[MAKS_PASS]                  //
// Output Argumen: Akses diterima atau                        //
//                 Username dan Password tidak                //
//                 match                                      //
// Deskripsi     : Login digunakan sebagai awal               //
//                 untuk menentukan user dapat                //
//                 masuk ke menu utama                        //
//                                     Rev. 1                 //
// Tgl: 15-12-2020                     Tgl: 24-12-2020        //
// I Putu Dede Raditya Aditama         I Komang Wikan Adnyana //
//============================================================//
