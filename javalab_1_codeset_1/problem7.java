import java.util.Scanner;

public class problem7 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        int sum = 0;
        
        System.out.print("Input: ");
        n = sc.nextInt();

        while(n != 0){
            sum += n%10;
            n /= 10;
        }
        System.out.println("Output: " + sum);
    }
}