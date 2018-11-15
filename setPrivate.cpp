#include <iostream>

class balok{
    public:
        void setPanjang(float p);
        void setLebar(float l);
        void setTinggi(float t);
        float getVolume();
    
    private:
        float panjang, lebar, tinggi, Volume;
}; 
void balok::setPanjang(float p){
    panjang = p;
}
void balok::setLebar(float l){
    lebar = l;
}
void balok::setTinggi(float t){
    tinggi = t;
}
float balok::getVolume(){
    float Volume = panjang*lebar*tinggi;
    return Volume;
}

int main(){
    balok Volume;
    float p, l, t;
    std::cout << "Masukkan panjang : ";
    std::cin >> p;
    
    std::cout << "Masukkan lebar   : ";
    std::cin >> l;
    
    std::cout << "Masukkan Tinggi  : ";
    std::cin >> t;

    Volume.setPanjang(p);
    Volume.setLebar(l);
    Volume.setTinggi(t);
    std::cout << "Volume Balok = " << Volume.getVolume() << std::endl;

    return 0;
}