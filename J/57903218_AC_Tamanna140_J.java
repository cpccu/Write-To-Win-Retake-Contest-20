import java.util.Scanner;

public class CardGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Read the number of test cases
        int t = sc.nextInt();
        
        // Loop over all test cases
        for (int testCase = 0; testCase < t; testCase++) {
            // Read the 4 integers: Suneet's cards (a1, a2) and Slavic's cards (b1, b2)
            int a1 = sc.nextInt();
            int a2 = sc.nextInt();
            int b1 = sc.nextInt();
            int b2 = sc.nextInt();
            
            int suneetWins = 0;
            
            // Generate all 4 possible card pairings and check who wins each game
            int[][] flips = {
                {a1, b1, a2, b2},
                {a1, b2, a2, b1},
                {a2, b1, a1, b2},
                {a2, b2, a1, b1}
            };
            
            // Check each case
            for (int[] flip : flips) {
                int suneetRounds = 0, slavicRounds = 0;
                
                // First round
                if (flip[0] > flip[1]) {
                    suneetRounds++;
                } else if (flip[1] > flip[0]) {
                    slavicRounds++;
                }
                
                // Second round
                if (flip[2] > flip[3]) {
                    suneetRounds++;
                } else if (flip[3] > flip[2]) {
                    slavicRounds++;
                }
                
                // Check if Suneet wins (wins more rounds than Slavic)
                if (suneetRounds > slavicRounds) {
                    suneetWins++;
                }
            }
            
            // Output the result for this test case
            System.out.println(suneetWins);
        }
        
        sc.close();
    }
}