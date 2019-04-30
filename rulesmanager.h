#ifndef RULESMANAGER_H
#define RULESMANAGER_H


class RulesManager
{
private:
    vector<Rule> _rulesSet;
public:
    RulesManager();
    void addRule();
    void removeRule(Rule rule);
    void removeProcess(Rule rule, Process process);
    void addProcess(Rule rule, Process process);
};

#endif // RULESMANAGER_H
