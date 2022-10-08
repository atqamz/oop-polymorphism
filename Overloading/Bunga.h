#include <iostream>
#include <string>
using namespace std;

class Bunga
{
private:
    string warna;

public:
    Bunga();
    Bunga(string _warna);

    // Getter
    string GetWarna();

    // Setter
    void SetWarna(string _warna);
};