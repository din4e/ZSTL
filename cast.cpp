// #include<iostream>
// #include<string>
// using namespace std;
// typedef void(*Fun)(void);
// class Base {
//  public:
//   virtual void f() {
//     cout << "Base::f()" << endl;
//   }
//   virtual void g() {
//     cout << "Base::g()" << endl;
//   }
//   virtual void h() {
//     cout << "Base::h()" << endl;
//   }
// };

// int main() {
//   Base b;
//   Fun fp = NULL;
//   cout << "虚函数表地址：" << (long*)(&b) << endl;
//   cout << "虚函数表第一个虚函数指针地址：" <<(long*)*(long*)(&b) << endl;
//   for (int i = 0; i != 3; ++i) {
//     fp = (Fun)*((long*)*(long*)(&b) + i);
//     fp();
//   }
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef void (*Fun)(void);

class B
{
public:
    int m_iNum;
    virtual void f(){
		std::cout<<"B::f()\n";
	};
};

class D : public B
{
public:
	void f(){
		std::cout<<"D::f()\n";
	};
    // char *m_szName[100];
};
void func1(B *pb)
{
    D *pd1 = static_cast<D*>(pb);
    D *pd2 = dynamic_cast<D*>(pb);
}
void func11(){
    // D* d = new D;
    // B* b = new B;
    // func(b);

}
void fucn2(){
	D d;
	B b;
	cout<<"addr D: " <<(long *)(&d) <<"\n";
	cout<<"addr B: " <<(long *)(&b) <<"\n";
}
void func3(){
	B b1;
	B b2;
	Fun pf;
	cout<<"addr b1: " <<(&b1) <<"\n";
	cout<<"addr b2: " <<(&b2) <<"\n";
	cout<<"val b1->vptr: " <<*(long *)(&b1) <<"\n";
	cout<<"val b2->vptr: " <<*(long *)(&b2) <<"\n";
	cout<<"addr b1->vptr: " <<(long *)*(long *)(&b1) <<"\n";
	cout<<"addr b2->vptr: " <<(long *)*(long *)(&b2) <<"\n";
	cout<<"addr b1->vptr[0]: " <<(Fun *)*(long *)*(long *)(&b1) <<"\n";
	cout<<"addr b2->vptr[0]: " <<(Fun *)*(long *)*(long *)(&b2) <<"\n";
	pf=(Fun)*(long *)*((long *)(&b1));pf();
	// pf=(Fun)*(long *)*(&b2);pf(); // error
	// addr b1->vptr: 0xffffcbf0
	// addr b2->vptr: 0xffffcbe0
	// addr b1->vptr[0]: 0x1004031c0
	// addr b2->vptr[0]: 0x1004031c0
}
void func4(){
	int a = 10; 
	char c = 'a'; 
	int* q = (int*) &c; 
	//int *p = static_cast<int *>(&c);  // error
	int *p = reinterpret_cast<int *>(&c);  // !!
}
void test_const_cast(){
	const B* b1=new B;
	//B &b2=const_cast<B&>(b1); //错误：从类型‘const B (*)()’到类型‘B*’中的 const_cast 无效
	const int a = 10;
    const int * p = &a;
    int *q;
    q = const_cast<int *>(p);
    *q = 20;    //fine
    cout <<a <<" "<<*p<<" "<<*q<<endl;
    cout <<&a<<" "<<p <<" "<<q <<endl;
	// 10 20 20
	// 0xffffcbb4 0xffffcbb4 0xffffcbb4
}
int main(){
	// func4();
	void* t;
	cout<<sizeof(t)<<"\n"; // 8
	// test_const_cast();
    return 0;
}

// #include <iostream>
// using namespace std;
// class base
// {
// public: virtual ~base()
// {

// }
// virtual void print()
// {
// 	cout<<"we are in base"<<endl;
// }
// protected:
// private:
// };

// class derived : public base
// {
// public:
// 	void  print()
// 	{
// 		cout <<"we are in derived"<<endl;
// 	}
// protected:
// private:
// };
// int main()
// {
// 	base *base_ptr1 = new base;
//     base_ptr1->print();
// 	derived *derived_ptr1 =  dynamic_cast<derived*>(base_ptr1);   //base_ptr1实际指向base，不能转化为derived
// 	base *base_ptr2 = new derived;
//     base_ptr2->print();
// 	derived *derived_ptr2 = dynamic_cast<derived*>(base_ptr2);   //base_ptr1实际指向derived，可以化为derived
// 	//derived *derived_ptr2 = new derived;
// 	//base *base_ptr2 = dynamic_cast<base*>(derived_ptr2);
// 	if (derived_ptr1 == NULL)
// 	{
// 		cout <<"base pointer pointed to base can be dynamic_cast to derived pointer  is wrong"<<endl;
// 	} 
// 	else
// 	{
// 		cout<<"pointer to base can be dynamic_cast to derived pointer  is success"<<endl;
// 	}
    
// 	if (derived_ptr2 == NULL)
// 	{
// 		cout <<"base pointer pointed to derived can be dynamic_cast to derived pointer  is wrong"<<endl;
// 	} 
// 	else
// 	{
// 		cout<<"base pointer pointed to derived can be dynamic_cast to derived pointer  is success"<<endl;
// 	}
// 	return 0;
// }

// class A
// {
// public:
//          virtual ~A() { }
// };
// class B : public A
// {
// public:
//         virtual ~B() {  }
// };
// class C: public A
// {
// public:
//         virtual ~C() {  }
// };
// class D: public B, public C
// {
// public:
// 	int i=0; 
// };
// int main()
// {
// //    注意转换的层次性，不能跨层次转换
// 	D *pd = new D;
// 	if(pd) std::cout<<"fail pd.\n";
// 	else std::cout<<"sucecess pd.\n";
// 	B *pb = dynamic_cast<B *>(pd);
// 	if(pb) std::cout<<"fail pb.\n";
// 	else std::cout<<"sucecess pb.\n";
// 	A *pa = dynamic_cast<A *>(pb);
// 	if(pb) std::cout<<"fail pa.\n";
// 	else std::cout<<"sucecess pa.\n";
// 	//    交叉转换
// 	C *pc = dynamic_cast<C *>(pb);
// 	if(pc) std::cout<<"fail pa.\n";
// 	else std::cout<<"sucecess pa.\n";
// 	double f=2.18;
// 	std::cout<<reinterpret_cast<int>(f)<<"\n";
// }