#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>  // Pustaka fungsi matematika (std::sqrt)
#include <string> // Pustaka string untuk membaca teks header

int main(){
    // Pembuatan vector
    std::vector<double> sensor;

    // Inisialisasi Data Sensor
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // "Kalibrasi"
    for(int i=0; i < sensor.size(); i++){
        sensor[i] *= 1.1;
    }

    // Cetak ke txt
    std::ofstream fileTulis("hasil_kalibrasi.txt");
    if (fileTulis.is_open()) {  
        for(int i=0; i < sensor.size(); i++){
            fileTulis << sensor[i] << "\n";
        }
        fileTulis.close();  
        std::cout << "=> Selesai! Buka file 'hasil_kalibrasi.txt' untuk melihat kalkulasinya." << std::endl;  
    } else {  
       std::cout << "Gagal membuat file.\n";  
    }
}