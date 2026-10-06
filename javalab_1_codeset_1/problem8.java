import java.util.Scanner;

public class problem8 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        int a = 0, b = 1, temp;
        
        System.out.print("Input: ");
        n = sc.nextInt();
        for(int i = 0; i < n; i++){
            System.out.print(a + " ");
            temp = a + b;
            b = a;
            a = temp;   
        }
    }
}