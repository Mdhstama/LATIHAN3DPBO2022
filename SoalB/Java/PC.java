public class PC {
    /* atribut dan pemanggilan class */
    private CPU cpuA;
    private RAM ramB;
    private DISK diskC;
    private int pcPrice;

    /* constructor */
    public PC(CPU CPUA, RAM RAMB, DISK DISKC, int pcPrice) {
        cpuA = CPUA;
        ramB = RAMB;
        diskC = DISKC;
        this.pcPrice = pcPrice;
    }

    public PC() {

    }

    /* membuat get set method untuk class CPU */
    public void setCPU(CPU CPUA) {
        cpuA = CPUA;
    }

    public CPU getCPU() {
        return cpuA;
    }

    /* membuat get set method untuk class CPU */
    public void setRAM(RAM RAMB) {
        ramB = RAMB;
    }

    public RAM getRAM() {
        return ramB;
    }

    /* membuat get set method untuk class CPU */
    public void setDISK(DISK DISKC) {
        diskC = DISKC;
    }

    public DISK getDISK() {
        return diskC;
    }

    /* membuat get set method untuk total harga PC */
    public void setPricePC(int pcPrice) {
        this.pcPrice = pcPrice;
    }

    public int getPricePC() {
        return pcPrice;
    }

    /* menampilkan data PC */
    public void printPC() {
        cpuA.printCPU();
        ramB.printRAM();
        diskC.printDISK();
        System.out.println("Total Price(IDR)    : " + this.getPricePC());
        System.out.println("######################################");
    }
}
