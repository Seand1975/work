import java.text.NumberFormat;

import java.util.Scanner;

public class Mortgage {
    public static void main(String[] arg) {

        // user input for values needed to calculate mortgage

        Scanner scanner = new Scanner(System.in);
        System.out.print("Principal: ");
        double principal_amount = scanner.nextDouble();
        System.out.print("Annual Interest Rate : ");
        double yearly_interest_rate = scanner.nextDouble();
        System.out.print("Loan Period: ");
        int loan_period = scanner.nextInt();

        int number_of_payments = loan_period * 12;

        double rate = yearly_interest_rate / 100 / 12;

        double numerator = rate * (Math.pow((1 + rate), number_of_payments));
        double denominator = (Math.pow((1 + rate), number_of_payments)) - 1;

        double mortgage = principal_amount * (numerator / denominator);

        NumberFormat currency = NumberFormat.getCurrencyInstance();
        System.out.println(currency.format(mortgage));
    }
}
