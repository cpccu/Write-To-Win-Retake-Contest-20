import java.util.*;

public class MergingArrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Read number of test cases
        int t = sc.nextInt();
        
        while (t-- > 0) {
            // Read the length of arrays a and b
            int n = sc.nextInt();
            
            int[] a = new int[n];
            int[] b = new int[n];
            
            // Read array a
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            
            // Read array b
            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }
            
            // This map will store the last seen index of each number from both arrays
            Map<Integer, Integer> lastIndex = new HashMap<>();
            
            // We will track the maximum subarray length of same values
            int maxLength = 1;
            
            // First pass for array a
            for (int i = 0; i < n; i++) {
                int num = a[i];
                if (lastIndex.containsKey(num)) {
                    int length = i - lastIndex.get(num);
                    maxLength = Math.max(maxLength, length);
                }
                lastIndex.put(num, i);
            }
            
            // Second pass for array b
            for (int i = 0; i < n; i++) {
                int num = b[i];
                if (lastIndex.containsKey(num)) {
                    int length = i - lastIndex.get(num);
                    maxLength = Math.max(maxLength, length);
                }
                lastIndex.put(num, i);
            }
            
            // Print the result for this test case
            System.out.println(maxLength);
        }
        
        sc.close();
    }
}