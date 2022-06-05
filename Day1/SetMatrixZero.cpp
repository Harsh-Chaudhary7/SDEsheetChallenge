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

void solve(vector<vector<int>> &matrix) {
int n = matrix.size();
    int m = matrix[0].size();    
    int col=1;
    
    for(int i=0; i<n; i++){
        if(matrix[i][0]==0)
            col = 0;
        for(int j=1; j<m; j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }                
        }
    }
    
    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=1; j--){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;            
            }
        }
        if(col == 0)
            matrix[i][0] = 0;
    }
}

int main() {	
	fast_io
	Harsh_Chaudhary
	H_C

	vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
	solve(matrix);
	for (int i = 0; i < matrix.size(); i++) {
    	for (int j = 0; j < matrix[0].size(); j++) {
      		cout << matrix[i][j] << " ";
 		}
 		cout<<endl;
	}

	return 0;
}



