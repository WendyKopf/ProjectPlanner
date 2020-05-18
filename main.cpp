#include "Project.h"
#include<iostream>

int main(int argc, char *argv[])
{
    string name1 = "A";
    vector<ProjectItem> dependencies2{};
    ProjectItem a = ProjectItem(name1, dependencies2);
    vector<ProjectItem> dependencies = {a};
    string name = "C";
    ProjectItem C = ProjectItem(name, dependencies);

    std::cout << C.printItem() << std::endl;
   
    C.editStatus(true);
    std::cout << C.printItem() << std::endl;
    return 0;
}

