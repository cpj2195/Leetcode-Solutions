#include "essentials.cpp"

string lcp_util(string s1, string s2)
{
    string result = "";
    for (int i = 0, j = 0; i < s1.length(), j < s2.length(); i++, j++)
    {
        if (s1[i] == s2[j])
        {
            result += s1[i];
        }
        else
        {

            break;
        }
    }
    return result;
}

string lcp(vector<string> &strs)
{

    if (strs.size() == 0)
    {
        return "";
    }
    string result = strs[0];

    for (auto it = next(strs.begin()); it != strs.end(); it++)
    {
       result=lcp_util(result,*it);

        
    }
    return result;
}

int main()
{

    vector<string> v1;
    v1.push_back("geeks");
    v1.push_back("geekforgeeks");
    v1.push_back("geezer");
    v1.push_back("geetam");
    v1.push_back("geez");
    string result = "";
    result += lcp(v1);

    cout << result << endl;
    return 1;
}
