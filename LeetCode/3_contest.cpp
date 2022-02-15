


    string convertToWords(long n) {



 string convertToWords(long n) {
        // code here
        string ones[10]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
        string tens1[10]={"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
        string tens2[10]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
        string bigger[4]={"hundred","thousand ","lakh ","crore "};
        int i=0;
        string ans="";
        int f=0,hundred;
        while(n>0){
            string s1="";
            int one=n%10;
            n/=10;
            int ten=n%10;
            n/=10;
            if(ten==0){
                s1=ones[one];
            }
            else{
                if(ten==1){
                    s1=tens1[one];
                }
                else{
                    s1=tens2[ten]+ones[one];
                }
            }
            if(i==0){
                hundred=n%10;
                n=n/10;
            }
            if(i==0 && hundred!=0){
                if(s1.size()>1)s1=ones[hundred]+"hundred and "+s1;
                else{
                    s1=ones[hundred]+"hundred ";
                }
                f=1;
             }
            else if(i>=1 and s1.size()>1){
                if(f==1)s1=s1+bigger[i];
                else{
                    s1=s1+bigger[i]+"and ";
                    f=1;
                }
            }
            ans=s1+ans;
            i++;
            
        }
        
        return ans;
    }











        //convert a given number into words.
        //eg: 123 -> one hundred and twenty three
    //     unordered_map<long, string> m;
    //     m[0] = "";
    //     m[1] = "one";
    //     m[2] = "two";
    //     m[3] = "three";
    //     m[4] = "four";
    //     m[5] = "five";
    //     m[6] ="six";
    //      m[7] = "seven";

    //     m[8] = "eight";
    //     m[9] = "nine";
    //     m[10] = "ten";
    //     m[11] = "eleven";
    //     m[12] = "twelve";
    //     m[13] = "thirteen";
    //     m[14] = "fourteen";
    //     m[15] = "fifteen";
    //     m[16] = "sixteen";
    //     m[17] = "seventeen";
    //     m[18] = "eighteen";
    //     m[19] = "nineteen";
    //     m[20] = "twenty";
    //     m[30] = "thirty";
    //     m[40] = "forty";
    //     m[50] = "fifty";
    //     m[60] = "sixty";
    //     m[70] = "seventy";
    //     m[80] = "eighty";
    //     m[90] = "ninety";
    //     m[100] = "hundred";
    //     m[1000] = "thousand";
    //    //1 lakh
    //     m[100000] = "lakh";
    //     // 10 lakh
    //     m[10000000] = "crore";
    //     //1 crore

    //     string res;

    //     if(n==0) 
    //     res="zero";

    //     while(n>0){
    //         if(n%100000>0){
    //             res = m[n%100000] + " " + res;
    //             if(n%100000==1)
    //                 res = "one " + res;
    //             n = n/100000;
    //             if(n>0)
    //                 res = m[n] + " " + res;
    //         }
    //         else if(n>0){
    //             res = m[n] + " " + res;
    //             n = 0;
    //         }
    //     }
    //     return res;

       

    



        





       


      
       





       

        // code here
    }
    
    
    
    
    
    