#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    v.push_back(10);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    v.push_back(20);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    v.push_back(30);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    //the above code shows the capacity of vector doubles on ading extra elements.

    cout<<"Element at index 1 is: "<<v.at(1)<<endl;
    cout<<"front element: "<<v.front()<<" "<<"Back element: "<<v.back()<<endl;
    //v.pop_back()   -->  To remove an element from the back
    //v.clear()  --> to remove elements of the vector but th capacity remains same.


    /*Deque:
    In this ds we can push elements from both front and back using push_back() and push_front()
    also we can pop the elements from both front and back
    we can also delete the elements by using clear() function by assigning a range of elements.*/

    /*stack*/
    stack<string> s;
    s.push("amar");
    s.push("akbar");
    s.push("anthony");
    cout<<"top element: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;

    /*queue*/
    queue<string>q;
    q.push("amar");
    q.push("akbar");
    q.push("anthony");
    cout<<"front element: "<<q.front()<<endl;
    q.pop();
    cout<<"front element: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;

    /*priority queue*/ 
}