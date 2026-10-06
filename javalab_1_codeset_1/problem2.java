import java.util.Scanner;

public class problem2 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        n = sc.nextInt();
        System.out.print("Output: ");
        for(int i = 1; i <= n; i++){
            if (i % 2 == 0) {
                System.out.print(i + " ");
            }
        }
    }
}