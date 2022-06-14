class Solution {
public:
  string single_digits[20] = {"Zero",    "One",       "Two",      "Three",
                              "Four",    "Five",      "Six",      "Seven",
                              "Eight",   "Nine",      "Ten",      "Eleven",
                              "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
                              "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

  string tens_multiple[10] = {"",      "",      "Twenty",  "Thirty", "Forty",
                              "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

  string generate(int num) {
    string ans = "";
    int number = num / 100;
    if (number != 0)
      ans += single_digits[number] + " " + "Hundred ";
    number = num % 100;

    if (number >= 20) {
      if (num % 10 != 0)
        ans +=
            tens_multiple[number / 10] + " " + single_digits[number % 10] + " ";
      else
        ans += tens_multiple[number / 10] + " ";
    } else {
      if (number == 0)
        return ans;
      ans += single_digits[number] + " ";
    }

    return ans;
  }

  string numberToWords(int num) {
    if (num == 0)
      return "Zero";
    string ans = "";
    bool flag = false;
    int number = num / 1000000000;
    if (number != 0)
      ans += single_digits[number] + " " + "Billion ";
    num = num % 1000000000;

    number = num / 1000000;
    if (number != 0)
      ans += generate(number) + "Million ";
    num = num % 1000000;

    number = num / 1000;
    if (number != 0)
      ans += generate(number) + "Thousand ";
    num = num % 1000;

    ans += generate(num);

    ans.pop_back();
    return ans;












































    //     string numtoword(int digit) //this function return number < 100 to
    //     string
    // 	{
    //     if (digit == 1) return "One";
    //     if (digit == 2) return "Two";
    //     if (digit == 3) return "Three";
    //     if (digit == 4) return "Four";
    //     if (digit == 5) return "Five";
    //     if (digit == 6) return "Six";
    //     if (digit == 7) return "Seven";
    //     if (digit == 8) return "Eight";
    //     if (digit == 9) return "Nine";
    //     if (digit == 10) return "Ten";
    //     if (digit == 11) return "Eleven";
    //     if (digit == 12) return "Twelve";
    //     if (digit == 13) return "Thirteen";
    //     if (digit == 14) return "Fourteen";
    //     if (digit == 15) return "Fifteen";
    //     if (digit == 16) return "Sixteen";
    //     if (digit == 17) return "Seventeen";
    //     if (digit == 18) return "Eighteen";
    //     if (digit == 19) return "Nineteen";
    //     if (digit >= 90) return "Ninety";
    //     if (digit >= 80) return "Eighty";
    //     if (digit >= 70) return "Seventy";
    //     if (digit >= 60) return "Sixty";
    //     if (digit >= 50) return "Fifty";
    //     if (digit >= 40) return "Forty";
    //     if (digit >= 30) return "Thirty";
    //     if (digit >= 20) return "Twenty";
    //     return{};

    // }
    //      string numberToWords(int num) {
    //         string str;
    //     if(num==0) //check if the input is 0
    //     {
    //         str="Zero";
    //         return str;
    //     }
    //      if(num/1000000000>0) // check the billion then return the function
    //      itself to return < 1000000000;
    //      {
    //          int a=num/1000000000;
    //          str=numberToWords(a)+" Billion ";
    //          num=num-a*1000000000;
    //      }
    //     if(num/1000000>0) // check the million then return the function
    //     itself to return < 1000000;
    //     {
    //         int b=num/1000000;
    //         str=str+numberToWords(b)+" Million ";
    //         num=num-b*1000000;
    //     }
    //     if(num/1000>0) // check the thousand then return the function itself
    //     to return < 1000;
    //     {
    //         int c=num/1000;
    //         str=str+numberToWords(c)+" Thousand ";
    //         num=num-c*1000;

    //     }
    //     if(num/100>0) //hundred, we use the above function to return < 999
    //     value
    //     {
    //         int d=num/100;
    //         str=str+numtoword(d)+" Hundred ";
    //         num=num-d*100;

    //     }
    //     if(num>20)
    //     {
    //         int e=num/10;
    //         str=str+numtoword(num);
    //         if(num%10 != 0)
    //         {
    //         num=num-e*10;
    //         str=str+' '+numtoword(num);
    //         }
    //     }
    //     else str=str+numtoword(num);
    //     int last=str.size()-1;
    //     if(str[last]==' '){
    //         str.erase(last,1);  // delete the space of the string
    //     }
    //     return str;
    // }
    // };

    // class Solution {
    // public:
    //     string numberToWords(int num) {

    //         unordered_map<int,string> m;
    //         m[0]="";
    //         m[1]="one";
    //         m[2]="two";
    //         m[3]="three";
    //         m[4]="four";
    //         m[5]="five";
    //         m[6]="six";
    //         m[7]="seven";
    //         m[8]="eight";
    //         m[9]="nine";
    //         m[10]="ten";
    //         m[11]="eleven";
    //         m[12]="twelve";
    //         m[13]="thirteen";
    //         m[14]="fourteen";
    //         m[15]="fifteen";
    //         m[16]="sixteen";
    //         m[17]="seventeen";
    //         m[18]="eighteen";
    //         m[19]="nineteen";
    //         m[20]="twenty";
    //         m[30]="thirty";
    //         m[40]="forty";
    //         m[50]="fifty";
    //         m[60]="sixty";
    //         m[70]="seventy";
    //         m[80]="eighty";
    //         m[90]="ninety";
    //         m[100]="hundred";
    //         m[1000]="thousand";
    //        //millionre

    //        m[1000000]="million";
    //          m[10000000]="crore";
    //             m[100000000]="billion";

    //         string res;

    //         //if(num==0)
    //         //    res="zero";
    //         //if(num==123456789)
    //         //    res="one hundred twenty three million four hundred fifty
    //         six thousand seven hundred eighty nine";

    //         while(num>0){
    //             if(num%1000000>0){
    //                 res = m[num%1000000] + " " + res;
    //                 if(num%1000000==1)
    //                     res = "one " + res;
    //                 num = num/1000000;
    //                 if(num>0)
    //                     res = m[num] + " " + res;
    //             }
    //             else if(num>0){
    //                 res = m[num] + " " + res;
    //                 num = 0;
    //             }
    //         }
    //         return res;
  }
};