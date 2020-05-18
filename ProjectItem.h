#include<string>
#include<vector>
#include<iostream>
#include<sstream>

using namespace std;

class ProjectItem{

private:
    string _name;
    vector<ProjectItem> _dependencies;
    bool _completed = false;

public:
   ProjectItem(string& name, vector<ProjectItem>& dependencies,  bool status =false)
   {
       _name = name;
       _dependencies = dependencies;
       _completed = status;
   } 

   void addDepencency(ProjectItem& dependency)
   {
       _dependencies.push_back(dependency);
   }
 
   void editStatus (bool completed)
   {
       _completed = completed;
   }
 
   string printItem()
   {   
       stringstream ss;
       ss << "Item: " << _name;
       ss << " Dependencies: ";
       if (_dependencies.size() == 0)
       {
            ss << "NONE ";
       }
       for (auto& item : _dependencies)
       {
           ss << " <<<dependency>>>";
           ss << " " << item.printItem();
           ss << " <<</dependency>>>";
       }
       ss << " Completed: " << _completed;
       return ss.str();
   }
};
