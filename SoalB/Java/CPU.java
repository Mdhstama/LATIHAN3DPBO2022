public class CPU {
    /* atribut */
    private int priceCPU;
    private String nameCPU;

    /* constructor */
    public CPU(int priceCPU, String nameCPU) {
        this.nameCPU = nameCPU;
        this.priceCPU = priceCPU;
    }

    public CPU() {

    }

    /* membuat get set method harga CPU */
    public void setPriceCPU(int priceCPU) {
        this.priceCPU = priceCPU;
    }

    public int getPriceCPU() {
        return priceCPU;
    }

    /* membuat get set method nama CPU */
    public void setNameCPU(String nameCPU) {
        this.nameCPU = nameCPU;
    }

    public String getNameCPU() {
        return nameCPU;
    }

    /* menampilkan data CPU */
    public void printCPU() {
        System.out.println("######################################");
        System.out.println("CPU Price(IDR)      : " + this.getPriceCPU());
        System.out.println("CPU Name            : " + this.getNameCPU());
        System.out.println("######################################");
    }
}