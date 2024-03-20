
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
    int tot = 0;
    for (const auto& i: workloads)
    {
        tot += i.second;
    }
    return tot;
}

// task 3

void sortTasks(std::vector<Task>& tasks)
{
    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        if (a.getTotalLoad() != b.getTotalLoad())
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
    int loadPerson = 0;
    for (const Task& task: allTasks)
    {
        auto pers = task.workloads.find(worker.login);
        if (pers != task.workloads.end()) loadPerson += pers->second;
    }

    return loadPerson;
}

// task 5
void addTask(std::vector<Task>& tasks, const Task& newTask, const std::vector<Worker>& workers)
{

    for (const auto& wor: workers)
    {
        int totLoad = getWorkerLoad(tasks, wor) + getWorkerLoad({newTask}, wor);

        if (totLoad > wor.maxLoad) throw std::runtime_error("Overworked");
    }
    tasks.push_back(newTask);
}

bool compareAllWorkers(std::pair<std::string, int> wor1, std::pair<std::string, int> wor2)
{
    return wor1.first < wor2.first;
}

// task 6
void addTaskVerbose(std::vector<Task>& tasks, const Task& newTask, const std::vector<Worker>& workers)
{
    tasks.push_back(newTask);
    std::pair<std::string, int> compare;
    std::vector<std::pair<std::string, int>> overWorkers;

    for (const auto& p: workers)
    {

        int totLoad = getWorkerLoad(tasks, p);
        compare.first = p.login;
        compare.second = totLoad - p.maxLoad;
        if (totLoad > p.maxLoad) overWorkers.push_back(compare);
    }

    if (!overWorkers.empty() > 0)//Так как overWorkers не пустой, то при overWorkers.empty() будет false, но из за того, что !overWorkers.empty() будет true
    {

        std::sort(overWorkers.begin(), overWorkers.end(), compareAllWorkers);//В любом случае мы указываем условие сортировки в compareAllWorkers и таким образом выводим именно то, что нам нужно
        std::string errormessage = "Overworked: ";
        for (int c = 0; c < overWorkers.size(); c++)
        {
            errormessage += overWorkers[c].first + " by " + std::to_string(overWorkers[c].second) + ", ";
        }
        errormessage.erase(errormessage.end() - 2, errormessage.end());
        throw std::runtime_error(errormessage);
    }
}
