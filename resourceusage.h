#ifndef RESOURCEUSAGE_H
#define RESOURCEUSAGE_H


class ResourceUsage
{
private:
    vector<Resource> _resourceUsage;
public:
    ResourceUsage();
    bool operator<(ResourceUsage ru);
    bool operator>(ResourceUsage ru);
};

#endif // RESOURCEUSAGE_H
