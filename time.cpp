#include <iostream>
#include <chrono>

using namespace std;
// timer structure which will time the function as long as the structure object alive
// here inside the function definition
struct Timer {

	std::chrono::time_point<std::chrono::high_resolution_clock> start,  end;
	std::chrono::duration<float> duration;
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	} 
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		cout << "Time taken= " << duration.count() << " s" << endl;
	}
};

void function()
{
	Timer timer;
	for(int i=0; i < 100; i++)
		cout <<"in loop" << endl;
}

int main()
{
	function();
	
	cout << "Hallo world" << endl;
	cin.get();
	return 0;
}
