#include<bits/stdc++.h>
using namespace std;
void test_tuple(){
    tuple<string,int,float>  t1("sa",8,23.0);
    tuple<string,int,double> t2("sa",8,23.0);
    cout<<sizeof(string)<<"\n"; // 8
    cout<<sizeof(int)<<"\n";    // 4  
    cout<<sizeof(float)<<"\n";  // 4    
    cout<<sizeof(t1)<<"\n";     // 16
    cout<<sizeof(t2)<<"\n";     // 24
}
void test_decltype(){
    int i = 42;
	decltype(i = 41) x = i;
	auto y = i;
	auto& z = i;
	printf("i x y z 此时为： %d %d %d %d\n", i,x,y,z);
	i--;
	printf("i x y z 此时为： %d %d %d %d\n", i, x, y, z);
	x--;
	printf("i x y z 此时为： %d %d %d %d\n", i, x, y, z);
	y--;
	printf("i x y z 此时为： %d %d %d %d\n", i, x, y, z);
	z--;
	printf("i x y z 此时为： %d %d %d %d\n", i, x, y, z);
}
int main(){
    test_decltype();
    // test_tuple();
    return 0;
}