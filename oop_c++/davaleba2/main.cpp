#include <iomanip>  
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <conio.h>
using namespace std;

/*
// 1  
void inpt(int *);
void prt(int *);
void function1(int *);
void function2(int *);


int main() {
	int A[15];
	cout<<"Matrix:"<<endl;
	inpt(A);
	prt(A);
	cout<<endl;
	function1(A);
	cout<<endl;
	function2(A);
	return 0;
}

void inpt(int *aPtr){	
	srand(time(0));
	for(int i=0;i<15;i++){
	*(aPtr+i)=10+rand()%31;
	}	
}
void prt(int *aPtr){
		for(int i=0;i<15;i++){
		cout<<setw(4)<<*(aPtr+i);
	}
}
void function1(int *aPtr){
	int sm1=1;
	for(int i=0;i<15;i++){
		if(*(aPtr+i)%2!=0){
			sm1+=*(aPtr+i)*(2)^(15-1);
		}
	}
	cout<<"sumI="<<sm1;
}
void function2(int *aPtr){
	int k=0;
	double sm2=0;
	for(int i=0;i<15;i++){
		if(*(aPtr+i)%2==0){
		k++;
			sm2+=*(aPtr+i)/k;
		}
	}
	cout<<"sumII="<<sm2;
}
*/
/*
// 2 
struct student{
	
	int A[4][4];
	void input();
	void print();
	void sortclmn();
	void sortcrow();
};
void student::input(){
	srand(time(0));
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		A[i][j]=10+rand()&81;
		}	
	}
}

void student::print(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		cout<<A[i][j]<<" ";
		}	
		cout<<endl;
	}
}
void student::sortclmn(){
	int temp;
	for(int m=1;m<16;m++){
		for(int i=0;i<4;i++){
			for(int j=0;j<4-1;j++){
				if(A[i][j+1]<A[i][j]){
					temp=A[i][j];
				A[i][j]=A[i][j+1];
				A[i][j+1]=temp;
				}
			}	
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		cout<<A[i][j]<<" ";
		}	
		cout<<endl;
	}
}

void student::sortcrow(){
	int temp;
	for(int m=1;m<16;m++){
		for(int i=0;i<4-1;i++){
			for(int j=0;j<4;j++){
				if(A[i+1][j]<A[i][j]){
					temp=a[i][j];	
					A[i][j]=A[i+1][j];
					A[i+1][j]=temp;
				}
			}
		}
	}
	
	for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
			cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
}

int main(){	
	student obj;
	cout<<"Matrix:"<<endl;
	obj.input();
	obj.print();
		cout<<"\nSorted matrixI"<<endl;
	obj.sortclmn();
		cout<<"\nSorted matrixII"<<endl;
	obj.sortcrow();
	return 0;
}
*/
/*
// 3  
class student{
	public:
		student();
		void print();
		void function();
		private:
			int B[5][5];
};
student::student(){	
	srand(time(0));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			B[i][j]=10+rand()%41;
		}	
	}
}
void student::print(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<B[i][j]<<" ";
		}	
		cout<<endl;
	}	
}
void student::function(){
	int max,t,temp;
		max=B[0][0];
		for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(max<B[i][j]){
				max=B[i][j];
				t=i;
			}
		
		}			
	}
cout<<"\nMaximumm number:"<<max<<" ";
cout<<endl<<"Max Number Column:"<<t<<endl;
i=2;
		for(int j=0;j<5;j++){
			temp=B[i][j];
			B[i][j]=B[t][j];;
			B[t][j]=temp;
		}						
}

int main(){	
	student obj;
	cout<<"Matrix:"<<endl;
	obj.print();
	cout<<"\nChanged Matrix:"<<endl;
	obj.function();
	cout<<endl;
	obj.print();
	return 0;
}
*/
/*
//4  
#include "number4.h"

int main(){
	demo obj;
	cout<<"Matrix:"<<endl;
	obj.prnt();
	cout<<"\nChanged Matrix:"<<endl;
	obj.function();
	cout<<endl;
	obj.print();
	return 0;
}
*/

//5 
class student{
	public:
	 int i;
	student();
	void function();
	~student();
	private:
		int A[18], *aPtr;	
};

student::student(){
	aPtr =new int[18];
	srand(time(0));
	for(int i=0;i<18;i++){
		A[i]=15+rand()%36;
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void student::function(){
	long sum=0;
	
		for(int i=0;i<18;i++){
		A[i]=15+rand()%36;
sum+=pow(A[i],2);
	}
	cout<<"\nSum numbers:"<<sum<<endl;
}

student::~student(){
	delete aPtr;
}

int main(){
	student *obj=new student();
	cout<<"Current array:"<<endl;
	obj->function();
	delete obj;
	obj->func();
	return 0;
}
*/


