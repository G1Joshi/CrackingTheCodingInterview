#include <bits/stdc++.h>
using namespace std;

bool unique(string str) {
    int arr[256]= {0};
    for(int i=0; i<str.length(); i++) {
        if(arr[str[i]])
            return false;
        arr[str[i]]++;
    }
    return true;
}

int main()
{
    string str;
    cin>>str;
    if(unique(str))
        cout<<"Unique";
    else
        cout<<"Not Unique";
    return 0;
}
