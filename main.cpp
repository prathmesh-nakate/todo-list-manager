#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

struct Task
{
    string description;
    bool completed;
};

vector<Task> tasks

void load_tasks()
{
    ifstream file("tasks.txt");
    if(!file.is_open())
    return;

    string line;
    while(getline(file, line))
    {
        if(line.empty())
        continue;

        Task t;
        if(line[0] == '1')
        {
            t.completed = true;
            t.description = line.substr(2);
        }
        else
        {
            t.completed = true;
            t.description = line.substr(2);
        }
        task.push_back(t);
    }
    file.close();
}

void save_Tasks()
{
    ofstream file("tasks.txt");
    for(size_t i = 0; i < tasks.size(); i++)
    {
        if(tasks[i].completed)
        {
            file << "1 ";
        }
        else
        {
            file <<"0 ";
        }
        file << tasks[i].description <<endl;
    }
    file.close();
}

int main()
{
    cout<<"This is To-Do list"<<endl;
    return 0;
}
