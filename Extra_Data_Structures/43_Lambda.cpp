#include<iostream>
#include<algorithm>
#include<vector>

using std::cout;
using std::endl;
using std::cin;

int main(){

    int a =5;
    //capture group allows variables to be passed in
    //common captures:
    // = all passed by value
    // & all passed by reference
    //individual variables can also be passed

    auto lambda = [&](int value){cout<<value+a<<endl;};

    //auto name = [captures](parameters){executed code;};
    lambda(4);

    std::vector<int> nums = {1,6,8,3,2,9};

    //example when lambda is useful
    auto firstEven = std::find_if(nums.begin(),nums.end(), /*lambda function*/ [](int value){return value%2==0;});
    cout<<*firstEven<<endl;

    return 0;
}