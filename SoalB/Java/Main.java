public class Main {
    public static void main(String[] args) {
        /* meminta input data */
        CPU amd = new CPU();
        RAM hynix = new RAM();
        DISK samsung = new DISK();

        amd.setPriceCPU(8500000);
        amd.setNameCPU("AMD Ryzen 9 5900X");
        hynix.setPriceRAM(7000000);
        hynix.setCapacityRAM(32);
        samsung.setPriceDISK(1900000);
        samsung.setTypeDISK("SSD NVME");
        samsung.setCapacityDISK(512);

        /* menghitung total harga */
        int total = (amd.getPriceCPU() + hynix.getPriceRAM() + samsung.getPriceDISK());

        /* memasukan data ke dalam class PC */
        PC adit = new PC(amd, hynix, samsung, total);

        /* menampilkan output */
        System.out.println("######################################");
        System.out.println("Java Language");
        adit.printPC();
    }
}
