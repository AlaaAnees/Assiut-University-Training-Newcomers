/*
  _    _                 _ _         _____                          _
 | |  | |               | | |       / ____|                        | |
 | |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
 |  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
 | |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
 |_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

			pausing is not losing
*/

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define allr(s) s.rbegin(),s.rend()  //sorting from the biggest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define fixed(n) cout << fixed << setprecision(n)
#define test int t;cin>>t;while(t--)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
#define sz(x) int(x.size())
/* @burnout: use logarithm if you want to compare two products
* @burnout: a-z : 97-122
@burnout: A-Z : 65-90
@burnout: 0-9 : 48-57*/


int main() {
    IAMTRYINGandCRYING;
   /* // got TLE
    ll n; cin>>n;
    string s; cin>>s;
    sort(s.begin(),s.end());
    cout<<s;*/
    int n; cin>>n;
    int frq[26]={0};
    char c;
    for(int i=0;i<n;i++){
        cin>>c;
        frq[c-'a']++;
    }
    for(int i=0;i<26;i++){
        //for(int j=0;j<frq[i];j++) cout<< (char)('a' + i);
        while(frq[i]--) cout<< (char)('a' + i);
    }

}