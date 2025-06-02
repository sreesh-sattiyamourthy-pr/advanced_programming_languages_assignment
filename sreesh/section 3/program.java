public class MemoryDemo {
    public static void main(String[] args) {
        String[] data = new String[1000];
        for (int i = 0; i < data.length; i++) {
            data[i] = "Data " + i;
        }

        System.out.println("Data allocated");
        data = null; // Eligible for GC
        System.gc(); // Request garbage collection
        System.out.println("GC requested");
    }
}
