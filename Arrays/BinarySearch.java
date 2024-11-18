public class BinarySearch {
    public static void main(String args[]) {
        int arr[] = {2, 3, 6, 7, 9, 10};
        int target = 7, flag = 0;

        int low = 0;
        int high = arr.length;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] == target) {
                System.out.println(mid);
                flag = 1;
                break;
            }
            else if(arr[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }    

        if(flag == 0) {
            System.out.println("Key not found");
        }

    }
}