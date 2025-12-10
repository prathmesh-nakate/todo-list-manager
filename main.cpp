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

void show_Tasks()
{
    if(tasks.empty())
    {
        cout<<"\n No Tasks Yet ! Add one To Get Started."<<endl;
        return ;
    }
    cout<<"\n === Your To-Do List ==="<<endl;
    for(size_t i = 0, i < tasks.size(); i++)
    {
        cout<< i + 1 <<". ";
        if(tasks[i].commpleted)
        {
            cout<< "[X]";
        }
        else
        {
            cout<<"[ ]";
        }
        cout<< tasks[i].desrription <<endl;
    }
}

int main()
{
    cout<<"This is To-Do list"<<endl;
    return 0;
}
