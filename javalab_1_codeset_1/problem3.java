import java.util.Scanner;

public class problem3 {
    public static void main(String[] args){
        int n;
        int sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        System.out.print("Output: " + sum);
    }
}