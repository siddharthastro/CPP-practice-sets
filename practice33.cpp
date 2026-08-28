// finding current time in IST "IST = GMT + 19800 secoonds"
# include <iostream>
# include <ctime>
int main()
{
long timePassedSecond = time(0) + 19800;
int currentSecond = timePassedSecond%60;
long timePassedMinute = timePassedSecond/60;
int currentMinute = timePassedMinute%60;
long timePassedHour = timePassedMinute/60;
int currentHour = timePassedHour%24;
std::cout << "Current Time :" << "\n";
std::cout << currentHour << " : " << currentMinute << " : " << currentSecond << " : ";
return 0;
}