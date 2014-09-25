//
//  main.cpp
//  232Hw4
//
//  Created by Audrey Cole on 9/22/14.
//  Copyright (c) 2014 Audrey Cole. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main()
{
    string name = "Audrey";
    
    //Reverse the string using a stack
    string result1 = "";
    stack<char> letters;
    for (char c: name) {
        letters.push(c);
    }
    while(!letters.empty()){
        result1 += letters.top();
        letters.pop();
    }
    cout << "Reversed string using a stack: " << result1 << endl;
    
    //Reverse the string in place
    int i = 1;
    int j = 0;
    int length = name.length();
    while(j < i) {
        char temp = name[j];
        cout << name[j];
        name[j] = name[length - i];
        
        name[length- i] = temp;
        i--;
        j++;
    }
    cout << "Reversed string in place: " << name << endl;
    return 0;
}

