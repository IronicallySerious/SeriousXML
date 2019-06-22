#pragma once

#include <iostream>
#include "errors.h"

#define ERROR(ErrorEnum) \
::std::cout << "SeriousXML> Fatal Error: " << ErrorEnum << " has occured" << ::std::endl;

#define SUCCESS(Message) \
::std::cout << "SeriousXML> Success: " << #Message << ::std::endl;
