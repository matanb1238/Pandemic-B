
#pragma once
#include "Player.hpp"
using namespace std;
using namespace pandemic;

class Virologist: public Player {
        public:
            Virologist(Board& b, City c): Player(b, c, "Virologist") {}
            Player& treat(City c) override;
};