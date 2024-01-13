#include<bits/stdc++.h>
using namespace std;




//    void bubble_sort(vector<int> &v)
//    {
//        int n = v.size();

//        for (int i = 0; i < n - 1; i++)
//        {
//            for (int j = 0; j < n - i - 1; j++)
//            {
//                if (v[j] > v[j + 1])
//                {
//                    swap(v[j], v[j + 1]);
//                }
//            }
//        }
//    }
 


//    void selection_sort(vector<int> &v)
//    {
//        int n = v.size();

//        for (int i = 0; i < n - 1; i++)
//        {
//            int min_idx = i;
//            for (int j = i + 1; j < n; j++)
//            {
//                if (v[j] < v[min_idx])
//                {
//                    min_idx = j;
//                }
//            }

//            swap(v[i], v[min_idx]);
//        }
//    }

   void insertion_sort(vector<int> &v)
   {
       int n = v.size();

       for (int i = 1; i < n; i++)
       {
           int key = v[i];
           int j = i - 1;

           while (j >= 0 && v[j] > key)
           {
               v[j + 1] = v[j];
               j--;
           }

           v[j + 1] = key;
       }
   }




// void selection_sort(vector<int> &v)
// {
//     int n=v.size();

//     for(int i=0;i<n-1;i++)
//     {
//         int min_idx=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(v[j]<v[min_idx]);
//             min_idx=j;

//         }

//         swap(v[j],v[min_idx]);





//     }
// }











// void bubble_sort(vector<int> &v)
// {
//     int n = v.size();

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (v[j] > v[j + 1])
//             {
//                 swap(v[j], v[j + 1]);
//             }
//         }
//     }
// }

int main()
{
    vector<int> v = {2, 3, 1, 6, 3, 4};
    // bubble_sort(v);
    // selection_sort(v);
    insertion_sort(v);


    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}
