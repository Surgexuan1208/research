#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h> 
using namespace std;
int a[10];
void table(){
	for(int n=0;n<3;n++){
		printf(" ----------------\n");
		for(int m=0;m<3;m++){
			if(m+3*n==0||m+3*n==3||m+3*n==6){
				if(a[m+3*n]==9){
					printf(" | █  | ");
				}else{
					printf(" | 0%d | ",a[m+3*n]);
				}	
			}else{
				if(a[m+3*n]==9){
					printf("█  | ");
				}else{
					printf("0%d | ",a[m+3*n]);
				}	
			}
		}
		printf("\n");
	}
	printf(" ----------------\n");
	return;
}
void move(int d){
	int i,b;
	for(i=0;i<=8;i++){
		if(a[i]==9)break;
	}
	if(d==1&&i!=0&&i!=1&&i!=2){
		b=a[i-3];
		a[i-3]=a[i];
		a[i]=b;
	}else if(d==2&&i!=0&&i!=3&&i!=6){
		b=a[i-1];
		a[i-1]=a[i];
		a[i]=b;
	}else if(d==3&&i!=2&&i!=5&&i!=8){
	 	b=a[i+1];
		a[i+1]=a[i];
		a[i]=b;
	}else if(d==4&&i!=6&&i!=7&&i!=8){
		b=a[i+3];
		a[i+3]=a[i];
		a[i]=b;
	}
	return;
}
int main(){
	srand(time(NULL));
	int b,i,j;
	char c;
	a[8]=9;
	for(i=1;i<=8;i++){
		do{
			a[i-1]=rand()%8+1;
			for(j=1;j<i;j++){
				if(a[i-1]==a[j-1]){
					break;	
				}
			}
		}while(j!=i);
	}
	printf("請按方向鍵移動方塊\n");
	table();
	do{
		c=getch();
		switch(c){
			case 72:
				move(1);
				break;
			case 75:
				move(2);
				break;
			case 77:
				move(3);
				break;
			case 80:
				move(4);
				break;
		}
		b=0;
		for(int k=0;k<9;k++){
			if(a[k]==k+1){
				b++;
			}
		}
		system("cls");
		printf("請按方向鍵移動方塊\n");
		table();
	}while(b!=9);	
}
