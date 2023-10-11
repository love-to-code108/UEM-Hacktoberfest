import java.util.*;

class flowerBloom{
    public static void main(String[] args) {
        int[][] flowers = {{1,6},{3,7},{2,8},{4,9},{5,10}};
        int[] persons = {2, 1, 4, 5, 3};
        int day[] = fullBloomFlowers(flowers, persons);
        for(int i=0;i<day.length;i++)
        System.out.println(day);
    }
    public static int[] fullBloomFlowers(int[][] flowers, int[] persons) {
        int n = flowers.length;
        int[] start = new int[n];
        int[] end = new int[n];
        
        for (int i = 0; i < n; i++) {
            start[i] = flowers[i][0];
            end[i] = flowers[i][1];
        }
        
        Arrays.sort(start);
        Arrays.sort(end);
        
        int[] res = new int[persons.length];
        
        for (int i = 0; i < persons.length; i++) {
            int t = persons[i];
            int started = binarySearchUpperBound(start, t);
            int ended = binarySearchLowerBound(end, t);
            res[i] = started - ended;
        }
        
        return res;
    }
     private static int binarySearchUpperBound(int[] arr, int target) {
        int left = 0;
        int right = arr.length;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
    private static int binarySearchLowerBound(int[] arr, int target) {
        int left = 0;
        int right = arr.length;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
}