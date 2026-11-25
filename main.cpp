#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream testlogdosyasi("test_auth.log");
    if (!testlogdosyasi.is_open()) {
        std::cerr << "Dosya acilamadi!\n";
        return 1;
    }

    std::string satir;
    while (std::getline(testlogdosyasi, satir)) {
        if (satir.find("Failed password") != std::string::npos) {
            size_t from_yeri = satir.find("from ");
            
            if (from_yeri != std::string::npos) {
                size_t ip_baslangic = from_yeri + 5;
                size_t ip_bitis = satir.find(' ', ip_baslangic);
                std::string ip = satir.substr(ip_baslangic, ip_bitis - ip_baslangic);

                if (!ip.empty()) {
                    std::cout << ip << '\n';
                }
            }
        }
    }

    return 0;
}