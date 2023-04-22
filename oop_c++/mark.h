#pragma once

class student{
	public:
		student(int m, int n);
		void print();
		void func();
	private:
		const int columns;	
		const int rows;	
		int a[7][7];
};
