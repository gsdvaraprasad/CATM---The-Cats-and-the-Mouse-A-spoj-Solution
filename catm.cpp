// CATM---The-Cats-and-the-Mouse-A-spoj-Solution
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,t;
	cin>>n>>m;
	cin>>t;
	while(t--)
	{
	    int m1,m2,c1,c2,C1,C2;
	    cin>>m1>>m2>>c1>>c2>>C1>>C2;
      if((abs(c1-m1)==abs(c2-m2)) && (abs(C1-m1)==abs(C2-m2))&&((c1<m1 && m1<C1)||(C1<m1 && m1<c1)))
        cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
 	    
	}
	return 0;
}
