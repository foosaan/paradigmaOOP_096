#include <string>
#include <iostream>
using namespace std;

class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) { // member initialitalizion
    }
    ~mahasiswa() {
        cout << "id     =" << id << endl;
        cout << "nama   =" << nama << endl;
        cout << "nilai  =" << nilai << endl;
    }
};
int main()
{
    mahasiswa mhs(12, "asroni", 90.5);
    return 0;
}