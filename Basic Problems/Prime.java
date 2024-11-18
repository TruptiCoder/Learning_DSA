public class Prime {
    public static void main(String args[]) {
        int n = 5;
        for(int i = 2; i < Math.sqrt(n); i++) {
            if(n % i == 0) {
                System.out.println("Not prime");
                break;
            }
        }
        System.out.println("Prime number");

    }
}