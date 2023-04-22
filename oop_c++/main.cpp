#include <iomanip>  
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <conio.h>
/*
int main() {
//practical homework #1 n1


s.append(str)- amatebs s texts ragac str texsts
s.assign(str) -anacvlebs s texts str texstit
s.compare(str)- adarebs striqonebs da igiveobis shemtxvevashi abrunebs 0 s
s.erase(k,n)- striqonshi k poziciidan n raodenobis asos shlis
s.insert(k,str,beg,count)- s striqonshi k poziciidan str striqonis count raodenobis asos svams beg poziciidan 
s.swap(str)-s da str striqonebs mnishvnelobebs ucvlis
s.size()-abrunebs s striqonis simboloebis raodenobas
int len=s.length()- len integers anichebs striqonis sigrdzes

*/
/*
string s="helloo", str="vaska";

int len=s.length();

cout<<len;
*/
/*
int len=s.length();
cout<<s.insert(0,str,2,3);	
cout<<endl<<len;	
cout<<endl<<s.size();

}
*/

//praqtikuli number 5
/*
//number 1   +

class student{
	
	public:
		student();
		void print();
		void func();
		private:
			int a[5][5];
	
};

student::student(){	
	srand(time(0));
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		a[i][j]=10+rand()%51;
	}	
	}	
}
	void student::print(){
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cout<<a[i][j]<<" ";
			}	
		cout<<endl;
	}	
	}

void student::func(){
	int min=a[0][0],k,t;
			for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
			if(min>a[i][j]){
				min=a[i][j];
			k=j;
			}
			}	
	}
	cout<<"\nmin:"<<min<<"\nindex:"<<k<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
t=a[i][k];
a[i][k]=a[i][2];
a[i][2]=t;

	}
	}		
}

int main(){
	student ob;
	cout<<"Current matrix:"<<endl;
	ob.print();
	ob.func();
	cout<<"\nChanged matrix:"<<endl;
	ob.print();
	
	
	
	return 0;
}
*/

/*
//number 2   +

class student{
	public:
		student();
		void print();
		int func();
	private:
		int a[5][7];
		
};

student::student(){
	srand(time(0));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
				a[i][j]=10+rand()%51;	
		}
	}
	
}

void student::print(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int student::func(){
int max[5],k;	
	for(int i=0;i<5;i++){
		max[i]=a[0][0];
		for(int j=0;j<5;j++){
		if(max[i]<a[i][j]){
			max[i]=a[i][j];
			k=i;
		}
		}
	cout<<"\nmaxIndex:"<<k<<"\nmax="<<max[i]<<endl;
	
	}	
	return k;
}
int main(){
	int num;
	student ob;
	cout<<"Current matrix:"<<endl;
	ob.print();
	cout<<endl;
	num=ob.func();

return 0;
}
*/

/*
//number 3  +
class student{
	public:
		student();
		void print();
		int func();
		private:
			int a[18];
	
};

student::student(){
	srand(time(0));
	for(int i;i<18;i++){
		a[i]=-6+rand()%25;
	}
}

void student::print(){	
	for(int i;i<18;i++){
		cout<<setw(4)<<a[i];	
	}		
}

int student::func(){
int x;
	for(int i;i<18;i++){
		if(a[i]<0){
			x=i;
			cout<<x;
			break;
		}
	}
return x;	
}

int main(){
	long  res,a;
	student ob;
	cout<<"Current matrix:"<<endl;
	ob.print();	
	res=ob.func();
	cout<<endl;
		cin>>a;
	cout<<"\n"<<pow(a,res);
	
	return 0;
}
*/

/*
//number 5
#include "mark.h"

int main(){
	cout<<"Current matrix:"<<endl;
	student ob(7,7);
	ob.print();
	ob.func();
	cout<<endl;
	cout<<"Changed matrix:"<<endl;
	ob.print();
	
	return 0;
}
*/

/*
//number 4
#include "number4.h"

int main(){
long double e,num,ans;
	cout<<"Current matrix:"<<endl;
	student ob;
	ob.print();
	cout<<"\ny=";
	cin>>e;
	ans=ob.func();
	num=pow(ob.func(),2);	
	cout<<pow(e,num)+ans;
	return 0;
}
*/

