#pragma once

#include <windows.h>

class ITask
{
public:
	virtual ~ITask() = default;

	virtual void Execute() = 0;
};