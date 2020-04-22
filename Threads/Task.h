#pragma once

#include "ITask.h"

class Task : public ITask
{
public:
	Task(unsigned threadNumber);

	void Execute() override;

private:
	unsigned _threadNumber;
};