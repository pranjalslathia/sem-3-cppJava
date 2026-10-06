import java.util.Scanner;

public class problem6 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n, count = 0;
        
        System.out.print("Input: ");
        n = sc.nextInt();
        for(int i = 1; i*i < n; i++){
            if (n%i==0) {
                count++;
            }
        }
        if (count < 2 && n != 1) {
            System.out.println("Prime Number");
        }
        else{
            System.out.println("Not Prime Number");
        }
    }
}