#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string folderPath = "/home/sid/projects/CPP-practice-sets/";
    for (int i = 33; i <= 99; ++i)
    {
        std::string filename = folderPath + "practice" + std::to_string(i) + ".cpp";

        std::ofstream file(filename);
        if (file.is_open()){
            file.close();
        }else {
            std::cerr << "Error: Could not create file at " << filename << "\n";
        }
    }
    std::cout << "Files successfully created in the folder\n ";
    return 0;
}