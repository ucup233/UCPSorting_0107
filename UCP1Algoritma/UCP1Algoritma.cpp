//Tipe Soal B
//1. Algoritma bubble sort membandingkan dengan cara apakah array ke-0 lebih besar dari array ke-1 atau array ke-j lebih besar dari array ke-(j+1),
// atau bisa lebih diperjelas dengan sintaks: "if(arr[j]>arr[j+1])". Jika iya, maka akan dibuat int temporary (sementara) yang digunakan sementara untuk
// menyimpan nilai dari array ke-j. Kemudian memasukkan nilai dari array ke-(j+1) ke dalam kolom array ke-j karena sudah dikosongkan/dipindahkan nilai
// dari array ke-j awalnya ke dalam kolom temporary. setelah dimasukkan nilai tersebut, kolom array ke-(j+1) sudah kosong, dimasukkan nilai dari kolom temporary
// ke dalam kolom array ke-(j+1). Proses ini diulang terus sampai lebih kecil atau sama dengan (n-1) kali, contohnya jika terdapat 5 elemen, maka dapat diulang sampai sebanyak 4 kali. Atau
// bisa diperjelas dengan sintaks: "while(i<=n-1)"
//2. Algoritma shell sort membandingkan dengan cara membagi elemen-elemen sebuah array menjadi beberapa sublist dengan cara membagi elemen-elemen array 
// dengan jarak sesuai dengan jumlah increment sublist.Yang kemudian diaplikasikan insertion sort kepada semua sublist-sublist tadi untuk diurutkan elemen-elemen dalam
// setiap sublist. Jika sudah, kita kurangi 1 sublist dengan cara menyalurkan isi elemen dari salah satu sublist kepada sublist yang masih ada. Atau dapat
// diperjelas seperti ini: "Awalnya terdapat 3 sublist, kita akan menghilangkan sublist ke-3 dengan cara menyalurkan isi elemen dari sublist 3 kepada
// sublist 1 dan 2 dengan membagi isi elemen yang diberi jarak sesuai dengan jumlah sublist yang tersisa." Kemudian diaplikasikan lagi insertion sort pada sisa
// sublist yang ada, jika sudah terurutkan maka sisa sublist akan dikurangi dan diulangi lagi proses insertion sort terus hingga jumlah sublist tersisa 1 dan 
// kemudian diaplikasikan insertion untuk yang terakhir kali. Dan selesai sudah algoritma shell sort.
//3. Jika sudah ada beberapa elemen yang berurutan, maka sebaiknya menggunakan algoritma insertion sort karena jumlah perbandingan dari insertion sort karena 
// insertion sort membandingkan elemen yang diuji dengan seluruh elemen dari array secara iteratif/keseluruhan dan langsung memposisikan elemen yang dibandingkan ke posisi urutan yang benar.

//No.4

void Algoritma() {
	int n,i,j,min_index;
	int yusuf[7];
	for (j = 0; j <= n - 2; j++) {
		do (yusuf[j] <= yusuf[n - 1]) {
			min_index = j;
			for (i = j + 1; i <= n - 1;) {
				while (yusuf[i] < yusuf[min_index]) {
					min_index = i;
				}
			}
		}
		yusuf[min_index] = yusuf[j];
	}while (j <= n - 2);
}

