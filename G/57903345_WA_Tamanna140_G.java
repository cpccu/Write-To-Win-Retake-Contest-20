import java.util.Scanner;

public class CardGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Read the number of test cases
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline
        
        // Loop through each test case
        for (int i = 0; i < t; i++) {
            // Read the binary string for this test case
            String s = sc.nextLine();
            
            // Count the number of "01" or "10" pairs
            int moves = 0;
            for (int j = 0; j < s.length() - 1; j++) {
                if ((s.charAt(j) == '0' && s.charAt(j + 1) == '1') || 
                    (s.charAt(j) == '1' && s.charAt(j + 1) == '0')) {
                    moves++;
                }
            }
            
            // If moves is odd, Alice wins (DA), else Bob wins (NET)
            if (moves % 2 == 1) {
                System.out.println("DA");
            } else {
                System.out.println("NET");
            }
        }
        
        sc.close();
    }
}