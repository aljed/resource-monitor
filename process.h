#ifndef PROCESS_H
#define PROCESS_H

public class Process
{

private:
    unsigned int _processID;
    ResourceUsage _resource_usage;

public:
    Process();
    Process(Process & p);
    ~Process();

};

#endif // PROCESS_H
