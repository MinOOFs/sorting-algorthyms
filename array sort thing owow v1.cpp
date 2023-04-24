#include  <iostream>
using namespace std;

int main (){
	int i;
	int j;
	int temp;
	int N = 10;
	
	int arr[N]={45,94,4,37,62,75,47,59,1,8};
	cout << "niet gesorteerde array: \n";
	for(int i=0;i<N;i++){
		cout<<arr[i] << " " ;
	}
	cout<< endl;
			
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if(arr[j]<arr[i]){
					temp=arr[i];
					arr[i] =arr[j];
					arr[j]=temp;
				}
			}
			cout << "stap "<< i+1 << endl;
			for(int i=0;i<N;i++){
			cout << arr[i] << " " ; 
			}
		cout << endl << endl;
		}
		cout << "gesorteerde array:" << endl;
		for(i=0;i<N;i++){
			cout<<arr[i]<< " ";
		}
		return 0;
}
