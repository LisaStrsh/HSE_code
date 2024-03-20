
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <vector>

struct Task {
    std::string text;
    std::string date;
    std::map<std::string, int> workloads;
    using Workload = std::map<std::string, int>::value_type;

    Task(const std::string& text, const std::string& date, const std::map<std::string, int>& workloads);
    int getTotalLoad() const;
};

// task 1
Task::Task(const std::string& t, const std::string& d, const std::map<std::string, int>& w)
{
    text = t;
    date = d;
    workloads = w;
}


struct Worker {
    std::string name;
    std::string login;
    int maxLoad;

    Worker(const std::string& name, const std::string& login, int maxLoad);

    // might be needed for task 5
    bool isOverworked(const std::vector<Task>& tasks) const;
};

// task 1
Worker::Worker(const std::string& n, const std::string& log, int max)
{
    name = n;
    login = log;
    maxLoad = max;
}


// task 2
int Task::getTotalLoad() const
{
    int sum = 0;
    for(const auto& hold : workloads )   // Запомни что для использования for оr while надо использовать " const auto&"
    {
        sum += hold.second;
    }
    return sum;
}

// task 3

void sortTasks(std::vector<Task>& tasks)
{
    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {

        if(a.getTotalLoad() != b.getTotalLoad())
        {
            return (a.getTotalLoad() < b.getTotalLoad());
        }
        else if (a.date != b.date)
        {
            return (a.date < b.date);
        }
        else
        {
            return (a.text < b.text);
        }

    });
}


// task 4
int getWorkerLoad(const std::vector<Task>& allTasks, const Worker& worker)
{
    int totsum = 0;

    for( const Task& task: allTasks)
    {
        auto person = task.workloads.find(worker.login);
        if(person != task.workloads.end())
        {
            totsum += person->second;
        }
    }

    return totsum;
}

// task 5
void addTask(std::vector<Task>& tasks, const Task& newTask, const std::vector<Worker>& workers)
{
    int totLoad;

    for( const auto& pers : workers)
    {
        totLoad = getWorkerLoad(tasks, pers) + getWorkerLoad({newTask}, pers);
        if (totLoad > pers.maxLoad)
        {
            throw std::runtime_error("Overworked");
        }
    }
}

// bool compareAllWorkers(std::pair<std::string, int> wor1, std::pair<std::string, int> wor2){
//     return wor1.first < wor2.first;
// }

// task 6
void addTaskVerbose(std::vector<Task>& tasks, const Task& newTask, const std::vector<Worker>& workers)
{
    tasks.push_back(newTask);
    std::pair<std::string, int> for_compare;
    std::vector<std::pair<std::string, int>> overWorkers;


    for (const auto& wor: workers)
    {
        int difLoad = getWorkerLoad(tasks, wor) - wor.maxLoad;
        if (difLoad < 0)
        {
            for_compare.first = wor.login;
            for_compare.second = difLoad;
            overWorkers.push_back(for_compare);
        }
    }
    if(!overWorkers.empty())
    {
        std::sort(overWorkers.begin(), overWorkers.end(), for_compare.second);
    }
}
