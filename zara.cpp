#include <iostream>
#include <iomanip>
using namespace std;


int hitungBiaya(int jenis, int jam)
{
    if (jenis == 1)      // Motor
        return jam * 3000;
    else if (jenis == 2) // Mobil
        return jam * 5000;
    else                 // Mobil Besar
        return jam * 8000;
}

int main()
{
    string username, password;
    string platNomor;
    string kendaraan;

    int jenis;
    int lamaParkir;
    int total;
    int bayar;
    int metode;
    int pilihan;

    cout << "=========================================\n";
    cout << "      SISTEM PARKIR MALL\n";
    cout << "=========================================\n";

    // Login sederhana
    cout << "\n===== LOGIN PETUGAS =====\n";
    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;

    if(username != "zara" || password != "123")
    {
        cout << "\nLogin gagal!";
        return 0;
    }

    do
    {
        cout << "\n=========================================\n";
        cout << "         INPUT DATA PARKIR\n";
        cout << "=========================================\n";

        cout << "Nomor Polisi : ";
        cin >> platNomor;

        cout << "\nJenis Kendaraan\n";
        cout << "1. Motor\n";
        cout << "2. Mobil\n";
        cout << "3. Mobil Besar\n";

        cout << "Pilih : ";
        cin >> jenis;

        switch(jenis)
        {
            case 1:
                kendaraan = "Motor";
                break;

            case 2:
                kendaraan = "Mobil";
                break;

            case 3:
                kendaraan = "Mobil Besar";
                break;

            default:
                cout << "Pilihan tidak tersedia!\n";
                continue;
        }

        cout << "Lama Parkir (jam) : ";
        cin >> lamaParkir;

        total = hitungBiaya(jenis, lamaParkir);

        cout << "\nMetode Pembayaran\n";
        cout << "1. Tunai\n";
        cout << "2. QRIS\n";
        cout << "3. Debit\n";

        cout << "Pilih : ";
        cin >> metode;

        cout << "Nominal Bayar : Rp ";
        cin >> bayar;

        if(bayar >= total)
        {
            cout << "\n=====================================\n";
            cout << "          STRUK PARKIR\n";
            cout << "=====================================\n";

            cout << "Nomor Polisi   : " << platNomor << endl;
            cout << "Jenis Kendaraan: " << kendaraan << endl;
            cout << "Lama Parkir    : " << lamaParkir << " jam" << endl;
            cout << "Total Bayar    : Rp " << total << endl;

            cout << "Metode Bayar   : ";

            switch(metode)
            {
                case 1:
                    cout << "Tunai";
                    break;
                case 2:
                    cout << "QRIS";
                    break;
                case 3:
                    cout << "Debit";
                    break;
            }

            cout << endl;
            cout << "Nominal Bayar  : Rp " << bayar << endl;
            cout << "Kembalian      : Rp " << bayar-total << endl;

            cout << "\nTerima kasih.\n";
        }
        else
        {
            cout << "\nPembayaran kurang!";
            cout << "\nTransaksi dibatalkan.\n";
        }

        cout << "\nInput kendaraan lagi?\n";
        cout << "1. Ya\n";
        cout << "2. Tidak\n";
        cout << "Pilihan : ";
        cin >> pilihan;

    } while(pilihan == 1);

    cout << "\nProgram selesai.\n";

    return 0;
}
