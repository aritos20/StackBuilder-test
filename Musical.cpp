#include "Musical.hpp"

Musical::Musical()
{}

Musical::Musical(std::string melody)
{
    this->_melody = split(melody);
}

Musical::~Musical()
{
    delete[] this->_melody;
}

// This function split the melody by comma followed by space and return a new array with the melody inside
std::string*   split(std::string melody)
{
    std::string *split = new std::string[4];
    int j = 0;
    int k = 0;

    for (int i = 0; i < melody.length(); i++)
    {
        if (melody[i] == ' ' && melody[i - 1] == ',')
        {
            split[j] = melody.substr(k, i - 1 - k);
            j++;
            k = i + 1;
        }
    }
    split[j] = melody.substr(k, melody.length() - k);
    return split;
}

// This function check if the sound matches to the one in the melody
int checkSound(std::string sound, std::string melody)
{
    if (sound == melody)
        return 0;
    return 1;
}

// This function prints the entire melody
void    print_melody(int i, std::string melody[])
{
    while (i < 4)
    {
        std::cout << melody[i] << std::endl;
        i++;
    }
}

// This function get the sound as a parameter an obtain the full melody
int Musical::obtainMelody( std::string sound )
{
    for(int i = 0; i < 4; i++)
    {
        if (checkSound(sound, this->_melody[i]) == 0)
        {
            print_melody(i + 1, this->_melody);
            return 0;
        }
    }
    return 1;
}