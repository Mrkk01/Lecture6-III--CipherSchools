#include<iostream>
using namespace std;
int main(){
	int input,i;
	cout<<"Guess the number"<<endl;
	cout<<"Note:"<<endl;
	cout<<"1.The number is from 1 to 10"<<endl;
	cout<<"2.you have only four chances"<<endl;
	for(i=0;i<4;i++){
		cin>>input;
		if(input==7){
			cout<<"Congratulations you won 7 rupees";
			break;
		}
		}
		if(input!=7){
			cout<<"Better luck next time";
		}
	}
