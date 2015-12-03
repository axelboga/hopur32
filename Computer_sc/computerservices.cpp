#include "computerservices.h"
#include "computer.h"
#include "computerrepository.h"

ComputerServices::ComputerServices(){
    compRepo = ComputerRepository();
}

void ComputerServices::add(Computer computer){
    compRepo.add(computer);
}

