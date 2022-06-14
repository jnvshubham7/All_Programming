class Solution {
public:
    int calPoints(vector<string>& ops) {

        vector<int> v;


        //if interger found then push back that number in v 

        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
            {
                v.pop_back();
            }
            else if(ops[i]=="D")
            {
                v.push_back(v.back()*2);
            }
            else if(ops[i]=="+")
            {
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else
            {
                v.push_back(stoi(ops[i]));
            }
        }

        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        return sum;


        
        
    }
};