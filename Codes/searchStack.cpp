/******************************************************************************

created by @AhmetKara
GitHub: https://github.com/ahmetQara

*******************************************************************************/

// C++ program to check if the alt stack elements are in the main stack 

#include <bits/stdc++.h>
using namespace std;

// Function to check subStack exists or not

bool isSearchStackElements(stack<string> mainStack, stack<string> altStack)
{
	// Create a flag variable
	bool flag = false;
    int count = 0;

	// Until the stacks are not empty compare top of both stacks
	while (mainStack.empty() == false) 
    {
    	if (mainStack.top() == altStack.top()) 
    	    {
    			mainStack.pop();
    			altStack.pop();
    			count++;
    		}else mainStack.pop();
			 		
        if (count == altStack.size()+1)
        {
        flag = true;
        break;
        }
    }
	
	// Return flag
	return flag;
}

// Driver Code
int main()
{
	// Creating stacks
	stack<string> mainStack;
	stack<string> altStack;

	// Inserting elements to mainStack
	mainStack.push("x");
	mainStack.push("a");
	mainStack.push("y");
	mainStack.push("b");
	mainStack.push("c");
	mainStack.push("z");


	// Inserting elements to altStack(subStack)
	altStack.push("a");
	altStack.push("b");
	altStack.push("c");

	
	if (isSearchStackElements(mainStack, altStack))
		cout << "\nSUCCESS! Alt stack elements exists in the main stack!";
	else
		cout << "\nERROR: Alt stack elements does NOT exist in the main stack!";

	return 0;
}
