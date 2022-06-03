#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> x,vector<int> y)
{
	return x[1] < y[1];
}

void act_sec(vector<vector<int> > vec,int n)
{
	sort(vec.begin(),vec.end(),comp);
	int c = 1;
	int x = vec[0][1];
	cout<<"Sequence of Activiy : "<<vec[0][2]<<" ";
	for(int i=1;i<n;i++)
	{
		if(x<=vec[i][0])
		{
			c++;
			x = vec[i][1];
			cout<<vec[i][2]<<" ";
		}
	}
	cout<<"\nMaximum value : "<<c;
}
	
int main()
{
	int n;
	cout<<"Enter the size : ";
	cin>>n;
	vector<vector<int> > vec(n,vector<int> (3,0));
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter start time : ";
		cin>>vec[i][0];
		cout<<"Enter finish time : ";
		cin>>vec[i][1];
		vec[i][2] = i;
	}
	
	act_sec(vec,n);
}
