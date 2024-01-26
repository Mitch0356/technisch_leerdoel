#include <iostream>
#include <string>
#include <vector>

class SimpleClass
{
    public:
    SimpleClass();
    SimpleClass(const std::string& a_name);
    void add_to_vector(const long& a_number);
    std::string get_name();
    void set_name(const std::string& a_name);
    std::vector<long> get_vector();
    private:
    std::string name;
    std::vector<long> some_numbers;
};