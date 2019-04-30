#ifndef RULE_H
#define RULE_H


class Rule
{
private:
    unordered_map<Process> _processesList;
    vector<Punishment> _actionsSet;
    ResourceLimits _limits;
public:
    Rule();
    bool areLimitsExceeded(unordered_map<Process> & processTable);
};

#endif // RULE_H
