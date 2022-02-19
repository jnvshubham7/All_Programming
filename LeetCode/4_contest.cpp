
        vector <int> search(string pat, string txt)
        {


            //store txt in unordered_map with index 
            unordered_map<char, vector<int>> m;
            for (int i = 0; i < txt.size(); i++)
            {
                m[txt[i]].push_back(i);
            }

            //check if pat is present in txt then return index of first char of every occurence
            vector<int> ans;
            for (int i = 0; i < pat.size(); i++)
            {
                if (m.find(pat[i]) != m.end())
                {
                    for (int j = 0; j < m[pat[i]].size(); j++)
                    {

                        //check if pat is present in txt
                        if (txt.substr(m[pat[i]][j], pat.size()) == pat)
                        {
                            ans.push_back(m[pat[i]][j]+1);
                        }



                        // if (i == 0)
                        // {
                        //     ans.push_back(m[pat[i]][j]);
                        // }
                        // else
                        // {
                        //     if (m[pat[i]][j] - m[pat[i - 1]][j] == 1)
                        //     {
                        //         ans.push_back(m[pat[i]][j]);
                        //     }
                        // }
                    }
                    
                }
                break;
            }
            return ans;
           


            // vector <int> res;
            // int m = pat.size();
            // int n = txt.size();
            // int i = 0;
            // int j = 0;
            // while (i < n && j < m)
            // {
            //     if (txt[i] == pat[j])
            //     {
            //         i++;
            //         j++;
            //     }
            //     else
            //     {
            //         i = i - j + 1;
            //         j = 0;
            //     }
            // }



            //code hee.
        }