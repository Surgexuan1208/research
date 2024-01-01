#include<iostream>
#include<string>
using namespace std;
class stack{
private:
	char *data;
	char *top_ptr;
	char *bottom_ptr;
	int stacksize;
public:
	stack(){
		stacksize=0;
		data=new char[0];
	}
	bool empty(){
		if(stacksize==0){
			return true;
		}else{
			return false;
		}
	}
	int size(){
		return stacksize;
	}
	void pop(string mode){
		if(stacksize>0){
			stacksize--;
			if(mode=="bottom"){
				char *copy=new char[stacksize];
				for(int i=1;i<=stacksize;i++){
					copy[i-1]=data[i];
				}
				data=copy;
				bottom_ptr=&data[0];
				top_ptr=&data[stacksize-1];
			}else{
				char *copy=new char[stacksize];
				for(int i=0;i<stacksize;i++){
					copy[i]=data[i];
				}
				data=copy;
				bottom_ptr=&data[0];
				top_ptr=&data[stacksize-1];
			}
		}
	}
	char bottom(){
		if(stacksize>0){
			return *bottom_ptr;	
		}
	} 
	char top(){
		if(stacksize>0){
			return *top_ptr;
		}
	}
	void push(char item){
		stacksize++;
		char *copy=new char[stacksize];
		for(int i=0;i<stacksize;i++){
			copy[i]=data[i];
		}
		data=copy;
		data[stacksize-1]=item;
		bottom_ptr=&data[0];
		top_ptr=&data[stacksize-1];
	}
};
class strbreaker{
private:
	char *breaker;
	int counter;
public:
	strbreaker(){
		breaker=new char[0];
	}
	void breaking(string in){
		counter=0;
		for(int i=0;i<in.length();i++){
			char *copy=new char[counter+1];
			for(int j=0;j<counter;j++){
				copy[j]=breaker[j];
			}
			breaker=copy;
			counter++;
			breaker[i]=in[i];
		}
	}
	char getvalue(int n){
		if(n>=0&&n<=counter){
			return breaker[n];
		}
	}
	int size(){
		return counter;
	}
};
int main(){
	stack stack1;
	stack stack2;
	strbreaker breaker;
	string in;
	cout<<"輸入一串英文字串:";
	getline(cin,in);
	breaker.breaking(in);
	for(int i=0;i<breaker.size();i++){
		stack1.push(breaker.getvalue(i));
		stack2.push(breaker.getvalue(i));
	}
	int size=stack1.size();
	cout<<"先進後出:"<<endl; 
	for(int i=0;i<size;i++){
		cout<<stack1.top()<<endl;
		stack1.pop("top");
	}
	cout<<"先進先出:"<<endl;
	for(int i=0;i<size;i++){
		cout<<stack2.bottom()<<endl;
		stack2.pop("bottom");
	}
}
