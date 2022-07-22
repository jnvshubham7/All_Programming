






  int min=INT_MAX;
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    
    

   int mn=arr[0];
   stack<int>s;
   s.push(arr[0]);
   for(int i=1;i<n;i++)
   {
       if(mn<arr[i])
       {
          s.push(mn);
       }
        else
        {
            mn=arr[i];
            s.push(mn);
        }
   }
   return s;


}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{

  
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}


