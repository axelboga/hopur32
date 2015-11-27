#include "logic.h"

logic::logic()
 {
    compSciRepo = repository();
 }

void logic::add(ComputerScientist c)
{
    compSciRepo.add(c);
}

