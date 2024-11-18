public class BinToDec {
    public static void main(String args[]) {
        int n = 101101;
        int decimal = 0, pow = 0;
        while(n > 0) {
            int last = n % 10;
            decimal = (int)(decimal + (last * Math.pow(2, pow)));
            pow++;
            n = n / 10;
        }
        System.out.println(decimal);
    }
}