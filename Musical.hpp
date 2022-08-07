#include <iostream>

class   Musical {
    private:
        std::string* _melody;

    public:
        // Constructor
        Musical();
        // Constructor overload
        Musical(std::string melody);
        // Destructor
        ~Musical();

        // Member functions
        int obtainMelody( std::string song );
};

int             checkSound(std::string sound, std::string melody);
void            print_melody(int i, std::string melody[]);
std::string*    split(std::string print_melody);