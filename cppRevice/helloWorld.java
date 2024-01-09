import java.util.Scanner;

public class helloWorld {
    
    public static void main(String[] args) {
        // Take user input and store it in a variable
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello " + name);
    }
}


