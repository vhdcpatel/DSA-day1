#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>

// For example
// #include <math.h>
// #include <string.h>

// To include all header but this will increase the compilation time of the code.
// #include <bits/stdc++.h>
using namespace std;
// Containers for storing data

void printVector(vector<int> vt1)
{
    cout << endl;
    for (auto it : vt1)
    {
        cout << it << "-";
    }
    cout << endl;
}

void learnPair()
{

    pair<int, int> p{1, 3};
    cout << p.first << "-" << p.second;

    // Pair inside pair
    pair<int, pair<int, int>> p2 = {1, {3, 5}};
    cout << p2.first << "--" << p2.second.first << "--" << p2.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second;
}

void explainVector()
{
    // It has dynamic memory allocation.for array we can't modify the size.
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2); // Increase size and insert at the end.

    // pair vector
    vector<pair<int, int>> vPair;

    vPair.push_back({1, 2});
    vPair.emplace_back(3, 4);

    cout << vPair[1].second << endl;

    // Giving size of the vector.(size,and element (if only one given then n instance of that one.))
    vector<int> v(1, 96);
    v.push_back({10});
    v.push_back({20});
    v.push_back({30});
    v.push_back({40});
    v.push_back({50});

    // or just size and value will be any garbage value or zero based on the compiler.
    // (size, value of all)
    vector<int> v3(10, 96);
    cout << "**" << v3[0] << endl;

    // Even if we define size we can push_back and emplace_back and increase the size of the vector.

    // to make copy.????
    vector<int> vCopy(v3);
    // Both have different memory location.
    cout << "Memory Locations" << &vCopy << " " << &v3 << endl;

    // Access the element of the vector.
    cout << v3[0] << v3.at(0);

    // Iterators:
    vector<int>::iterator it = v.begin();
    it = it + 3;
    cout << "Value at the beginnings" << *(it) << endl;
    // Just point to the memory is stored.
    vector<int>::reverse_iterator it2 = v.rend();   // First of the vector(last of the first )
    vector<int>::reverse_iterator it3 = v.rbegin(); // last of the vector(r-> Reverse and begin from that)

    cout << "Back element:(last element)" << v.back() << endl;

    // Iterating over vector with loop and iterator.
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "-";
    }

    // Type Inference -> (auto): to infer the type of the var in the c++
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "-";
    }
    cout << endl;

    // Even shorter.
    // auto here means int
    // for each loop
    cout << "For Each loop" << endl;
    for (auto it : v)
    {
        cout << it << "-";
    }
    cout << endl;
    // Deletion in the vector.
    // erase ( pass the iterator of the element which you have to delete.)
    v.erase(v.begin() + 2); // delete second element from start so third element.
    printVector(v);

    // to remove multiple give starting address and address of ending after the deletion.(ending which will not be deleted.)
    v.erase(v.begin() + 1, v.begin() + 3);
    printVector(v);

    // Insert function
    vector<int> vt1(2, 90);
    vt1.insert(vt1.begin(), 100);
    vt1.insert(vt1.begin() + 1, 3, 10);
    // position , number of times , number you want to insert.

    vector<int> vt2(2, 96);
    vt1.insert(vt1.begin(), vt2.begin(), vt2.end());
    // Combining the vector vt1 and vt2.
    cout << vt1.size();

    // pop back, it remove and  give the first value of the vector.
    vt1.pop_back();
    // Swap the vector value of both the vector.
    vt1.swap(vt2);

    vt1.clear();         // Trim down to the empty vector.
    cout << vt1.empty(); // Return boolean for vector empty state.
}

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    // very mush cheap then insert for vector.

    ls.emplace_front();

    // For vector singly linked list is used while in list double linked list is used so pushing is less costlier in the list compare to the vector.

    // ls.emplace_back

    // Rest Function is same as vector.
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque()
{
    // Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.
    // Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front.
    // This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(1);
    dq.emplace_front(0);

    dq.pop_back();
    dq.pop_front();

    dq.front();

    // rest is same as the  vector
    // begin, end, rbegin, rend, clear, insert, size, swap.
}

void explainStack()
{
    stack<int> stk;
    stk.push(1); // push will be always on the top.
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.emplace(0); // to push at the front.

    cout << stk.top(); // no indexing, stk[2] is not allowed.

    // Three main basic functions
    // 1. Push 2. Pop 3. top

    stk.pop(); // removed first
    // Last in First out.(LIFO) Principal;

    cout << stk.top();
    cout << stk.size();
    cout << stk.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(5);
    // All inserted at the end,

    q.back() += 5; // modify value
    // Queue follow FIFO(First in first out) principal.

    cout << q.back() << endl; // 10
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    // size swap and empty work same as the stack.
    // all operation happen in the O(n)
}

void explainPQ()
{
    // Max Heap
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(10);    // {10,5}
    pq.push(7);     // {10,7,5}
    pq.emplace(15); //{15,10,7,5}

    // Biggest value stored at the top with help of tree data structure.
    // For deep explanation refer google after learning the tree.

    cout << pq.top() << endl; // 15

    pq.pop(); // -- 10

    cout << pq.top() << endl; // 10
    // Size swap empty functions same as others.

    // Minimum Heap(stored minimum at the top)
    priority_queue<int, vector<int>, greater<int>> pqLower;
    pqLower.push(10);
    pqLower.push(1);
    pqLower.push(5);
    cout << pqLower.top() << endl; // 1

    // Time complexity.
    // push: O(log(n))
    // top O(1)
    // pop: O(log(n))
}

int main()
{
    // learnPair();
    // explainVector();
    // explainQueue();
    explainPQ();

    return 0;
}