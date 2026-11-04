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
    
    void kisses( const Doctor& i )
    {
        std::cout << m_name << " kisses " << i.m_name; 
    }

private: 
    std::string m_name{}; 
    int m_id{};
    char m_shift{}; 
};

int main()
{
    Doctor ali { "Ali", 56, 'd' }; 
    Doctor sara { "Sara", 34, 'n' }; 
    ali.kisses(sara); 

    return 0; 
}
