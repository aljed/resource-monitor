#ifndef SYSTEMANALYZER_H
#define SYSTEMANALYZER_H

#include <cstddef>
#include "process.h"
#include <vector>
#include <shared_ptr>

using namespace std;

class SystemAnalyzer
{
private:
    using  ProcessTablePointer = shared_ptr<vector<Process>>;
    vector<Process> _processTable;
public:
    SystemAnalyzer();
    ProcessTablePointer getProcessTable();
    void updateProcessTable();
};

#endif // SYSTEMANALYZER_H
