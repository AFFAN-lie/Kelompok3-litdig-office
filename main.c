#include <stdio.h>

int main() {
    float jam, menit, detik;

    printf("\n--- KONVERSI WAKTU ---\n");
    printf("Masukkan durasi dalam JAM: ");
    
    // Validasi input
    if (scanf("%f", &jam) != 1) {
        printf("Error: Masukkan angka yang valid!\n");
        while(getchar() != '\n'); // Membersihkan buffer input
        return 1;
    }

    // Validasi nilai tidak boleh negatif
    if (jam < 0) {
        printf("Error: Waktu tidak boleh negatif!\n");
        return 1;
    }

    // Perhitungan
    menit = jam * 60;
    detik = jam * 3600;

    // Menampilkan hasil
    printf("\nHasil Konversi dari %.2f Jam:\n", jam);
    printf("> Menit : %.0f Menit\n", menit);
    printf("> Detik : %.0f Detik\n", detik);
    printf("----------------------\n");

    return 0;
}