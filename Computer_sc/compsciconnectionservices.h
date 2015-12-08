#ifndef COMPSCICONNECTIONSERVICES_H
#define COMPSCICONNECTIONSERVICES_H
#include "compsciconnectionrepository.h"
#include "computer.h"
#include "scientist.h"


class CompSciConnectionServices
{
public:
    CompSciConnectionServices();
    void addConnection(string sci_id, string comp_id);
    void removeConnection(string sci_id, string comp_id);
private:
    CompSciConnectionRepository connectionRepo;
};

#endif // COMPSCICONNECTIONSERVICES_H
