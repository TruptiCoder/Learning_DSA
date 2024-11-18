public class Largest {
    public static void main(String args[]) {
        int arr[] = {23, 65, 22, 54, 55, 55};
        int max = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if(max < arr[i]) {
                max = arr[i];
            }  
        }
        System.out.println(max);
    }
}