/*
  _    _                 _ _         _____                          _
 | |  | |               | | |       / ____|                        | |
 | |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
 |  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
 | |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
 |_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

			pausing is not losing
*/

/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define infinity 2'000'000'000
#define sz(x) int(x.size())
#define numOfOnes(n) __builtin_popcount(n)
const int MAX=100;
int bird[MAX];
int main() {
    IAMTRYINGandCRYING;
    //5 ==> num of boxes
    //10 10 10 10 10 ==> every box have 10 bird
    //5 ==> we'll kill 5 birds only
   // assume :
   // 3            5           2
   // 1 2 3     1 2 3 4 5     1 2
   // assume :
   // 2 4 ==> kill the 4th bird in box 2

   // result:
    // 3            5           2
    // 1 2 3     1 2 3 4 5     1 2
    //                 |
    // 1 2 3 - 1 2 3    x     5 1 2
    // sum : 6          0       3



    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>bird[i];
    int m; cin>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        --x; //the input of x is 1 based. we need it 0-based to access array.

        if(x !=0)
            bird[x-1]+=y-1; // if there no upper wires, the fly away.
        if(x!=n-1)
            bird[x+1]+=bird[x]-y; //jump down
        bird[x]=0; // zero the arr of birds
    }
    for(int i=0;i<n;i++) cout<<bird[i]<<endl;
}*/









/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define infinity 2'000'000'000
#define sz(x) int(x.size())
#define numOfOnes(n) __builtin_popcount(n)
const int MAX=100;
int bird[MAX];
int main() {
    IAMTRYINGandCRYING;
    cout << "2*4+1 = " << 2*4+1 << "\n";
    cout << "12/3 = " << 12/3 << "\n\n";
}

*/














