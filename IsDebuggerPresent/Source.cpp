#include <stdio.h>
#include <Windows.h>

int main()
{
	int iResult;
	iResult = IsDebuggerPresent();
	if (iResult)
	{
		printf("Debug is detected!\n");
		return 1;
	}
	printf("Loadling!\n");
	return 0;
}


