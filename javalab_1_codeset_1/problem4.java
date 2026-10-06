import java.util.Scanner;

public class problem4 {
    public static void main(String[] args){
        int n, temp;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        n = sc.nextInt();
        System.out.print("Output: ");
        temp = n;
        while (temp != 0) {
            System.out.print(temp%10);
            temp /= 10;
        }
    }
}