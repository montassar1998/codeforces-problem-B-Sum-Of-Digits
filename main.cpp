#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    int sum=0;
    int it=0;
    while(ch.length()!=1){
        for(int i=0;i<ch.length();i++){
            sum+=ch[i]-48;
        }
        ch=to_string(sum);
        sum=0;
        it++;
    }
    cout<<it<<'\n';
    return 0;
}
