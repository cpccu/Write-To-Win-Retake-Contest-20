import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class SumOfSameParity {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine()); // Number of test cases
        
        // Process each test case
        while (t-- > 0) {
            String[] input = br.readLine().split(" ");
            long n = Long.parseLong(input[0]);
            int k = Integer.parseInt(input[1]);
            
            // Check if it's possible to split n into k parts with same parity
            // Case 1: All parts are odd
            if (n >= k && (n - k) % 2 == 0) {
                // We can represent n with k odd integers
                System.out.print("YES\n");
                for (int i = 0; i < k - 1; i++) {
                    System.out.print("1 ");
                }
                System.out.println(n - (k - 1));
            }
            // Case 2: All parts are even
            else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {
                // We can represent n with k even integers
                System.out.print("YES\n");
                for (int i = 0; i < k - 1; i++) {
                    System.out.print("2 ");
                }
                System.out.println(n - 2 * (k - 1));
            } 
            else {
                // It's not possible to split n into k parts with the same parity
                System.out.println("NO");
            }
        }
    }
}