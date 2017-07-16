#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cout<<"enter the no of test cases for what u wanna check"<<endl;
cin>>t;
while(t--)
{
cout<<"enter the no of objects"<<endl;
int n;
cin>>n;
int i,j;float knapsack_capacity;float a[n],w[n],p[n],profit=0;
cout<<"enter the knapsack capacity"<<endl;
cin>>knapsack_capacity;
cout<<"enter the weights for the objects "<<endl;
for(i=0;i<n;i++)
cin>>w[i];
cout<<"enter the values corresponding their weights "<<endl;
for(j=0;j<n;j++)
cin>>p[j];
for(j=0;j<n;j++)
a[j]=float(p[j]/w[j]);
//cout<<"now the values of pi/wi are"<<endl;for(j=0;j<n;j++)cout<<a[j]<<" ";
sort(a,a+n);i=0;
while(knapsack_capacity>=0&&i<n)
{
for(j=0;j<n;j++)
{
if(a[n-1-i]==float(p[j]/w[j])){//cout<<" object no selected"<<" "<<j;
if(knapsack_capacity>=w[j]){

        //cout<<"jai sri ram"<<endl;
profit=profit+p[j];
//cout<<"p[j] is"<<p[j]<<endl;
//cout<<"profit is"<<" "<<profit;
knapsack_capacity=knapsack_capacity-w[j];
p[j]=1;w[j]=-1;
break;
}
profit=profit+knapsack_capacity*p[j]/w[j];knapsack_capacity=0;break;
}
}
//cout<<"now knapsack capacity is"<<knapsack_capacity<<endl;
i++;
}
cout<<"TOTAL PROFIT IS"<<" "<<profit;
}
return 0;

}
