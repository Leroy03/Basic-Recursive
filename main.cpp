//
//  main.cpp
//  etutor
//
//  Created by Leroy on 02/04/2019.
//  Copyright © 2019 Leroy. All rights reserved.
//
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/*main thought
 f(n)
 = n+1 if n = 0, n = 1;
 = f(n-1) + f(n/2)(floor) if n > 1;
 */
int recursive(double n)
{
    if(n <= 1)
        return n + 1;
    return recursive(n-1) + recursive(floor(n/2));
}
int main()
{
    int num;
    while(cin>>num)
    {
        cout<<recursive(num)<<endl;
    }
    
}

