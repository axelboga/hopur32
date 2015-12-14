#include "compsciconnectionservices.h"

CompSciConnectionServices::CompSciConnectionServices() {
    connectionRepo = CompSciConnectionRepository();
}

bool CompSciConnectionServices::addConnection(string sci_id, string comp_id) {
    return connectionRepo.addConnection(sci_id, comp_id);
}

void CompSciConnectionServices::removeConnection(string sci_id, string comp_id) {
    connectionRepo.removeConnection(sci_id, comp_id);
}
