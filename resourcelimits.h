#ifndef RESOURCELIMITS_H
#define RESOURCELIMITS_H


class ResourceLimits
{
private:
    vector<Resource> _maxValues;
public:
    ResourceLimits();
    bool ifLimitsExceeded(vector<Resource> toCheck);
};

#endif // RESOURCELIMITS_H
