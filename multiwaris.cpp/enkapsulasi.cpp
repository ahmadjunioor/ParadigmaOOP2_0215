#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSakarNo(int i) {
        return saklarNo[i];
    }
};

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << lampuRumah.getSakarNo(0) << endl;
    cout << lampuRumah.getSakarNo(1) << endl;
    cout << lampuRumah.getSakarNo(2) << endl;
    cout << lampuRumah.getSakarNo(3) << endl;
    return 0;
}