#include<string>
#include<iostream>
using namespace std;
 void target( int arr[] , int s , int t)
 {
 	int min ;

 	for(int i=0 ; i<s ;i++)
 	{
 		for( int j=i+1 ;j<s; j++)
 		{
		 
 		if(arr[i] + arr[j] == t)
 		{
 			cout<<" sum pair is "<< arr[i] <<"and "<< arr[j];
 			return;
		 }
		  
		}
		 
  	}
  	cout<< " no pair exits \n";
  }
 		
 		
		 
	

 int main()
 {
 	int arrr[]={1,17,3,12 ,4,2,4,6,7,8,};
 	 	cout<<" size of arr "<<sizeof(arrr);
 	int s = sizeof(arrr) /sizeof(arrr[0]);
 	cout<<endl<< s ;
 	target(arrr ,s , 20 );
 }
 
