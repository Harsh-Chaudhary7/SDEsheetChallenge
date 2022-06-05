#include<bits/stdc++.h>
using namespace std;

// Template

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Harsh_Chaudhary std::ios::sync_with_stdio(false);
#define H_C std::cin.tie(nullptr);

typedef long long int 				ll;
typedef vector<int>                	vi;
typedef vector<ll>                 	vl;
typedef vector<vector<int>>        	vvi;
typedef pair<int, int>             	pi;
typedef vector<pair<int, int>>      vpi;
typedef vector<pair<ll, ll>>        vpl;
typedef unordered_map<int, int>		umi;
typedef unordered_map<char, int>	ums;
typedef map<int, char>				ms;
typedef map<int, int>				mi;


#define inp(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inpv(a, n)                  for(int Ele=0; Ele<(n); Ele++){int val;cin>>val;a.push_back(val);}
#define inps(a, n, sum)             for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 	for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define max(a, b)                  	(a < b ? b : a)
#define min3(a, b, c)               ((a<b)?(a<c)? a :c :(b<c)? b: c)
#define min(a, b)                  	((a > b) ? b : a)


#define INF                        	1e18
#define lb                         	lower_bound
#define ub                         	upper_bound
#define min_element                	*min_element
#define max_element                	*max_element
#define pb 							push_back
#define ll 							long long 
#define rr return

#define mod                       (in1e9+7
#define mem(x,i) memset((x),(i),sizeof((x)))

// Template

void solve(vector<int> &perm, int n){
   int i, j;
    for(i=n-2; i>=0; i--){
        if(perm[i] < perm[i+1])
            break;
    }
    
    if(i<0){
        reverse(perm.begin(),perm.end());
    }
    
    else{
        for(j=n-1; j>=0; j--){

            if(perm[i]<perm[j])
                break;
        }
    swap(perm[i],perm[j]);    
    reverse(perm.begin()+i+1, perm.end());
    }
    

    
}

int main() {	
	fast_io
	Harsh_Chaudhary
	H_C

    int t;
    cin>>t;
    while(t!=0){
	int n;
    cin>>n;
    vector<int> perm(n);
    for(int i=0; i<n; i++){
        cin>>perm[i];
    }
	solve(perm,n);
    for(int val : perm)
        cout<<val<<" ";
    --t;
}
	

	return 0;
}



