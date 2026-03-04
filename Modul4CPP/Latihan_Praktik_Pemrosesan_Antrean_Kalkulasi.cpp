#include <iostream>
#include <vector>

class TugasKalkulasi {  
private:  
    int id_tugas;  
    double nilai_A;  
    double nilai_B;  
    double hasil;

public:  
    // Constructor menginisialisasi angka yang akan dihitung  
    TugasKalkulasi(int id, double a, double b) {  
        id_tugas = id;  
        nilai_A = a;  
        nilai_B = b;  
        hasil = 0.0;  
    }

    // Method komputasi (Di sinilah proses paralel nantinya bekerja)  
    void kerjakan() {  
        hasil = nilai_A + nilai_B;
    }

    void tampilkanHasil() {  
        std::cout << "Tugas " << id_tugas << " | "   
                  << nilai_A << " + " << nilai_B   
                  << " = " << hasil << "\t\t\t\t";  
    }  
};

int main() {  
    std::vector<TugasKalkulasi> antrean;

    for(int i = 0; i < 100; i++) {  
        antrean.push_back(TugasKalkulasi(i, i*i, i*i*i));
    }
    

    // Proses massal (Sangat aman untuk diparalelkan)  
    for(int i = 0; i < antrean.size(); i++) {  
        antrean[i].kerjakan();  
        antrean[i].tampilkanHasil();
        if ((i + 1) % 5 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;  
}