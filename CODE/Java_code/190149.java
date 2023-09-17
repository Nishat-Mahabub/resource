import java.util.Scanner;

class man {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        // number checking programm
        int n;
        n=input.nextInt();
        if(n<0){
            System.out.println("Negative");
        }
        else{
            System.out.println("Positive");
        }
        //chech weather a number leap year or not
        int year;
        year= input.nextInt();
        if((year%100==0 &&  year%400==0) || year%4==0){
            System.out.println(year + " is leap year");
        }
        else{
            System.out.println(year + " is not leap year");

        }
        // sum of all digits in the number
        int num;
        num = input.nextInt();
        int sum=0;
        while(num!=0){
            sum+= num%10;
            num/=10;
        }
        System.out.println(sum);
        input.close();
    }
}