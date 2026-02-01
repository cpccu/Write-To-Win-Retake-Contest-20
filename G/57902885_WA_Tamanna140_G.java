import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class AliceBobGame {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine()); // Number of test cases

        StringBuilder result = new StringBuilder();
        while (t-- > 0) {
            String s = br.readLine(); // Input binary string

            // Count the number of '01' or '10' pairs in the string
            int pairs = 0;
            for (int i = 0; i < s.length() - 1; i++) {
                if (s.charAt(i) != s.charAt(i + 1)) {
                    pairs++;
                    i++; // Skip the next character since it is part of the pair
                }
            }

            // Alice wins if the number of pairs is odd, otherwise Bob wins
            if (pairs % 2 == 1) {
                result.append("DA\n"); // Alice wins
            } else {
                result.append("NET\n"); // Bob wins
            }
        }

        System.out.print(result);
    }
}