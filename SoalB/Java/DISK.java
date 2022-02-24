public class DISK {
    /* atribut */
    private int priceDISK;
    private String typeDISK;
    private int capacityDISK;

    /* constructor */
    public DISK(int priceDISK, String typeDISK, int capacityDISK) {
        this.priceDISK = priceDISK;
        this.typeDISK = typeDISK;
        this.capacityDISK = capacityDISK;
    }

    public DISK() {

    }

    /* membuat get set method untuk harga DISK */
    public void setPriceDISK(int priceDISK) {
        this.priceDISK = priceDISK;
    }

    public int getPriceDISK() {
        return priceDISK;
    }

    /* membuat get set method untuk tipe DISK */
    public void setTypeDISK(String typeDISK) {
        this.typeDISK = typeDISK;
    }

    public String getTypeDISK() {
        return typeDISK;
    }

    /* membuat get set method untuk kapasitas DISK */
    public void setCapacityDISK(int capacityDISK) {
        this.capacityDISK = capacityDISK;
    }

    public int getCapacityDISK() {
        return capacityDISK;
    }

    /* menampilkan data DISK */
    public void printDISK() {
        System.out.println("DISK Price(IDR)     : " + this.getPriceDISK());
        System.out.println("DISK Type           : " + this.getTypeDISK());
        System.out.println("DISK Capacity(GB)   : " + this.getCapacityDISK());
        System.out.println("######################################");
    }
}
