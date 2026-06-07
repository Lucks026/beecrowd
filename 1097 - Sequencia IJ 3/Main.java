public class Main {
    public static void main(String[] args) {
        for(int i = 1; i <= 9; i += 2){
            int jStart = i + 6;
            for(int j = jStart; j >= jStart - 2; j--){
                System.out.println("I=" + i + " J=" + j);
            }
        }
    }
}
