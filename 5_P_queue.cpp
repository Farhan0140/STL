#include<bits/stdc++.h>
using namespace std;

#define kill return

#define fast_read() (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//!Global_Declaration---------------------------------------------------------------------------

priority_queue<int>pq;     //Normal Initialization
priority_queue<int>pq1;
priority_queue<double>pq2;  //Normal Initialization
priority_queue<char>pq3;    //Normal Initialization
priority_queue<string>pq4;  //Normal Initialization

// The normal Priority_Queue will always print the larger value
// If we want the Priority_Queue will always print the lower value
// then we need to follow this rule

// priority_queue<int, vector<int>, greater<int>> pq;     //Normal Initialization

//!---------------------------------------------------------------------------------------------
void Print1(priority_queue<int>pqq);
void Print2(priority_queue<int>pqq);
//!---------------------------------------------------------------------------------------------

// Who will We give More Priority to?
// Of course the biggest value

int main(){
    fast_read();

    //___Size__&_value_push__________________________________________________

    cout << "Initial Size : " << pq.size() << endl;
    pq.push(3);
    pq.push(1);
    pq.push(7);
    //  as like as push function
    pq.emplace(4);
    pq.emplace(90);
    pq.emplace(90);
    cout << "Size after Pushing 5 element : " << pq.size() << endl;

    //.......Element access.......................
    
    cout << endl;
    cout << "Print Front value : " << pq.top() << endl;  //  top() pointing the biggest value in this container 
    
    //!__Pop____________________________________________________________________________________

    cout << endl;
    cout << "Before Delete last value : "; Print1(pq);

    pq.pop();

    cout << "After Delete last value : "; Print2(pq);

    //!___Swap__________________________________________________________________________________

    cout << endl;
    pq1.push(1);
    pq1.push(1);
    pq1.push(1);
    //  as like as push function
    pq1.emplace(1);
    pq1.emplace(1);
    pq1.emplace(1);
    cout << "Before Swap pq : "; Print1(pq);
    cout << "Before Swap pq1 : "; Print2(pq1);

    pq.swap(pq1);

    cout << "After Swap pq : "; Print1(pq);
    cout << "After Swap pq1 : "; Print2(pq1);

    kill 0;
}


//!---------------------------------------------------------------------------------------------
void Print1(priority_queue<int>pqq){
    while(!pqq.empty()){
        cout << pqq.top() << " ";   // Printing first value
        pqq.pop();   // Removing first value
    }
    cout << endl;
}

void Print2(priority_queue<int>pqq){
    while(pqq.size() > 0){
        cout << pqq.top() << " ";   // Printing first value
        pqq.pop();   //   Removing first value
    }
    cout << endl;
}
//!---------------------------------------------------------------------------------------------