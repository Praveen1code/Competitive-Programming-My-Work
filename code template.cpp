               /**
                    Name -  Praveen Prajapati 
                    Roll no.-(IPG-2015-066)
                    Indian Institute of Information Technology and Management ,Gwalior (M.P.)
              **/
 
 
 
using namespace std;
typedef long long ll;
#include<bits/stdc++.h>
#define inf 1000000000000000
#define MAX  1000001
#define mod  1000000007
#define T()                  ll t; cin>>t; while(t--)
#define lb unsigned long long
#define  a_A(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define  A_a(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define  min_pos(a)  min_element(a.begin(),a.end())-a.begin()
#define  max_pos(a)  max_element(a.begin(),a.end())-a.begin()
#define  max_el(a)   *max_element(a.begin(),a.end())
#define  min_el(a)   *min_element(a.begin(),a.end())
#define  cnt(a,l)    count(a.begin(),a.end(),l)
#define  sort_a(a)   sort(a.begin(),a.end());
#define  sort_d(a)   sort(a.begin(),a.end(),greater<ll>())
#define  lower_b(v,l)   lower_bound (v.begin(), v.end(), l)
#define  upper_b(v,l)   upper_bound (v.begin(), v.end(), l)
#define  summ(a)  accumulate(a.begin(),a.end(),0);
#define p_b push_back
#define p_f push_front
#define m_p make_pair
#define po_f pop_front()
#define po_b pop_back()
#define a_e add_edge
#define L  length()
#define S size()
#define c1 cout<<"-1\n"
#define fr first
#define sc second
#define ins insert
#define B begin()
#define E end()
#define Ai 47
#define ai 97
typedef long long ll;           typedef pair<ll, ll> ipair ;   typedef vector<ll> vi;   typedef map<string, ll> msi;
typedef vector<ipair> vii;          typedef set<ll> si;          typedef vector<ipair> vpi;
ll i,j,k,x_gcd=0,y_gcd,Gcd=0;
vector <bool> prime(MAX,true);
list<pair<ll,ll> >:: iterator i_lp;
list<ll>:: iterator i_ls;
vector<ll>:: iterator i_v;
vector<ll> spf(MAX);
string binary;
//ll fib[MAX]={0};
/*int_to_binary*/string  conv_bin( ll n){ if (n / 2 != 0) {    conv_bin(n / 2);} return  binary+=char(48+n%2);}
/*digit sum*/inline int digsum(ll n){ int sum = 0; n=abs(n); while(n>0){ sum += n%10 ; n /=10; } return sum; }
/*fast I/O*/inline void fastsc(ll &x){register ll c=getchar();x=0;bool neg=0;for(;((c<48||c>57)&&c!='-');c=getchar());if(c=='-'){neg=1;c=getchar();}for(;c>47&&c<58;c=getchar()){x=(x*10)+(c-48);}if(neg)x=-x;}
/*palindrome check*/inline bool ispalin(string s) { for(int i=0,j=s.size()-1;i<=j;i++,j--) if(s[i]!=s[j]) return false; return true; }
/*is power two*/bool ispow2(ll x){ return x && (!(x&(x-1))); }
void inline extend_gcd(ll a, ll b) {  if(b == 0) { Gcd = a; x_gcd = 1; y_gcd = 0; } else { extend_gcd(b, a%b);  ll temp = x_gcd; x_gcd = y_gcd; y_gcd = temp - (a/b)*y_gcd; } }
/*binary_searh*/ inline ll b_Search(vector<ll> arr, ll l, ll r, ll x) { if (r >= l) { ll mid = l + (r - l)/2; if (arr[mid] == x)  return mid;  if (arr[mid] > x) return b_Search(arr, l, mid-1, x); return b_Search(arr, mid+1, r, x);} return -1; }
/*gcd*/ inline ll gcd(ll a,ll b)  { if(a==0) return b; return gcd(b%a,a); }
/*is_prime*/ inline ll is_prime(ll n ) { for(ll i=2;i<=sqrt(n);i++) { if(n%i==0) return 0;  } return 1; }
/*sieve*/ inline void Sieve_p(ll n) {  for (ll p=2; p*p<=n; p++) {   if (prime[p] == true) {  for (ll i=p*2; i<=n; i += p) prime[i] = false; }  } }
/*sieve_f*/ inline void sieve_f() { spf[1] = 1; for (ll i=2; i<MAX; i++) spf[i] = i; for (ll i=4; i<MAX; i+=2) spf[i] = 2; for (ll i=3; i*i<MAX; i++) {  if (spf[i] == i) { for (ll j=i*i; j<MAX; j+=i) if (spf[j]==j) spf[j] = i; } } }
/*power*/ inline ll pwr(ll x, ll y){   ll temp;  if( y == 0) return 1; temp = pwr(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*pwr_mod*/ inline int pwr_mod(ll x, ll y, ll p) {   ll res = 1;    x = x % p;   while (y > 0) {   if (y & 1) res = (res*x) % p; y = y>>1;  x = (x*x) % p;  }  return res; }
/*str_to_int*/inline ll s_int(string a) { ll p=0; for(i=0;i<a.S;i++){ p+=(a[i]-48); if(i!=a.S-1) p=p*10; } return p; }
/*modulo inverse _p*/ll mod_inv_p(ll n, ll m){ return pwr_mod(n, m-2, m); }
/*modulo inverse _no_p*/ll mod_inv(ll A, ll M){ extend_gcd(A,M); return (x_gcd%M+M)%M;}    //x may be negative
//*nCr%m*---/* m is prime*/ll nCrp(ll n, ll k, ll m){ return (fact[n]*((mod_inv_p(fact[k],m)*mod_inv_p(fact[n-k],m))%m)%m;)}
///*fibonnaci nth term*/ll fib(ll n){ if (n == 0) return 0; if (n == 1 || n == 2) return (f[n] = 1); if (f[n]) return f[n]; ll k = (n & 1)? (n+1)/2 : n/2; f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1)): (2*fib(k-1) + fib(k))*fib(k); return f[n];}
//================================================================================================================================//

int main()
{




return 0;
}


