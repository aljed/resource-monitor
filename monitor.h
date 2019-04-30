#ifndef MONITOR_H
#define MONITOR_H


class Monitor
{
private:
    SystemAnalyzer _systemAnalyzer;
    Intervenor _intervenor;
    RulesManager _rulesManager;
public:
    Monitor();
    void startMonitoring();
};

#endif // MONITOR_H
