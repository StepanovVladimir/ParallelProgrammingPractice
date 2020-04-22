#include "Task.h"
#include <iostream>

using namespace std;

Task::Task(unsigned threadNumber)
	: _threadNumber(threadNumber)
{
}

void Task::Execute()
{
	cout << "Thread #" << _threadNumber << " do their job" << endl;
}