#include <iostream>
#include <string>

using namespace std;

/* memanggil class */
#include "PC.cpp"

int main()
{
    /* memasukan data input */
    CPU amd(8500000, "AMD Ryzen 9 5900X");
    RAM hynix(7000000, 32);
    DISK samsung(1900000, "SSD NVME", 512);

    /* menghitung total harga */
    int total = (amd.getPriceCPU() + hynix.getPriceRAM() + samsung.getPriceDISK());

    /* memasukan data ke dalam class PC*/
    PC adit(amd, hynix, samsung, total);

    /* menampilkan output */
    cout << "====================================================" << endl;
    cout << "C++ Language" << endl;
    adit.printPC();

    /* menghentikan operasi */
    return 0;
}