#include <iostream>
using namespace std;

int arr[20];        // Membuat array dengan panjang data 20
int n;              // Membuat variabel inputan n

void input()
{   // Procedure input
    while (true)
    {
        cout << "Masukkan Jumlah Data Array : ";        // Membuat inputan Jumlah Elemen Array
        cin >> n;                                       // Memanggil variable inputan n
        if (n <= 20)
        {   // Membuat kondisi n tidak lebih dari 20 
            break;
        }
        else
        {
            cout << "n\Array yang anda masukkan maksimal 20 elemen. \n";
        }
    }
    cout << endl;                                       // Membuat jarak per baris program
    cout << "======================" << endl;           // Membuat tampilan susun data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)     // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": ";              // Masukkan atau menginput nilai pada data n
        cin >> arr[i];                                     // Masukkan nilai data n kedalam array arr
    }
}
// Procedure Insertionsort
void insertionsort()
{

    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j;  // Membuat variable j sebagai penanda


}





int main()
{
    std::cout << "Hello World!\n";
}
