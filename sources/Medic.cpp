#include "Medic.hpp"
using namespace std;
using namespace pandemic;

Player& Medic::treat(City c){
    if(city != c){
        __throw_invalid_argument("Not in this city");
    }
    if(!cards.count(city)){
        __throw_invalid_argument("dont have city on deck");
    }
    if (board[city] < 1)
    {
        __throw_invalid_argument("City has no disease");
    }
    board[city] = 0;
    return *this;
}
