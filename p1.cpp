#include <iostream>

using namespace std;

class TimeConverter 
{
	public:
    static void convertSeconds(int totalSeconds) 
	{
        int h = totalSeconds / 3600;
        int m = (totalSeconds % 3600) / 60;
        int s = totalSeconds % 60;

        
        if (h < 10) cout << "0";
        cout << h << ":";

        
        if (m < 10) cout << "0";
        cout << m << ":";

        
        if (s < 10) cout << "0";
        cout << s;
    }
};

int main()
{
    int seconds;
    cin >> seconds;

    TimeConverter::convertSeconds(seconds);
    return 0;
}

