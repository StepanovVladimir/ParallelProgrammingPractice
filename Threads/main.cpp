#include "Worker.h"
#include "Task.h"
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    int threadsCount = stoi(argv[1]);
    vector<Worker> workers(threadsCount);
    for (int i = 0; i < threadsCount; ++i)
    {
        ITask* task = new Task(i + 1);
        workers[i].ExecuteTask(*task);
    }
}