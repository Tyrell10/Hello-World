#include <iostream>
int num1, num2;
class fukuro1{
    public:
    int add(int num1, int num2){
        int num3 = num1 + num2;
    
        return num3;
    }
    int substract(int num1, int num2){
        int num3 = num1 - num2;
        
        return num3;
    }
    void show(){
        std::cout << "Halo Fukuro" << std::endl;
    }
}; fukuro1 Latihan;

int main(){
    int pilih;
    std::cout << "Menu Operasi :" << std::endl;
    std::cout << "1. Penjumlahan" << std::endl;
    std::cout << "2. Pengurangan" << std::endl;
    std::cout << "3. Tampil Data" << std::endl;

    std::cout << "pilih operasi :";
    std::cin >> pilih;

    switch(pilih){
        case 1: std::cout << Latihan.add(1,2) << std::endl;
            break;
        case 2: std::cout << Latihan.substract(27,2) << std::endl; 
            break;
        case 3:  Latihan.show();
    }   
    return 0;
}