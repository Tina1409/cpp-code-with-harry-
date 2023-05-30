#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	//FUNCTION OBJECTS (FUNCTORS): function wrapped in a class so that it is available like an object
	int arr[] = {1,3,4,13,77,0,45};
	sort(arr,arr+7);
	sort(arr,arr+7,greater<int>()); //for sort in descending order
	for(int i=0;i<7;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
