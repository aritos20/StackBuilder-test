#include "Musical.hpp"

int main( void )
{
    Musical     melodyOne("brr, fiu, cric-cric, brrah");
    Musical     melodyTwo("pep, birip, trri-trri, croac");
    Musical     melodyThree("bri-bri, plop, cric-cric, brrah");
    std::string soundOne = "cric-cric";
    std::string soundTwo = "pep";
    std::string soundThree = "croac";

    std::cout << "---- " << soundOne << " SOUND ---- TEST_1" << std::endl;
    if (melodyOne.obtainMelody(soundOne) == 0)
        std::cout << "This sound is from the melodyOne" << std::endl;
    else if (melodyTwo.obtainMelody(soundOne) == 0)
        std::cout << "This sound is from the melodyTwo" << std::endl;
    else if (melodyThree.obtainMelody(soundOne) == 0)
        std::cout << "This sound is from the melodyThree" << std::endl;
    
    std::cout << "---- " << soundTwo << " SOUND ---- TEST_2" << std::endl;
    if (melodyOne.obtainMelody(soundTwo) == 0)
        std::cout << "This sound is from the melodyOne" << std::endl;
    else if (melodyTwo.obtainMelody(soundTwo) == 0)
        std::cout << "This sound is from the melodyTwo" << std::endl;
    else if (melodyThree.obtainMelody(soundTwo) == 0)
        std::cout << "This sound is from the melodyThree" << std::endl;
    
    std::cout << "---- " << soundThree << " SOUND ---- TEST_3" << std::endl;
    if (melodyOne.obtainMelody(soundThree) == 0)
        std::cout << "This sound is from the melodyOne" << std::endl;
    else if (melodyTwo.obtainMelody(soundThree) == 0)
        std::cout << "This sound is from the melodyTwo" << std::endl;
    else if (melodyThree.obtainMelody(soundThree) == 0)
        std::cout << "This sound is from the melodyThree" << std::endl;
}