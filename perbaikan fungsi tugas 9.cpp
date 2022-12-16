/* Penggunaan Call By Value */
/* Program Tambah Nilai */
/* ------------------------ */
#termasuk < iostream>
menggunakan namespace std;

int tambah(int m, int n);

int utama() {
  int a, b;
  a = 5;
  b = 9;

  cout << " Nilai Sebelum Fungsi Ditambang " << endl;
  cout << " a= " << a << " b= " << b;

  tambah(a, b);

  cout << " \n Nilai Setelah Fungsi Ditambang " << endl;
  cout << " a= " << a << " b= " << b;
  getchar();
}
int tambah(int m, int n) {
  m += 5;
  n += 7;
  cout << " \n\n Nilai di dalam Fungsi Tambah() " << endl;
  cout << " m = " << m << " n = " << n;
  cout << endl;

  kembali 0;
}