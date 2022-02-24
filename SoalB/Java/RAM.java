public class RAM {
    /* atribut */
    private int priceRAM;
    private int capacityRAM;

    /* constructor */
    public RAM(int priceRAM, int capacityRAM) {
        this.priceRAM = priceRAM;
        this.capacityRAM = capacityRAM;
    }

    public RAM() {

    }

    /* membuat get set methods harga RAM */
    public void setPriceRAM(int priceRAM) {
        this.priceRAM = priceRAM;
    }

    public int getPriceRAM() {
        return priceRAM;
    }

    /* membuat get set methods kapasitas RAM */
    public void setCapacityRAM(int capacityRAM) {
        this.capacityRAM = capacityRAM;
    }

    public int getCapacityRAM() {
        return capacityRAM;
    }

    /* menampilkan data RAM */
    public void printRAM() {
        System.out.println("RAM Price(IDR)      : " + this.getPriceRAM());
        System.out.println("RAM Capacity(GB)    : " + this.getCapacityRAM());
        System.out.println("######################################");
    }
}
