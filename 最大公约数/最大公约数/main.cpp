//
//  main.cpp
//  最大公约数
//
//  Created by 胡斌 on 2019/4/20.
//  Copyright © 2019 胡斌. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Number{
public:
    
    Number(int x){
        var=x;
    }
    Number maxDivisor(Number temp){
        return Number (gcd(var,temp.var));
    }
    void show(){
        cout<<var<<endl;
    }
private:
    int var;
    int gcd(int a,int b){
        int temp;
        if(a<b){
            int t;
            t=a;
            a=b;
            b=t;
        }
        while(a%b!=0){
            temp=a%b;
            a=b;
            b=temp;
        }
        return b;
    }
    
};

int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //最大公约数
        no3.show();
    }
}
