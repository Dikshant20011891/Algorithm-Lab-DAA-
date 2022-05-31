#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> x,vector<int> y)
{
	return x[1] < y[1];
}

void act_sec(vector<vector<int> > vec,int n)
{
	sort(vec.begin(),vec.end(),comp);
	int c = 0;
	for(int i=0;i<n-1;i++)
	{
		if(vec[i+1][0]>=vec[i][1])
		{
			c++;
		}
	}
	cout<<"Maximum value : "<<c;
}
	
int main()
{
	int n;
	cout<<"Enter the size : ";
	cin>>n;
	vector<vector<int> > vec(n,vector<int> (2,0));
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter start time : ";
		cin>>vec[i][0];
		cout<<"Enter start time : ";
		cin>>vec[i][1];
	}
	
	act_sec(vec,n);
}

