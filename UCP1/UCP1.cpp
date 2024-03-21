// JAWABAN NOMER 1 SAMPAI 3
// 1. Dengan cara 1. di Scan terlebih dahulu, 2. Terus dibandingkan dan ditukarkan
//	  kiri dan kanan, dan 3. Diulangi sampai tersusun dari kecil ke terbesar.
// 2. ShellSort digunakan ketika jumlah array-nya banyak, itu akan menghemat waktu 
//	  karena ShellSort menggunakan kelipatan 3 dan seterusnya, jadi ketika sudah 
//	  banyak data yang berurutan pada kelipatan 1 nanti akan mudah untuk dikerjakan 
//	  pada insertionSort, Mengapa menggunakan insertionsort karena shellsort dan InsertionSort
//	  saling bergantungan.
// 3. Menggunakan Algoritma InsertionSort, karena jika sudah ada yang berurutan
//	  ketika kita menggunakan algoritma insertionsort itu akan mempercepat 
//	  pengerjaan atau proses sortir.
// 4. 
#include <iostream>
using namespace std;

int zaky[17];
int n;
int j;
int i;
int main_index;

void input() {	//prosedur untuk input
	while (true) {
		cout << "Masukan banyaknya element pada array :";	// Output ke layar
		cin >> n;		// Input dari pengguna
		if (n <= 17)	// Jika n kurang dari atau sama dengan 20
			break;
		else {
			cout << "\n Array dapat mempunyai maksimal 20 elemen.\n";
		}

	}
	cout << endl;									//Output Baris Kosong
	cout << "=========================" << endl;	//Output ke layar
	cout << "Masukan Elemen Array" << endl;			//Output ke layar
	cout << "=========================" << endl;	//Output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> zaky[i];
	}

}
//1. Repeat steps 2 and 3 varying j from 0 to n – 2
//2. Find the minimum value in arr[j] to arr[n – 1]:
//a. Set min_index = j
//b. Repeat step c varying i from j + 1 to n – 1
//c. If arr[i] < arr[min_index] :
//i. min_index = i
//3. Swap arr[j] with arr[min_index]
 
void selectionsort() {
	int pass = 2;

		for (int j = 0; j <= n - 2; j++); { //step 1 
			
			int min_index = j;		//step 2a
			for (int j = i + 1; j < n - 1; j++) {	//step 2b
				if (zaky[i] < zaky[min_index]) {	//step2c
					min_index = j;		//step i
				}
			}
			//swap
			if (min_index != i) {
				int temp = zaky[i];
				zaky[i] = zaky[min_index];
				zaky[min_index] = temp;

				cout << "\nPass" << pass - 2 << ": ";	//output ke layar
				for (int k = 0; k < n; k++) {			//looping nilai k dimulai dari 0 hingga n-01
					cout << zaky[k] << " ";
				}
			}
		}
	} 


void display() {
	cout << endl;											//Menambahkan Baris Kosong 
	cout << "===================" << endl;					//Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	//Output ke layar
	cout << "===================" << endl;					//Output ke layar
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << zaky[j];
		if (j < n - 1) {
			cout << "-->";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah Pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input(); //call the input  funcion to get user input
	selectionsort(); //call the selection sort function
	display();		//display  the sorted array
	system("pause");

	return 0;

}
