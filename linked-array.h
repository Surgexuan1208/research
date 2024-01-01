#include<vector>
using namespace std;
const class nullptr_t{
public:
    template<class T>
    inline operator T*() const{
		return 0;
	}
    template<class C, class T>
    inline operator T C::*() const{
		return 0;
	}
private:
    void operator&() const;
}
nullptr={};
template<typename Itemtype>
class Node{
private:
	Itemtype item;
	Node<Itemtype> *next;
public:
	Node(){
		next=nullptr;
	}
	Node(const Itemtype &anItem){
		item(anItem);
	}
	Node(const Itemtype &anItem,Node<Itemtype> *nextNodePtr){
		item(anItem);
		next(nextNodePtr);
	}
	void setItem(const Itemtype &anItem){
		item=anItem;
	}
	void setNext(Node<Itemtype> *nextNodePtr){
		next=nextNodePtr;
	}
	Itemtype getItem() const{
		return item;
	}
	Node<Itemtype> *getNext() const{
		return next;
	}
};
template<typename Itemtype>
class LinkedBag{
private:
	Node<Itemtype> *headPtr;
	int itemCount;
	Node<Itemtype> *getPointerTo(const Itemtype &anEntry){
		bool found=false;
		Node<Itemtype> *curPtr=headPtr;
		while(!found&&(curPtr!=nullptr)){
			if(anEntry==curPtr->getItem()){
				found=true;
			}else{
				curPtr=curPtr->getNext();
			}
		}
		return curPtr;
	}
public:
	LinkedBag(){
		headPtr=nullptr;
		itemCount=0;
	}
	virtual ~LinkedBag(){
		clear();
	}
	LinkedBag(const LinkedBag<Itemtype> &aBag){
		itemCount=aBag->itemCount;
		Node<Itemtype> *origChianPtr=aBag->headPtr;
		if(origChianPtr==nullptr){
			headPtr=nullptr;
		}else{
			headPtr=new Node<Itemtype>();
			headPtr->setItem(headPtr->getItem());
			Node<Itemtype> *newChainPtr=headPtr;
			while(origChianPtr!=nullptr){
				origChianPtr=origChianPtr->getNext();
				Itemtype nextItem=origChianPtr->getItem();
				Node<Itemtype> *newNodePtr=new Node<Itemtype>(nextItem);
				newChainPtr->setNext(newNodePtr);
				newChainPtr=newChainPtr->getNext();
			}
			newChainPtr->setNext(nullptr);
		}
	}
	bool isEmpty() const{
		return itemCount==0;
	}
	int getCurrentSize() const{
		return itemCount;
	}
	bool add(const Itemtype &newEntry){
		Node <Itemtype> *newNodePtr=new Node<Itemtype>();
		newNodePtr->setItem(newEntry);
		newNodePtr->setNext(headPtr);
		headPtr=newNodePtr;
		itemCount++;
		return true;
	}
	vector<Itemtype> toVector() const{
		vector<Itemtype> bagContents;
		Node<Itemtype> *curPtr=headPtr;
		while(curPtr!=nullptr){
			bagContents.push_back(curPtr->getItem());
			curPtr=curPtr->getNext();
		}
		return bagContents;
	}
	bool remove(const Itemtype &anEntry){
		Node<Itemtype> *entryNodePtr=getPointerTo(anEntry);
		bool canRemoveItem=!isEmpty()&&(entryNodePtr!=nullptr);
		if(canRemoveItem){
			entryNodePtr->setItem(headPtr->getItem());
			Node<Itemtype> *nodeToDeletePtr=headPtr;
			headPtr=headPtr->getNext();
			delete nodeToDeletePtr;
			nodeToDeletePtr=nullptr;
			itemCount--;
		}
		return canRemoveItem;
	}
	bool contains(const Itemtype &anEntry) const{
		return (getPointerTo(anEntry)!=nullptr);
	}
	int getFrequencyOf(const Itemtype &anEntry) const{
		int frequency=0;
		Node<Itemtype> *curPtr=headPtr;
		while(curPtr!=nullptr){
			if(curPtr->getItem()==anEntry){
				frequency++;
			}
			curPtr=curPtr->getNext();
		}
		return frequency;
	}
	void clear(){
		Node<Itemtype> *nodeToDeletePtr=headPtr;
		while(headPtr!=nullptr){
			headPtr=headPtr->getNext();
			delete nodeToDeletePtr;
			nodeToDeletePtr=headPtr;
		}
		itemCount=0;
	}
};
