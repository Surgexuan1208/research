#include<iostream>
#include<conio.h> 
int score=1,step=0,a[10][10];
void levelset(int level){
	if(level==1){
		int b[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,9,1,1,2,1,1,1,3,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
			a[n][m]=b[n][m];
			}
		}
	}else if(level==2){
		int c[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,0,1,1,1,1,0,
			0,9,0,1,0,1,1,0,1,0,
			0,0,0,1,0,1,0,1,1,0,
			0,1,1,1,2,1,1,1,3,0,
			0,1,1,1,1,1,0,0,0,0,
			0,0,0,0,1,1,2,1,1,0,
			1,1,1,0,0,1,1,1,1,0,
			1,1,1,0,0,1,1,1,1,0,
			1,1,1,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=c[n][m];
			}
		}		
	}else if(level==3){
		int d[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,3,0,
			0,1,0,0,0,0,0,0,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,1,0,2,1,0,1,1,0,
			0,1,2,0,1,2,0,1,1,0,
			0,1,1,1,1,1,2,1,1,0,
			0,1,0,0,0,0,0,0,1,0,
			0,9,1,1,1,1,1,1,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=d[n][m];
			}
		}		
	}else if(level==4){
		int e[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,2,1,1,2,1,2,1,0,
			0,1,1,1,1,0,1,1,1,0,
			0,9,1,1,2,1,1,1,1,0,
			0,1,1,0,1,2,1,0,1,0,
			0,1,1,2,1,0,3,0,1,0,
			0,1,2,1,1,1,1,1,1,0,
			0,1,1,1,1,2,1,0,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=e[n][m];
			}
		}
	}else if(level==5){
		int f[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,9,1,5,1,1,6,1,3,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=f[n][m];
			}
		}
	}else if(level==6){
		int g[10][10]={
			1,1,1,0,0,0,0,1,1,1,
			1,1,1,0,1,1,0,1,1,1,
			1,1,1,0,1,6,0,1,1,1,
			0,0,0,0,1,1,0,0,0,0,
			0,1,1,1,9,1,1,5,1,0,
			0,1,6,1,1,3,1,1,1,0,
			0,0,0,0,1,1,0,0,0,0,
			1,1,1,0,5,1,0,1,1,1,
			1,1,1,0,1,1,0,1,1,1,
			1,1,1,0,0,0,0,1,1,1};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=g[n][m];
			}
		}
	}else if(level==7){
		int h[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,9,1,1,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,4,4,4,4,4,4,4,4,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,1,1,1,0,1,1,1,0,
			0,3,3,3,3,3,3,3,3,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=h[n][m];
			}
		}
	}else if(level==8){
		int i[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,0,1,4,1,3,0,
			0,1,0,0,0,1,0,0,1,0,
			0,1,1,1,1,1,1,1,4,0,
			0,1,1,0,0,1,0,1,1,0,
			0,1,4,0,1,4,0,1,0,0,
			0,0,1,1,1,1,4,1,1,0,
			0,1,1,0,0,0,1,0,1,0,
			0,9,1,1,1,1,1,1,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=i[n][m];
			}
		}
	}else if(level==9){
		int j[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,0,0,1,1,1,0,
			0,1,6,1,1,1,1,4,1,0,
			0,1,1,1,1,0,1,1,1,0,
			0,0,1,1,9,1,1,1,1,0,
			0,0,1,0,1,2,0,1,1,0,
			0,1,1,1,1,0,3,1,1,0,
			0,1,5,1,1,1,1,1,0,2,
			0,1,1,1,1,1,1,1,0,2,
			0,0,0,0,0,0,0,0,2,2};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=j[n][m];
			}
		}
	}else if(level==10){
		int k[10][10]={
			1,0,0,0,0,0,0,0,0,0,
			1,0,1,1,0,0,1,1,1,0,
			1,0,1,1,1,2,1,1,1,0,
			1,0,2,1,0,0,1,1,1,0,
			1,0,1,0,1,1,0,2,0,0,
			1,0,1,0,1,3,0,1,0,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,2,1,2,1,1,4,1,0,
			0,1,1,1,1,0,1,9,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=k[n][m];
			}
		}
	}else if(level==11){
		int l[10][10]={
			2,2,0,0,0,0,0,0,0,0,
			2,1,1,1,0,0,1,1,1,0,
			0,1,6,1,1,1,1,4,1,0,
			0,1,1,1,6,0,1,1,1,0,
			0,0,1,1,9,1,1,0,1,0,
			0,0,4,0,1,2,6,1,1,0,
			0,1,1,1,1,5,1,1,1,0,
			0,1,5,0,1,1,5,1,1,0,
			0,1,1,1,1,1,1,1,3,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=l[n][m];
			}
		}
	}else if(level==12){
		int o[10][10]={
			0,2,0,2,0,2,0,2,0,2,
			2,0,2,0,2,0,2,0,2,0,
			0,2,0,2,0,2,0,3,0,2,
			0,1,1,1,0,1,1,1,1,0,
			0,1,1,1,1,1,1,1,5,0,
			0,1,0,1,1,1,1,1,1,0,
			0,1,0,1,1,1,1,0,1,0,
			0,1,1,0,6,1,1,4,1,0,
			0,9,1,1,1,1,1,1,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=o[n][m];
			}
		}
	}else if(level==13){
		int p[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,9,0,
			0,4,5,1,0,5,1,1,1,0,
			0,1,0,1,1,1,1,1,1,0,
			0,3,0,1,1,0,2,0,1,0,
			0,3,6,1,1,2,0,2,1,0,
			0,1,0,1,1,1,6,1,1,0,
			0,4,1,1,1,6,0,5,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=p[n][m];
			}
		}
	}else if(level==14){
		int q[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,9,2,1,2,2,2,2,2,0,
			0,2,1,2,1,2,2,2,2,0,
			0,1,2,1,2,1,2,2,2,0,
			0,2,1,2,1,2,1,2,2,0,
			0,1,2,1,2,1,2,1,2,0,
			0,2,1,2,1,2,1,2,1,0,
			0,0,0,0,0,1,2,1,2,0,
			0,3,1,1,1,1,1,2,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=q[n][m];
			}
		}
	}else if(level==15){
		int r[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,9,1,1,1,1,1,1,1,0,
			0,1,3,4,1,1,4,3,1,0,
			0,1,4,3,4,4,3,4,1,0,
			0,1,1,4,3,3,4,1,1,0,
			0,1,1,4,3,3,4,1,1,0,
			0,1,4,3,4,4,3,4,1,0,
			0,1,3,4,1,1,4,3,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=r[n][m];
			}
		}
	}else if(level==16){
		int s[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,9,4,1,4,4,4,4,4,0,
			0,4,1,4,1,4,4,4,4,0,
			0,1,4,1,4,1,4,4,4,0,
			0,4,1,4,1,4,1,4,4,0,
			0,1,4,1,4,1,4,1,4,0,
			0,4,1,4,1,4,1,4,1,0,
			0,1,4,1,4,1,4,1,4,0,
			0,3,1,4,1,4,1,4,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=s[n][m];
			}
		}
	}else if(level==17){
		int t[10][10]={
			0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,0,
			0,1,4,2,1,2,2,4,1,0,
			0,1,5,1,1,1,1,6,1,0,
			0,1,5,1,9,1,1,6,1,0,
			0,1,5,1,1,3,1,6,1,0,
			0,1,5,1,1,1,1,6,1,0,
			0,1,4,2,2,2,2,4,1,0,
			0,1,1,1,1,1,1,1,1,0,
			0,0,0,0,0,0,0,0,0,0};
		for(int n=0;n<=10;n++){
			for(int m=0;m<=10;m++){
				a[n][m]=t[n][m];
			}
		}
	} 
	return;
}
void table(){
	for(int n=0;n<10;n++){
		for(int m=0;m<10;m++){
			switch(a[n][m]){
				case 0:
					printf("█ ");
					break;
				case 1:
					printf("  ");
					break;
				case 2:
					printf("□");
					break;
				case 3:
					printf("Ｘ");
					break;
				case 4:
					printf("●");
					break;
				case 5:
					printf("[ ");
					break;
				case 6:
					printf(" ]");
					break;
				case 9:
					printf("◎");
					break;
			}
		}
		printf("\n");
	}
	return;
}
void move(int d){
	int n,m,b,i;
	for(n=0;n<10;n++){
		for(m=0;m<10;m++){
			if(a[n][m]==9)break;
		}
		if(a[n][m]==9)break;
	}
	if(d==1&&a[n-1][m]!=0&&a[n-1][m]!=3){
		if((a[n-1][m]==4||a[n-1][m]==5||a[n-1][m]==6)&&(a[n-2][m]==2||a[n-2][m]==3||a[n-2][m]==4||a[n-2][m]==5||a[n-2][m]==6)){
			if((a[n-1][m]==5&&a[n-2][m]==6)||(a[n-1][m]==6&&a[n-2][m]==5)){
				a[n-1][m]=1;
				a[n-2][m]=2;
				step++;
				b=a[n-1][m];
				a[n-1][m]=a[n][m];
				a[n][m]=b;
			}else{
				if(a[n-2][m]==3&&a[n-1][m]!=5&&a[n-2][m]!=6&&a[n-1][m]!=6&&a[n-2][m]!=5){
					a[n-1][m]=9;
					a[n][m]=1;
					score--;
					step++;
				}else{
					return;
				}
			}
		}else if((a[n-1][m]==2&&a[n-2][m]==2)||(a[n-1][m]==4&&a[n-2][m]==2)||(a[n-1][m]==2&&a[n-2][m]==4)){
			return;
		}else{
			if((a[n-1][m]==2||a[n-1][m]==4||a[n-1][m]==5||a[n-1][m]==6)&&a[n-2][m]!=0){
				if(a[n-1][m]==4){
					i=1;
					while(a[n-i-1][m]!=0&&a[n-i-1][m]!=2&&a[n-i-1][m]!=3&&a[n-i-1][m]!=4&&a[n-i-1][m]!=5&&a[n-i-1][m]!=6||a[n-i][m]==0){
						a[n-i][m]=1;
						i++;
						a[n-i][m]=4;
						if(a[n-i-1][m]==3){
							a[n-i][m]=1;
							score--;
						}
						system("cls");
						printf("請按方向鍵移動方塊：\n  按空白鍵可刷新\n");
						table();
						printf("還需要:%d個箱子\n使用步數：%d",score,step);
					}
				}else if(a[n-2][m]==3){
					a[n-1][m]=1;
					score--;
				}else{
					if(a[n-1][m]==2&&(a[n-2][m]==5||a[n-2][m]==6)){
						return;
					}else{
						b=a[n-1][m];
						a[n-1][m]=a[n-2][m];
						a[n-2][m]=b;
					}
				}
				step++;
				b=a[n-1][m];
				a[n-1][m]=a[n][m];
				a[n][m]=b;
			}else if(a[n-1][m]==1){
				b=a[n-1][m];
				a[n-1][m]=a[n][m];
				a[n][m]=b;
				step++;
			}
		}
	}else if(d==2&&a[n][m-1]!=0&&a[n][m-1]!=3){
		if((a[n][m-1]==4||a[n][m-1]==5||a[n][m-1]==6)&&(a[n][m-2]==2||a[n][m-2]==3||a[n][m-2]==4||a[n][m-2]==5||a[n][m-2]==6)){
			if((a[n][m-1]==5&&a[n][m-2]==6)||(a[n][m-1]==6&&a[n][m-2]==5)){
				a[n][m-1]=1;
				a[n][m-2]=2;
				step++;
				b=a[n][m-1];
				a[n][m-1]=a[n][m];
				a[n][m]=b;
			}else{
				if(a[n][m-2]==3&&a[n][m-1]!=5&&a[n][m-2]!=6&&a[n][m-1]!=6&&a[n][m-2]!=5){
					a[n][m-1]=9;
					a[n][m]=1;
					score--;
					step++;
				}else{
					return;
				}
			}
		}else if((a[n][m-1]==2&&a[n][m-2]==2)||(a[n][m-1]==4&&a[n][m-2]==2)||(a[n][m-1]==2&&a[n][m-2]==4)){
			return;
		}else{
			if((a[n][m-1]==2||a[n][m-1]==4||a[n][m-1]==5||a[n][m-1]==6)&&a[n][m-2]!=0){
				if(a[n][m-1]==4){
					i=1;
					while(a[n][m-i-1]!=0&&a[n][m-i-1]!=2&&a[n][m-i-1]!=3&&a[n][m-i-1]!=4&&a[n][m-i-1]!=5&&a[n][m-i-1]!=6||a[n][m-i]==0){
						a[n][m-i]=1;
						i++;
						a[n][m-i]=4;
						if(a[n][m-i-1]==3){
							a[n][m-i]=1;
							score--;
						}
						system("cls");
						printf("請按方向鍵移動方塊：\n  按空白鍵可刷新\n");
						table();
						printf("還需要:%d個箱子\n使用步數：%d",score,step);
					}
				}else if(a[n][m-2]==3){
					a[n][m-1]=1;
					score--;
				}else{
					if(a[n][m-1]==2&&(a[n][m-2]==5||a[n][m-2]==6)){
						return;
					}else{
						b=a[n][m-1];
						a[n][m-1]=a[n][m-2];
						a[n][m-2]=b;
					}
				}
				step++;
				b=a[n][m-1];
				a[n][m-1]=a[n][m];
				a[n][m]=b;
			}else if(a[n][m-1]==1){
				b=a[n][m-1];
				a[n][m-1]=a[n][m];
				a[n][m]=b;
				step++;
			}
		}	
	}else if(d==3&&a[n][m+1]!=0&&a[n][m+1]!=3){
		if((a[n][m+1]==4||a[n][m+1]==5||a[n][m+1]==6)&&(a[n][m+2]==2||a[n][m+2]==3||a[n][m+2]==4||a[n][m+2]==5||a[n][m+2]==6)){
			if((a[n][m+1]==5&&a[n][m+2]==6)||(a[n][m+1]==6&&a[n][m+2]==5)){
				a[n][m+1]=1;
				a[n][m+2]=2;
				step++;
				b=a[n][m+1];
				a[n][m+1]=a[n][m];
				a[n][m]=b;
			}else{
				if(a[n][m+2]==3&&a[n][m+1]!=5&&a[n][m+2]!=6&&a[n][m+1]!=6&&a[n][m+2]!=5){
					a[n][m+1]=9;
					a[n][m]=1;
					score--;
					step++;
				}else{
					return;
				}
			}
		}else if((a[n][m+1]==2&&a[n][m+2]==2)||(a[n][m+1]==4&&a[n][m+2]==2)||(a[n][m+1]==2&&a[n][m+2]==4)){
			return;
		}else{
			if((a[n][m+1]==2||a[n][m+1]==4||a[n][m+1]==5||a[n][m+1]==6)&&a[n][m+2]!=0){
				if(a[n][m+1]==4){
					i=1;
					while(a[n][m+i+1]!=0&&a[n][m+i+1]!=2&&a[n][m+i+1]!=3&&a[n][m+i+1]!=4&&a[n][m+i+1]!=5&&a[n][m+i+1]!=6||a[n][m+i]==0){
						a[n][m+i]=1;
						i++;
						a[n][m+i]=4;
						if(a[n][m+i+1]==3){
							a[n][m+i]=1;
							score--;
						}
						system("cls");
						printf("請按方向鍵移動方塊：\n  按空白鍵可刷新\n");
						table();
						printf("還需要:%d個箱子\n使用步數：%d",score,step);
					}
				}else if(a[n][m+2]==3){
					a[n][m+1]=1;
					score--;
				}else{
					if(a[n][m+1]==2&&(a[n][m+2]==5||a[n][m+2]==6)){
						return;
					}else{
						b=a[n][m+1];
						a[n][m+1]=a[n][m+2];
						a[n][m+2]=b;
					}
				}
				step++;
				b=a[n][m+1];
				a[n][m+1]=a[n][m];
				a[n][m]=b;
			}else if(a[n][m+1]==1){
				b=a[n][m+1];
				a[n][m+1]=a[n][m];
				a[n][m]=b;
				step++;
			}
		}
	}else if(d==4&&a[n+1][m]!=0&&a[n+1][m]!=3){
		if((a[n+1][m]==4||a[n+1][m]==5||a[n+1][m]==6)&&(a[n+2][m]==2||a[n+2][m]==3||a[n+2][m]==4||a[n+2][m]==5||a[n+2][m]==6)){
			if((a[n+1][m]==5&&a[n+2][m]==6)||(a[n+1][m]==6&&a[n+2][m]==5)){
				a[n+1][m]=1;
				a[n+2][m]=2;
				step++;
				b=a[n+1][m];
				a[n+1][m]=a[n][m];
				a[n][m]=b;
			}else{
				if(a[n+2][m]==3&&a[n+1][m]!=5&&a[n+2][m]!=6&&a[n+1][m]!=6&&a[n+2][m]!=5){
					a[n+1][m]=9;
					a[n][m]=1;
					score--;
					step++;
				}else{
					return;
				}
			}
		}else if((a[n+1][m]==2&&a[n+2][m]==2)||(a[n+1][m]==4&&a[n+2][m]==2)||(a[n+1][m]==2&&a[n+2][m]==4)){
			return;
		}else{
			if((a[n+1][m]==2||a[n+1][m]==4||a[n+1][m]==5||a[n+1][m]==6)&&a[n+2][m]!=0){
				if(a[n+1][m]==4){
					i=1;
					while(a[n+i+1][m]!=0&&a[n+i+1][m]!=2&&a[n+i+1][m]!=3&&a[n+i+1][m]!=4&&a[n+i+1][m]!=5&&a[n+i+1][m]!=6||a[n+i][m]==0){
						a[n+i][m]=1;
						i++;
						a[n+i][m]=4;
						if(a[n+i+1][m]==3){
							a[n+i][m]=1;
							score--;
						}
						system("cls");
						printf("請按方向鍵移動方塊：\n  按空白鍵可刷新\n");
						table();
						printf("還需要:%d個箱子\n使用步數：%d",score,step);
					}
				}else if(a[n+2][m]==3){
					a[n+1][m]=1;
					score--;
				}else{
					if(a[n+1][m]==2&&(a[n+2][m]==5||a[n+2][m]==6)){
						return;
					}else{
						b=a[n+1][m];
						a[n+1][m]=a[n+2][m];
						a[n+2][m]=b;
					}
				}
				step++;
				b=a[n+1][m];
				a[n+1][m]=a[n][m];
				a[n][m]=b;
			}else if(a[n+1][m]==1){
				b=a[n+1][m];
				a[n+1][m]=a[n][m];
				a[n][m]=b;
				step++;
			}
		}
	}
	return;
}
int star(int level,int step){
	if(level==1){
		if(step<7){
			return 3;
		}else if(step<8){
			return 2;
		}else{
			return 0;
		}
	}else if(level==2){
		if(step<35){
			return 3;
		}else if(step<40){
			return 2;
		}else if(step<55){
			return 1;
		}else{
			return 0;
		}
	}else if(level==3){
		if(step<70){
			return 3;
		}else if(step<85){
			return 2;
		}else if(step<100){
			return 1;
		}else{
			return 0;
		}
	}else if(level==4){
		if(step<55){
			return 3;
		}else if(step<70){
			return 2;
		}else if(step<85){
			return 1;
		}else{
			return 0;
		}
	}else if(level==5){
		if(step<7){
			return 3;
		}else if(step<8){
			return 2;
		}else if(step<9){
			return 1;
		}else{
			return 0;
		}
	}else if(level==6){
		if(step<45){
			return 3;
		}else if(step<55){
			return 2;
		}else if(step<65){
			return 1;
		}else{
			return 0;
		}
	}else if(level==7){
		if(step<43){
			return 3;
		}else if(step<48){
			return 2;
		}else if(step<55){
			return 1;
		}else{
			return 0;
		}
	}else if(level==8){
		if(step<115){
			return 3;
		}else if(step<125){
			return 2;
		}else if(step<140){
			return 1;
		}else{
			return 0;
		}
	}else if(level==9){
		if(step<65){
			return 3;
		}else if(step<69){
			return 2;
		}else if(step<75){
			return 1;
		}else{
			return 0;
		}
	}else if(level==10){
		if(step<156){
			return 3;
		}else if(step<176){
			return 2;
		}else if(step<196){
			return 1;
		}else{
			return 0;
		}
	}else if(level==11){
		if(step<140){
			return 3;
		}else if(step<160){
			return 2;
		}else if(step<190){
			return 1;
		}else{
			return 0;
		}
	}else if(level==12){
		if(step<31){
			return 3;
		}else if(step<36){
			return 2;
		}else if(step<41){
			return 1;
		}else{
			return 0;
		}
	}else if(level==13){
		if(step<95){
			return 3;
		}else if(step<110){
			return 2;
		}else if(step<120){
			return 1;
		}else{
			return 0;
		}
	}else if(level==14){
		if(step<45){
			return 3;
		}else if(step<50){
			return 2;
		}else if(step<55){
			return 1;
		}else{
			return 0;
		}
	}else if(level==15){
		if(step<41){
			return 3;
		}else if(step<43){
			return 2;
		}else if(step<60){
			return 1;
		}else{
			return 0;
		}
	}else if(level==16){
		if(step<10){
			return 3;
		}else if(step<69){
			return 2;
		}else if(step<75){
			return 1;
		}else{
			return 0;
		}
	}else if(level==17){
		if(step<261){
			return 3;
		}else if(step<301){
			return 2;
		}else if(step<351){
			return 1;
		}else{
			return 0;
		}
	}
}
int main(){
	char c=0;
	printf("█ █ █ █ █ █ █ █ █ \n█               █\n█   推箱子遊戲  █\n█               █\n█    用方向鍵   █\n█     移動吧!   █\n█               █\n█   按ENTER繼續 █\n█               █\n█ █ █ █ █ █ █ █ █ ");
	while(c!=13){
		c=getch();
	}
	system("cls");
	c=0;
	printf("█ █ █ █ █ █ █ █ █ \n█               █\n█   █ 是邊緣    █\n█               █\n█   □是箱子    █\n█               █\n█   Ｘ是目的地  █\n█               █\n█   ◎是玩家    █\n█               █\n█  本遊戲會依你 █\n█  使用的步數來 █\n█    計算星等   █\n█   最多3最少0  █\n█   0星需重來   █\n█               █\n█  按ENTER開始  █\n█               █\n█ █ █ █ █ █ █ █ █ ");
	while(c!=13){
		c=getch();
	}
	int level=1;
	while(level!=18){
		system("cls");
		levelset(level);
		printf("請按方向鍵移動方塊：\n  按空白鍵可刷新\n");
		table();
		printf("還需要:%d個箱子\n使用步數：%d",score,step);
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
				case 32:
					levelset(level);
					if(level==5){
						score=1;
					}else if(level==6){
						score=2;
					}else if(level==7){
						score=8;
					}else if(level==8){
						score=5;
					}else if(level==9){
						score=2;
					}else if(level==10){
						score=6;
					}else if(level==11){
						score=6;
					}else if(level==12){
						score=1;
					}else if(level==13){
						score=5;
					}else if(level==14){
						score=2;
					}else if(level==15){
						score=16;
					}else if(level==16){
						score=1;
					}else if(level==17){
						score=15;
					}else{
						score=level;
					}
					step=0;
					break;
			}
			system("cls");
			printf("請按方向鍵移動方塊：\n  按空白鍵可刷新\n");
			table();
			printf("還需要:%d個箱子\n使用步數：%d",score,step);
		}while(score!=0);
		system("cls");
		if(star(level,step)==0){
			if(level>9){
				printf("█ █ █ █ █ █ █ █ █ \n█               █\n█     第%d關    █\n█   再試一次吧  █\n█     星 等:    █\n█    ",level);
			}else{
				printf("█ █ █ █ █ █ █ █ █ \n█               █\n█     第%d關     █\n█   再試一次吧  █\n█     星 等:    █\n█    ",level);
			}
		}else{
			if(level>9){
				printf("█ █ █ █ █ █ █ █ █ \n█               █\n█     第%d關    █\n█   恭喜 過關   █\n█     星 等:    █\n█    ",level);
			}else{
				printf("█ █ █ █ █ █ █ █ █ \n█               █\n█     第%d關     █\n█   恭喜 過關   █\n█     星 等:    █\n█    ",level);
			}
		}
		if(star(level,step)==0){
			printf("☆ ☆ ☆ ");
		}else if(star(level,step)==1){
			printf("☆ ★ ☆ ");
		}else if(star(level,step)==2){
			printf("★ ☆ ★ ");
		}else{
			printf("★ ★ ★ ");
		}
		printf("  █\n█               █\n█  按ENTER繼續  █\n█               █\n█ █ █ █ █ █ █ █ █ \n");
		c=0;
		while(c!=13){
			c=getch();
		}
		if(star(level,step)==0){
			
		}else{
			level++;
		}
		if(level==5){
			score=1;
		}else if(level==6){
			score=2;
		}else if(level==7){
			score=8;
		}else if(level==8){
			score=5;
		}else if(level==9){
			score=2;
		}else if(level==10){
			score=6;
		}else if(level==11){
			score=6;
		}else if(level==12){
			score=1;
		}else if(level==13){
			score=5;
		}else if(level==14){
			score=2;
		}else if(level==15){
			score=16;
		}else if(level==16){
			score=1;
		}else if(level==17){
			score=15;
		}else{
			score=level;
		}
		step=0;	
	}
}
