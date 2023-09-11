#include <iostream>
#include <Common/Base.h>

int main()
{
	std::cout << "ChatBleu Client!" << std::endl;
	std::cout
		<< "Result Code Value for Success"
		<< " = "
		<< static_cast<int>(ResultCode::SUCCESS)
		<< std::endl;

	return 0;
}
