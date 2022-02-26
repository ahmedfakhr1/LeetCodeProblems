#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Process{
    char singleProcess;
    int singleProcessTime;

};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfProcesses=0;
    int quantum=0;
    queue<Process> queue;
    std::cin>>numberOfProcesses;
    std::cin>>quantum;
    vector<Process> processes(numberOfProcesses);
    for(int i =0;i<numberOfProcesses;i++){
        Process p1;
        std::cin>>p1.singleProcess;
        std::cin>>p1.singleProcessTime;
        queue.push(p1);
    }
    //cout<< queue.size();
    while(!queue.empty()){
        if (queue.front().singleProcessTime <=quantum) {
            cout<<queue.front().singleProcess;
            queue.pop();
        }
        else {
           // cout<<queue.front().singleProcess;
            queue.front().singleProcessTime=queue.front().singleProcessTime-quantum;
            queue.push(queue.front());
            cout<<queue.front().singleProcess;
            queue.pop();
        }


    }
    return 0;
}
