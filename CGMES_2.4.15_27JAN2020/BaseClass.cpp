
#include "BaseClass.hpp"

using namespace CIMPP;

BaseClass::~BaseClass() {}

void BaseClass::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void BaseClass::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void BaseClass::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char BaseClass::debugName[] = "BaseClass";
const char* BaseClass::debugString()
{
	return BaseClass::debugName;
}

CIMPP::BaseClassDefiner BaseClass::declare() {
	return BaseClassDefiner(BaseClass::addConstructToMap, BaseClass::addPrimitiveAssignFnsToMap, BaseClass::addClassAssignFnsToMap, BaseClass::debugName);
}
