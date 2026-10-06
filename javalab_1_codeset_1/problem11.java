import java.util.Scanner;
import java.util.Random;

public class problem11 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int guess = 0;
        Random rand = new Random();
        int n = rand.nextInt(101);
        int count = 0;
        boolean replay = true;
        
        System.out.println("Welcome To The Number Guessing Game! ");
        System.out.println("Choose a number between 1 and 100.");

        while (replay != false) {
            
            System.out.print("\nEnter your guess: ");
            guess = sc.nextInt();    
            count++;

            if (guess < n) {
                System.out.println("Too Low! Try again.");
            }
            else if(guess > n){
                System.out.println("Too High! Try again.");
            }
            else{
                System.out.println("Correct! You guessed it in " + count + " attempts.");
                System.out.print("\nDo you want to play again? (y/n): ");
                String res = sc.next();
                if (res.equals("y")) {
                    replay = true;
                    n = rand.nextInt(101);
                    count = 0;
                }
                else{
                    replay = false;
                }
            }
        }
    }
}