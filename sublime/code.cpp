#include<bits/stdc++.h>
using namespace std;

void base()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
}

int main()
{

    base();

    double a;

    cin>>a;

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<((4/3.0)*3.14159*a*a*a)<<"\n";

}