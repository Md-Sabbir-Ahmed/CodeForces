import java.util.Scanner;

public class Soldiers_and_Bananas {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int n= input.nextInt();
        int w = input.nextInt();
        int sum= ((w*(w+1)*k)/2);
        if (sum-n<0)
        {
            System.out.println("0");
        }
        else {
            System.out.println(sum-n);
        }
    }
    
}