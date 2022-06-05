class Solution {
public:
    int countOperations(int num1, int num2) {
long long count=0;

//In one operation, if num1 >= num2, 
//you must subtract num2 from num1, otherwise subtract num1 from num2.








//Return the number of operations required to make either num1 = 0 or num2 = 0.





      while(num1!=0 ){
        if(num1>=num2 ){
          num1=num1-num2;
          count++;
          
        }
        else {
          num2=num2-num1;
          count++;
          // if(num2==0)
          // break;
        }

        if(num1==0 || num2==0){
          break;
        }


      }
      return count;
        
    }
};