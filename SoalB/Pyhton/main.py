# memanggil class
from CPU import CPU
from RAM import RAM
from DISK import DISK
from PC import PC

# inisialisasi data input
amd = CPU()
hynix = RAM()
samsung = DISK()
adit = PC()

# memasukan data input
amd.setPriceCPU(8500000)
amd.setNameCPU("AMD Ryzen 5 5900X")
hynix.setPriceRAM(7000000)
hynix.setCapacityRAM(32)
samsung.setPriceDISK(1900000)
samsung.setTypeDISK("SSD NVME")
samsung.setCapacityDISK(512)

# menghitung total harga
total = amd.getPriceCPU() + hynix.getPriceRAM() + samsung.getPriceDISK()

# memasukan data kedalam class pc
adit.setCPU(amd)
adit.setRAM(hynix)
adit.setDISK(samsung)
adit.setPcPrice(total)

# menampilkan hasil
print("---------------------------------------")
print("Pyhton Languange")
adit.printPC()
