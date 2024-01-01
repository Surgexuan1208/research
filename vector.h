template<typename itemtype>
class vector{
private:
	itemtype *array;
	int count;
//	bool found(itemtype x){
//		bool founding=(count!=0);
//		if(founding){
//			founding=false;
//			for(int i=0;i<count;i++){
//				if(array[i]==x)founding=true;
//			}
//		}
//		return founding;
//	}
public:
	vector(){
		count=0;
	}
	~vector(){
		delete []array;
	}
	void push_back(itemtype x){
		itemtype *copy=new itemtype[count+1];
		for(int i=0;i<count;i++){
			copy[i]=array[i];
		}
		array=copy;
		array[count]=x;
		count++;
	}
	void pop_back(){
		if(count>0){
			itemtype *copy=new itemtype[count-1];
			for(int i=0;i<count-1;i++){
				copy[i]=array[i];
			}
			array=copy;
			count--;
		}
	}
	void insert(int location,itemtype x){
		if(count>location){
			itemtype *copy=new itemtype[count+1];
			int spc=0;
			for(int i=0;i<=count;i++){
				if(i==location){
					copy[i]=x;
					spc=1;
				}else{
					copy[i]=array[i-spc];
				}
			}
			array=copy;
			count++;
		}else if(count==location){
			itemtype *copy=new itemtype[count+1];
			for(int i=0;i<count;i++){
				copy[i]=array[i];
			}
			array=copy;
			array[count]=x;
			count++;
		}
	}
	void erase(int location){
		if(count>location){
			itemtype *copy=new itemtype[count-1];
			int spc=0;
			for(int i=0;i<count;i++){
				if(i==location){
					copy[i]=array[i+1];
					spc=1;
				}else{
					copy[i]=array[i+spc];
				}
			}
			array=copy;
			count--;
		}
	}
	void clear(){
		if(count>0){
			itemtype *copy=new itemtype[0];
			array=copy;
			count=0;
		}
	}
	int size(){
		return count;
	}
	bool empty(){
		return count==0;
	}
	itemtype get(int location){
		if(!count==0&&count>location&&count>0){
			return array[location];
		}else{
			return -1;
		}
	}
};
