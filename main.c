
void konversiBerat() {
    float kg, gram;

    printf("========================================\n");
    printf("       PROGRAM KONVERSI BERAT           \n");
    printf("========================================\n");

    printf(" Masukkan berat (kg) : ");
    if (scanf("%f", &kg) != 1) {
        printf("\n [!] Error: Input harus berupa angka.\n");
        return 1;
    }

    gram = kg * 1000;

    printf("----------------------------------------\n");
    printf(" HASIL KONVERSI:\n");
    printf(" > %.2f kg  =  %.0f gram\n", kg, gram);
    printf("----------------------------------------\n");
    printf("       Terima kasih telah menggunakan!  \n");
    printf("========================================\n");

    return 0;
}