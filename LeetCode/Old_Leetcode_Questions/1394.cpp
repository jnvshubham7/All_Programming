class Solution {
public:
  int findLucky(vector<int> &arr) {

    // first create a vector
    vector<int> v;

    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++) {
      m[arr[i]]++;
    }

    // check if element is equal to frequency
    for (auto it = m.begin(); it != m.end(); it++) {
      // check if element is equal to frequency then push it in vector
      if (it->second == it->first) {
        v.push_back(it->first);
      }
    }

    // sort vector
    sort(v.begin(), v.end(), greater<int>());
    // if vector is empty then return -1
    if (v.empty()) {
      return -1;
    }
    // return maximum element
    return v[0];
























    // sort the array
    // sort(arr.begin(),arr.end(), greater<int>());

    // //store all elements in vector and make pair of element and its frequency
    // vector<pair<int,int>> v;
    // for(int i=0;i<arr.size();i++)
    // {
    //     v.push_back(make_pair(arr[i],i));
    // }

    //  //check if element is equal to frequency
    // for(int i=0;i<v.size();i++)
    // {
    //     //sort map which is greater element
    //     // if(v[i].first==v[i].second)
    //     // {
    //     //     return v[i].first;
    //     // }

    //     //also check element is maximum possible element
    //     if(v[i].first>=v[i].second)
    //     {
    //         return v[i].first;
    //     }
    // }

    // unordered_set<int> m;
    // for(int i=0;i<arr.size();i++)
    // {
    //     m.insert(arr[i]);
    // }
    // make pair with frequency

    // unordered_map<int,int> m;
    // for(int i=0;i<arr.size();i++)
    // {
    //     m[arr[i]]++;
    // }

    //

    // sort the map with respect to element first

    // sort(m.begin(),m.end());

    // check if element is equal to frequency
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     //sort map which is greater element
    //     // if(it->second==it->first)
    //     // {
    //     //     return it->first;
    //     // }

    //     //also check element is maximum possible element
    //     if(it->first>=it->second)
    //     {
    //         return it->first;
    //     }
    //     // if(it->second==it->first)
    //     // {

    //     //     return it->first;
    //     // }
    // }
    // return -1;
  }
};