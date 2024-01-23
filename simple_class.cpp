#include "simple_class.hpp"
    SimpleClass::SimpleClass()
    {
    }
    SimpleClass::SimpleClass(const std::string& a_name) : name (a_name)
    {
    }
    void SimpleClass::add_to_vector(const long& a_number)
    {

    }
    std::string SimpleClass::get_name()
    {
        return name;
    }
    void SimpleClass::set_name(const std::string& a_name)
    {
        name = a_name;;
    }
    std::vector<long> SimpleClass::get_vector()
    {
        return some_numbers;
    }
