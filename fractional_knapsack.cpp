#include<bits/stdc++.h>
using namespace std;

bool comp(vector<float> x,vector<float> y)
{
	return x[2] > y[2];
}

void knapsack(vector<vector<float> > &v, int n, int c)
{
	float t = 0;
	sort(v.begin(),v.end(),comp);
	int i=0;
	while(c>0)
	{
		if(v[i][1] <= c)
		{
			c-=v[i][1];
			t += v[i][0];
		}
		else
		{
			t += (v[i][2]*c);
			c=0;
		}
		i++;
	}
	cout<<"Total profit : "<<t<<endl;
}
				 
int main()
{
	int n,c;
	cout<<"Enter no.of items : ";
	cin>>n;
	cout<<"Enter the capacity : ";
	cin>>c;
	vector<vector<float> > vec(n,vector<float> (3,0));
	
	for(int i=0;i<n;i++)
	{
		int x,y;
		cout<<"Enter the profit : ";
		cin>>vec[i][0];
		cout<<"Enter the weight : ";
		cin>>vec[i][1];
		vec[i][2] = vec[i][0]/vec[i][1];
	}
	
	knapsack(vec,n,c);
	return 0;
}

		
