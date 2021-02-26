#include "iostream"
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so phan tu cho mang: ";
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap gia tri cho phan tu thu "<<i<<":";
		cin>>M[i];
	}
	cout<<"Mang sau khi nhap :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"] = "<<M[i]<<"\t";
	}
	cout<<"\nMang duoc dao thanh: "<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<M[i]<<"\t";
	}
	return 0;
}