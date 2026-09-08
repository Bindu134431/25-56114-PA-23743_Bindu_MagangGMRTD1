Tugas Magang Day 1 - GMRT

Bindu Raditya Anresangsya
25/56114/PA/23743

# Penjelasan singkat:
if (n % 3 != 0 or m % 3 != 0)
   {
        cout << "-1";
        return 0;
    }
# Jika tidak terbagi rata, maka return -1

int kapasitas2 = k / 2;
        if (kapasitas2 == 0)
        {
            cout << "-1";
            return 0;
       }

# Kapasitas kedua merupakan kelipatan 2
# kapasitas pertama merupakan kelipatan 1

int x2 = n / 3;
# jumlah barang yg dibutuhkan per kotak tujuan

int ambil = ceil(2 * x2, kapasitas2);
# peraturan pertama

int letak = 2 * ceil(x2, kapasitas2);
# peraturan kedua

langkah += ambil + letak;
# total langkah dari kedua perintah