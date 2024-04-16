// //other method
// #include<iostream>
// using namespace std;

// int main()
// {
// 	int n,i;
// 	cout<<"ENter the num"<<endl;
// 	cin>>n;
	
// 	int a[n];
// 	for(i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int key;
// 	cout<<"enter the key"<<endl;
// 	cin>>key;
// 	bool flag=false;
// 	for(i=0;i<n;i++){
		
// 		if(a[i]==key)
// 		{   flag=true;
// 				cout<<"Key found"<<endl;
// 			break;
// 		}
		
// 	}
// 	if(flag==false){
// 		cout<<"not found"<<endl;
// 	}
// 	//cout<<"not found";	
// 	return 0;
// }


#include<iostream>
using namespace std;
int main()
{
	int  number ;
	cout<<"Enter the size of array"<<endl;
	cin>>number;

	int arr[number];
	cout<<"Enter the  array element"<<endl;
	for(int i=0;i<=number;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the key "<<endl;
	cin>>key;
	bool flag=false;
	for(int i=0;i<=number;i++){
		if(key==arr[i]){
		   flag=true;
		   cout<<"Key is present";
		   break;
		}
	}
	if(flag=false){
		cout<<"key not found";
	}

return 0;
}