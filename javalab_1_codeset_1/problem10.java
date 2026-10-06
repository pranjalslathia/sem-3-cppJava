import java.util.Scanner;

public class problem10 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1, n2, rem = 1;
        
        System.out.print("Input: ");
        n1 = sc.nextInt();
        n2 = sc.nextInt();
        
        while(rem!=0){
            rem = n1%n2;
            n1 = n2;
            n2 = rem;
        }
        System.out.println("Output: " + n1);
    }
}