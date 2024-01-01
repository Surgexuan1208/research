#include<iostream>
#include<string>
#include<vector>
#include"linked-array.h"
using namespace std;
void testBag(LinkedBag<string> *bagPtr){
	string item[]={"aa","bb","cc"};
	for(int i=0;i<3;i++){
		bagPtr->add(item[i]);
	}
	cout<<bagPtr->isEmpty()<<endl;
	cout<<bagPtr->getCurrentSize()<<endl;
	bagPtr->remove("bb");
	cout<<bagPtr->isEmpty()<<endl;
	cout<<bagPtr->getCurrentSize()<<endl;
	vector<string>str=bagPtr->toVector();
	for(int i=0;i<str.size();i++){
		cout<<str[i]<<" ";		
	}
}
int main(){
	LinkedBag<string> *bagPtr=nullptr;
	bagPtr=new LinkedBag<string>();
	testBag(bagPtr);
	delete bagPtr;
	bagPtr=nullptr;
}
