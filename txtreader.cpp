#include <iostream>
#include <fstream>

int main() {
    std::ifstream file1("services_export.txt");
    std::ifstream file2("services_export_new.txt");
    std::ofstream new_file("changed_services.txt");

    if(!file1.is_open() || !file2.is_open()) {
        std::cerr << "Error, no file found: services_export.txt or services_export - Copy.txt" << std::endl;
        return 1;
        }

    if(!new_file.is_open()) {
        std::cerr << "Error, could not create changed_services.txt." << std::endl;
        return 1;
    }
    
    std::string line1, line2;
    int line_number = 1;
    new_file << "These are the services that have been changed:" << std::endl;

    while(std::getline(file1, line1) && std::getline(file2, line2)) {
        if(line1 != line2) {
            std::cout << "Files differ on line " << line_number << std::endl;
            new_file << line2 << std::endl;
            
    if (!new_file.is_open()) {
        std::cerr << "Error, can't create file." << std::endl;
        return 1;
    }
        //return 0;
        }
        line_number++;
    }

    if(std::getline(file1, line1) || std::getline(file2, line2)) {
        std::cerr << "Error, files can't have different number of lines" << std::endl;
        return 1;
    }

    file1.close();
    file2.close();
    new_file.close();

    return 0;
}
