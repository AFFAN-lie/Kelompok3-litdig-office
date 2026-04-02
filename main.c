void konversiSuhu() {
   system("cls");
   int celcius, kelvin;
   printf("*****Fungsi konversi suhu dari celcius ke kelvin****");
   printf("\nMasukan suhu dalam celcius: ");
   scanf("%d", &celcius);
   kelvin = celcius + 273;
   printf("%d celcius = %d kelvin ", celcius, kelvin);
   
}
