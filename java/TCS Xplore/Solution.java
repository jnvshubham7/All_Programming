import java.util.Scanner;

class Solution {





    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        String ans = "";

        // char[] ch = str.toCharArray();

        for(int i=1;i<str.length();i+=2)
        {
            ans+=str.charAt(i);

        }

        // return ans;

        System.out.println(ans);









       
    }
}


