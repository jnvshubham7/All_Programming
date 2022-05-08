class Solution {
public:
    int largestInteger(int num) 
    {

        //every digit of num will put unordered_map with postion

      unordered_map<int,int> m;

        int i=0;

        while(num>0)
        {
            m[i]=num%10;
            num=num/10;
            i++;
        }

        //reverse in map

        for(int i=0;i<m.size()/2;i++)
        {
            int temp=m[i];
            m[i]=m[m.size()-i-1];
            m[m.size()-i-1]=temp;
        }



        // int ans=0;

        // for(int i=0;i<m.size();i++)
        // {
        //     ans=ans*10+m[i];
        // }

        // return ans;






        //check ith element is greater than i+2th element then swap ith and i+2th element

        for(int i=0;i<m.size();i++)
        {

            if(i%2==0){
            if(i+2<m.size() && m[i]<m[i+2])
            {
                swap(m[i],m[i+2]);
            }

            }
        }


          for(int i=0;i<m.size();i++)
        {
            

            if(i%2!=0 && m.size()>3){
           if(i+2<m.size() && m[i]<m[i+2])
            {
                swap(m[i],m[i+2]);
            }

            }
        }



//return final number from unordered_map

        int ans=0;

        for(int i=0;i<m.size();i++)
        {
            ans=ans*10+m[i];
        }

       return ans;


        //store num in vector
        // vector<int> v;
        // while(num>0)
        // {
        //     v.push_back(num%10);
        //     num=num/10;
        // }

     //   check if ith digit is less then i+2th digit then swap

        // for(int i=0;i<v.size()-1;i++)
        // {

        //     if(i%2==0)
        //     {
        //         if(v[i]<v[i+1])
        //         {
        //             swap(v[i],v[i+1]);
        //         }
        //     }
          
        // }

        //convert vector to int
        // int ans=0;
        // for(int i=0;i<v.size();i++)
        // {
        //     ans=ans*10+v[i];
        // }

        // return ans;
      


        



        //You are given a positive integer num. You may swap any two digits of num that have the same parity (i.e. both odd digits or both even digits).

//Return the largest possible value of num after any number of swaps.


//check if num[i]<num[i+2]  then swap  num[i] and num[i+2]

// for(int i=0;i<num;i++){
//     if(num[i]<num[i+2]){
//         swap(num[i],num[i+2]);
//     }

// }

// //check if num[+1]<num[i+3]  then swap  num[i+1] and num[i+3]

// for(int i=0;i<num;i++){
//     if(num[i+1]<num[i+3]){
//         swap(num[i+1],num[i+3]);

//     }}

//     return num;

//check if ith digit is less then i+2th digit then swap






        
    }
};