public class DecToBin {
    public static void main(String args[]) {
        int n = 5;
        int binary = 0, pow = 0;
        while(n > 0) {
            int dig = n % 2;
            binary = (int)(binary + (dig * Math.pow(10, pow)));
            pow++;
            n = n / 2;
        }
        System.out.println(binary);

    }
}