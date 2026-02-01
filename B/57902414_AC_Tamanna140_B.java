import java.util.Scanner;
import java.util.Arrays;

public class HolidayOfEquality {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the number of citizens
        int n = scanner.nextInt();
        int[] welfare = new int[n];

        // Input the welfare of each citizen
        for (int i = 0; i < n; i++) {
            welfare[i] = scanner.nextInt();
        }

        // Find the maximum welfare among citizens
        int maxWelfare = Arrays.stream(welfare).max().orElse(0);

        // Calculate the total burles required
        int totalBurles = 0;
        for (int w : welfare) {
            totalBurles += maxWelfare - w;
        }

        // Output the result
        System.out.println(totalBurles);

        scanner.close();
    }
}