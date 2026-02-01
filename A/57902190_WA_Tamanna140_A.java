import java.util.Arrays;
import java.util.Scanner;

public class LukeFoodPiles {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt(); 
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt(); 
            int maxSpeed = scanner.nextInt(); 
            int[] foodPiles = new int[n];
            
            for (int j = 0; j < n; j++) {
                foodPiles[j] = scanner.nextInt(); // Distances of food piles
            }
            
            int changes = calculateSpeedChanges(foodPiles, maxSpeed);
            System.out.println(changes);
        }
        
        scanner.close();
    }

    private static int calculateSpeedChanges(int[] foodPiles, int maxSpeed) {
        Arrays.sort(foodPiles); 
        int changes = 0;
        int currentSpeed = maxSpeed; 

        for (int distance : foodPiles) {
            if (currentSpeed < distance) {
                currentSpeed = distance;
                changes++;
            }
        }
        
        return changes;
    }
}