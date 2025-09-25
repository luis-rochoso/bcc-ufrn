#ifndef TURNSTATE_HPP
#define TURNSTATE_HPP
#include <cstdint>
enum state_e : std::int8_t {
    START = 0,
    LOCKED,
    UNLOCKED,
    OUTOFORDER,
    STOP
};

enum input_e : std::int8_t {
    PUSH = 0,
    COIN,
    ON,
    OFF,
    END,
    NONE
};

class Turnstate {
    state_e m_state {START};
    input_e m_input {NONE};
    unsigned m_coins {0};

    public:
    [[NODISCARD]] bool out_of_order () const {return m_state == OUTOFORDER;}
    [[NODISCARD]] bool ended() const {return m_state == STOP;}
    [[NODISCARD]] unsigned getCoins() const {return m_coins;}

    void processEvents();
    void update();
    void render();
};
#endif