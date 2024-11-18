public class LinearSearch {
    public static void main(String args[]) {
        int arr[] = {22, 3, 5, 2, 6, 23};
        int key = 3, flag = 0;
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == key) {
                System.out.println(i);
                flag = 1;
            }
        }
        System.out.println(flag == 0 ? -1: "Key found");
    }
}