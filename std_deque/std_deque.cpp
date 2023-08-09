#include <iostream>
#include <deque>

int main() {
	std::deque<int>myDeQ { 2, 3, 4 };
	for (const auto& i : myDeQ)
		std::cout << i << std::endl;

	myDeQ.push_front(1); // Push @ front 
	myDeQ.push_back(5);  // Push @ back 

	std::cout << "After the two pushes\n";

	for (const auto& i : myDeQ)
		std::cout << i << " ";

	myDeQ.pop_front(); // pop element at front
	myDeQ.pop_back();  // pop element at back 
	// both functions return void

//int myNum = myDeQ.pop_front();  // would be wrong 

	int myNum = myDeQ.front();		 // Use this if needed
	// front returns value stored but 
	// it doesn't pop the element out 

	std::cout << "After the two pops\n";

	for (const auto& i : myDeQ)
		std::cout << i << " ";

	return 0;
}