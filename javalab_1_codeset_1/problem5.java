import java.util.Scanner;

public class problem5 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        int factorial = 1;
        System.out.print("Input: ");
        n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        System.out.println("Output: " + factorial);
    }
}