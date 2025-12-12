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

void load_Tasks()
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
    ofstream file("Tasks.txt");
    for(size_t i = 0; i < Tasks.size(); i++)
    {
        if(Tasks[i].completed)
        {
            file <<"1 ";
        }
        else
        {
            file <<"0 ";
        }
        file << Tasks[i].description <<endl;
    }
    file.close();
}

void show_Tasks()
{
    if(Tasks.empty())
    {
        cout<<"\n No Tasks Yet ! Add one To Get Started."<<endl;
        return ;
    }
    cout<<"\n === Your To-Do List ==="<<endl;
    for(size_t i = 0, i < Tasks.size(); i++)
    {
        cout<< i + 1 <<". ";
        if(Tasks[i].commpleted)
        {
            cout<<"[X]";
        }
        else
        {
            cout<<"[ ]";
        }
        cout<<Tasks[i].desription <<endl;
    }
}

void add_Task()
{
    Task t;
    cout<<"\nEnter Tasks Description : ";
    cin.ignore();
    getline(cin, t.description);
    t.complete = False;

    Tasks.push_back(t);
    saveTasks();

    cout<<"Task Added !" <<endl;
}

void mark_Complete()
{
    show_Tasks();
    if(Tasks.empty())
    return;

    int num;
    cout<<"\nEnter Tasks No. To Mark Tasks As Complete : ";
    cin>>num;

    if(num > 0 && num <= Tasks.size())
    {
        Tasks[num - 1].completed= true;
        save_Tasks();
        cout<<"Tasks Marked As Completed ! "<<endl;
    }
    else
    {
        cout<<"Invalid Tasks Number ! "<<endl;
    }
}

int main()
{
    cout<<"This is To-Do list"<<endl;
    return 0;
}
