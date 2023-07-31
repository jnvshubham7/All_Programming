/*
 * @lc app=leetcode id=990 lang=cpp
 *
 * [990] Satisfiability of Equality Equations
 */

// @lc code=start
class Solution {
public:

    bool equationsPossible(vector<string>& e) {

        int n = e.size();
        vector<int> p(26);
        for (int i = 0; i < 26; i++) p[i] = i;


        //print p   
        
        // for(auto it:p)
        // {
        //     cout<<it<<" ";
        // }



        for (int i = 0; i < n; i++) {
            if (e[i][1] == '=') {
                int x = e[i][0] - 'a';
                int y = e[i][3] - 'a';

                cout<<x<<" "<<e[i][0]<<" "<<y<<" "<<e[i][3]<<endl;
                p[find(p, x)] = find(p, y);
            }
        }
        for (int i = 0; i < n; i++) {
            if (e[i][1] == '!') {
                int x = e[i][0] - 'a';
                int y = e[i][3] - 'a';

                cout<<x<<" "<<e[i][0]<<" "<<y<<" "<<e[i][3]<<endl;
                if (find(p, x) == find(p, y)) return false;
            }
        }
        return true;

    }

    int find(vector<int>& p, int x) {
        if (p[x] != x) p[x] = find(p, p[x]);
        return p[x];
    }

    


};
// @lc code=end































//  int n = equations.size();
       
//         for(int i=0;i<26;i++)
//         {
//             par[i]=i;
//         }

//         for(string e : equations)
//         {
//             if(e[1]=='=')
//             {
//                 int x = e[0]-'a';
//                 int y = e[3]-'a';
//                 union_find(x,y);
//             }
//         }
//         for(string e : equations)
//         {
//             if(e[1]=='!')
//             {
//                 int x = e[0]-'a';
//                 int y = e[3]-'a';
//                 if(find(x)==find(y))
//                 {
//                     return false;
//                 }
//             }
//         }


        // for(int i=0;i<n;i++)
        // {
        //     if(equations[i][1]=='=')
        //     {
        //         int x=equations[i][0]-'a';
        //         int y=equations[i][3]-'a';
        //         int xpar=find(x);
        //         int ypar=find(y);
        //         par[xpar]=ypar;
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(equations[i][1]=='!')
        //     {
        //         int x=equations[i][0]-'a';
        //         int y=equations[i][3]-'a';
        //         int xpar=find(x);
        //         int ypar=find(y);
        //         if(xpar==ypar)
        //         {
        //             return false;
        //         }
        //     }
        // }
        // return true;
       
        







//  void union_find(int x,int y)
//     {
//         int xpar=find(x);
//         int ypar=find(y);
//         par[xpar]=ypar;
//     }

//     int find(int x) {
//         if (par[x] == x) {
//             return x;
//         }
//         return par[x] = find(par[x]);
//     }