/*
//bubble sort algorithm  +

int main(){
int n,i,j,k,t,a[10];
cin>>n;
srand(time(0));
for(i=0;i<n;i++){
	a[i]=6+rand()%25;
}	
cout<<"Current array:"<<endl;
for(i=0;i<n;i++){
	cout<<setw(4)<<a[i];	
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
	if(a[i]<a[j]){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}	
}
cout<<"\nSorted array:"<<endl;
for(i=0;i<n;i++){
	cout<<setw(4)<<a[i];	
}	
	return 0;
}
*/
//pointers 
/*
int main(){
int x=5;
int *xPtr;
xPtr=&x;
cout<<"adress of x="<<&x<<endl;
cout<<"adress of xptr="<<xPtr<<endl;
cout<<"value of x="<<x<<endl;
cout<<"value of xptr="<<*xPtr<<endl;
	
	return 0;
}
*/
/*
double sqrt_root(double *);

int main(){
	double num=1024;
	cout<<"Number:"<<num<<endl;
	sqrt_root(&num);
		cout<<"\nAfter:	"<<endl;
	cout<<"\nNumber:"<<num;
	return 0;
}
double sqrt_root(double *xPtr){
	
	*xPtr=sqrt(*xPtr);
	cout<<"\nResult:"<<*xPtr<<endl;
}

*/

/*
//new and delete

int main(){
	
	int *Ptr;
	Ptr = new int;
	*Ptr=70;
	cout<<"before delete:"<<*Ptr;
	delete Ptr;
	cout<<"after delete:"<<*Ptr;
	
	return 0;
}
*/
/*
//shallo copy
class Demo{
	public:
	 Demo();
	 void setData(int ,int ,int );
	 void showData();
	private:
		int a,b,*p;

};

 Demo::Demo(){
		p=new int;
}

void Demo::setData(int x,int y,int z){
	a=x;
	b=y;
	*p=z;
}

void Demo::showData(){
		cout<<"value of a is:"<<a<<endl;
	 	cout<<"value of b is:"<<b<<endl;
		cout<<"value of *p is:"<<*p<<endl;	
}

int main(){
	Demo ob;
	ob.setData(4,5,7);
	Demo ob2=ob;
	ob.showData();
	return 0;
}
*/
				//praqtikuli number 6
				
/*
//number 1
class student{
	
	public:
		student();
		void print();
		void func();
		~student();
		private:
		int  *a;
};
student::student(){
	a=new int[10];
	srand(time(0));
	for(int i=0;i<10;i++){
		*(a+i)=1+rand()%20;
	}
}
void student::print(){
	for(int i=0;i<10;i++){
	cout<<*(a+i)<<" ";
	}
		
}
void student::func(){
	double sum=0;
	for(int i=0;i<10;i++){
	sum+=*(a+i);
	}	
	cout<<"\nHalf sum of array:"<<sum/2;
	delete a;
}
student::~student(){
	delete a;
}

int main(){
student *ob=new student();
	cout<<"Current array:"<<endl;
	ob->print();
	cout<<endl;
	ob->func();
	cout<<endl;
	delete ob;
	ob->print();
	
	return 0;
}
*/
/*
//number 2  +

class student{	
	public:
		student();
		void print();
		void func();
		~student();
		private:
			int *a;
};

student::student(){
	a=new int[15];
	srand(time(0));
	for(int i=0;i<15;i++){
		*(a+i)=1+rand()%50;
	}
}

void student::print(){
		for(int i=0;i<15;i++){
	cout<<*(a+i)<<" ";
	}	
}
void student::func(){
	int sum=0;
	for(int i=0;i<15;i++){
		if(*(a+i)%2==0){
			sum+=*(a+i);
		}
	}	
	cout<<sum;
}
student::~student(){
	delete a;
}
int main(){
	student *ob=new student();
	cout<<"Current array:"<<endl;
	ob->print();
	cout<<"\nSumofoddarraynumbers:";
	ob->func();
	delete ob;
	return 0;
}
*/

/*
//number 3 ?


class student{
	
	public:
		student();
		void print();
		~student();
		private:
			int *aptr;
		//	int a,b,c;
			int c[3];
	
};

student::student(){
	aptr= new int [3];
	cin>>c[0]>>c[1]>>c[2];
//cin>>a>>b>>c;	
}

void student::print(){
int s=1,p;
double sqr;
	p=(c[0]+c[1]+c[2])/2;	
	sqr=p*(p-c[0])*(p-c[1])*(p-c[2]);
	s=sqrt(sqr);
	cout<<"Heron formul:"<<s;	
}
student::~student(){
	delete aptr;
}

int main(){
student *ob=new student();
ob->print();
delete ob;
cout<<endl;
ob->print();
	return 0;
}
*/

/*
//number 4  +
class demo{	
	public:
		demo();
		void func();
		void print();
	private:
	long s,n;		
};

demo::demo(){
	cout<<"Enter number:";
}

void demo::func(){
		cin>>n;
		s=1;
	for(int i=1;i<n;i++){
		s+=i*(2)^(n-1);
	}	
}

void demo::print(){
	cout<<"\nGeometrical progresion n number sum:"<<s;
}

int main(){
demo obj;
obj.func();
obj.print();
demo obj2=obj;
cout<<endl;
obj2.func();
obj2.print();

return 0;
}
*/




