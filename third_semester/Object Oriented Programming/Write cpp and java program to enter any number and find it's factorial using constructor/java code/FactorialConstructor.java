import java.util.Scanner;

class Factorial {
    private int num;
    private long fact; // to handle large factorial values

    // Constructor
    Factorial(int n) {
        num = n;
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
    }

    // Method to display factorial
    void display() {
        System.out.println("Factorial of " + num + " is: " + fact);
    }
}

public class FactorialConstructor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        Factorial f = new Factorial(n); // constructor invoked
        f.display();
    }
}
