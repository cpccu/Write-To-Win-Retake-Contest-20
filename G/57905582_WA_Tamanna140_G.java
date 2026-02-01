import java.util.Scanner;

public class AliceAndBobGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of test cases
        int t = scanner.nextInt();
        scanner.nextLine();  // consume the newline
        
        // Process each test case
        for (int i = 0; i < t; i++) {
            String s = scanner.nextLine();
            
            // Count the number of adjacent "01" or "10" pairs
            int pairCount = 0;
            for (int j = 0; j < s.length() - 1; j++) {
                if ((s.charAt(j) == '0' && s.charAt(j + 1) == '1') || (s.charAt(j) == '1' && s.charAt(j + 1) == '0')) {
                    pairCount++;
                }
            }
            
            // Alice wins if the number of pairs is odd, otherwise Bob wins
            if (pairCount % 2 == 1) {
                System.out.println("DA");
            } else {
                System.out.println("NET");
            }
        }
        
        scanner.close();
    }
}