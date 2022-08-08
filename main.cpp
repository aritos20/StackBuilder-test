#include "Musical.hpp"

int main( void )
{
    Musical     melodyOne("brr, fiu, cric-cric, brrah");
    Musical     melodyTwo("pep, birip, trri-trri, croac");
    Musical     melodyThree("bri-bri, plop, cric-cric, brrah");
    std::string soundOne = "cric-cric";
    std::string soundTwo = "pep";
    std::string soundThree = "croac";
    std::string soundFour = "pulup";
    std::string soundFive = "";

    std::cout << "---- " << soundOne << " SOUND ---- TEST_1" << std::endl;
    if (melodyOne.obtainMelody(soundOne) == 0)
        std::cout << "---- TEST_1 finished ----" << std::endl;
    else if (melodyTwo.obtainMelody(soundOne) == 0)
        std::cout << "---- TEST_1 finished ----" << std::endl;
    else if (melodyThree.obtainMelody(soundOne) == 0)
        std::cout << "---- TEST_1 finished ----" << std::endl;
    else
        std::cout << "The sound that you test doesn`t match with the melodies" << std::endl;
    
    std::cout << "---- " << soundTwo << " SOUND ---- TEST_2" << std::endl;
    if (melodyOne.obtainMelody(soundTwo) == 0)
        std::cout << "---- TEST_2 finished ----" << std::endl;
    else if (melodyTwo.obtainMelody(soundTwo) == 0)
        std::cout << "---- TEST_2 finished ----" << std::endl;
    else if (melodyThree.obtainMelody(soundTwo) == 0)
        std::cout << "---- TEST_2 finished ----" << std::endl;
    else
        std::cout << "The sound that you test doesn`t match with the melodies" << std::endl;
    
    std::cout << "---- " << soundThree << " SOUND ---- TEST_3" << std::endl;
    if (melodyOne.obtainMelody(soundThree) == 0)
        std::cout << "---- TEST_3 finished ----" << std::endl;
    else if (melodyTwo.obtainMelody(soundThree) == 0)
        std::cout << "---- TEST_3 finished ----" << std::endl;
    else if (melodyThree.obtainMelody(soundThree) == 0)
        std::cout << "---- TEST_3 finished ----" << std::endl;
    else
        std::cout << "The sound that you test doesn`t match with the melodies" << std::endl;
    
    std::cout << "---- " << soundFour << " SOUND ---- TEST_4" << std::endl;
    if (melodyOne.obtainMelody(soundFour) == 0)
        std::cout << "---- TEST_4 finished ----" << std::endl;
    else if (melodyTwo.obtainMelody(soundFour) == 0)
        std::cout << "---- TEST_4 finished ----" << std::endl;
    else if (melodyThree.obtainMelody(soundFour) == 0)
        std::cout << "---- TEST_4 finished ----" << std::endl;
    else
        std::cout << "The sound that you test doesn`t match with the melodies" << std::endl;

    std::cout << "---- " << soundFive << " SOUND ---- TEST_5" << std::endl;
    if (melodyOne.obtainMelody(soundFive) == 0)
        std::cout << "---- TEST_5 finished ----" << std::endl;
    else if (melodyTwo.obtainMelody(soundFive) == 0)
        std::cout << "---- TEST_5 finished ----" << std::endl;
    else if (melodyThree.obtainMelody(soundFive) == 0)
        std::cout << "---- TEST_5 finished ----" << std::endl;
    else
        std::cout << "The sound that you test doesn`t match with the melodies" << std::endl;
}