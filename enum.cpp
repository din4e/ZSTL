#include<bits/stdc++.h>
using namespace std; 
enum Enumeration{ Val1, Val2, Val3 = 100, Val4 /* = 101 */};
enum class Enumeration2{ Val1, Val2, Val3 = 100, Val4 /* = 101 */};
// // Wrong
// enum class color
// {
//     void foo(){}
// };
void test_enum(){
    cout<<Enumeration::Val4<<"\n";
    // cout<<Enumeration2::Val4<<"\n"; // error
    cout<<static_cast<int>(Enumeration2::Val4)<<"\n";
}
int main(){
    test_enum();
    return 0;
}