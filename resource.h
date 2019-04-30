#ifndef RESOURCE_H
#define RESOURCE_H


class Resource
{
private:
    int _usage;
public:
    Resource();
    virtual ~Resource();
    virtual bool operator<(Resource & r);
    virtual bool operator>(Resource & r);
    virtual int getUsage();
    virtual void setUsage(int newUsage);
};

#endif // RESOURCE_H
