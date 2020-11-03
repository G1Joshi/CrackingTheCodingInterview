#include <bits/stdc++.h>
using namespace std;

bool permutation(string s, string t) {
    if(s.length()!=t.length())
        return false;
    int arr[128]= {0};
    for(int i=0; i<s.length(); i++) {
        arr[s[i]]++;
        arr[t[i]]--;
    }
    for(int i=0; i<128; i++)
        if(arr[i])
            return false;
    return true;
}

int main()
{
    string s, t;
    cin>>s>>t;
    if(permutation(s, t))
        cout<<"Permutation";
    else
        cout<<"Not Permutation";
    return 0;
}
