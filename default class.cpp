#include<iostream>
#include<string>
#include<string_view>

class Doctor
{
public: 
    Doctor( std::string_view name, int id, char shift )
        : m_name { name }
        , m_id { id }
        , m_shift { shift }
        {

        }

private: 
    std::string m_name{}; 
    int m_id{};
    char m_shift{}; 
};

int main()
{
    Doctor ali { "Ali", 56, 'd' }; 
    return 0; 
}
