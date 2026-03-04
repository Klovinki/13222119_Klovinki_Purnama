#include <iostream>
#include <iomanip>

class RekeningBank{
    private:
        double saldo;
    public:
        RekeningBank(double saldo_awal){
            saldo = saldo_awal;
        }
        void setor(double jumlah){
            saldo += jumlah;
            std::cout << "Penyetoran berhasil dilakukan, saldo Anda berjumlah: " << std::fixed << std::setprecision(2) << saldo << std::endl;
            std::cout << std::endl;
        }
        void tarik(double jumlah){
            if (saldo < jumlah){
                std::cout << "Penarikan gagal dilakukan, saldo Anda tidak cukup!" << std::endl;
                std::cout << "Saldo Anda hanya berjumlah: " << std::fixed << std::setprecision(2) << saldo << std::endl;
                std::cout << std::endl;
            }
            else{
                saldo -= jumlah;
                std::cout << "Penarikan berhasil dilakukan, saldo Anda tersisa: " << std::fixed << std::setprecision(2) << saldo << std::endl;
                std::cout << std::endl;
            }
        }

        void cekSaldo(){
            std::cout << "Anda memiliki saldo: " << std::fixed << std::setprecision(2) << saldo << std::endl;
            std::cout << std::endl;
        }
};

int main(){
    RekeningBank rek912301239(100000);
    rek912301239.cekSaldo();
    rek912301239.tarik(500000);
    rek912301239.setor(1000000);
    rek912301239.tarik(500000);
}