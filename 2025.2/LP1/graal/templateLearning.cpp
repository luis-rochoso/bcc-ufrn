#include <array>
#include <iostream>
#include <string>

class Fighter {
    public:
    std::string m_name;
    int m_power{500};
    int m_life{50};

    Fighter(std::string n = "no name", int p = 0, int l = 0) {
        m_name = n;
        m_power = p;
        m_life = l;
    };
};

template <typename FwrdItr, typename CmpFunc>
FwrdItr max_value(FwrdItr first, FwrdItr last, CmpFunc cmp = std::less<>()) {
    const auto* max{first};
    while (first != last) {
        if (cmp(*max, *first)) {
            max = first;
        }
        ++first;
    }
    return max;
}

bool cmpInt(int a, int b) {
    return a < b;
}

bool cmpFighter(const Fighter &a, const Fighter &b) {
    if (a.m_power < b.m_power) return true;
    if (a.m_power == b.m_power) return a.m_life < b.m_life;
    return false;
}

int main() {
    constexpr std::array arr{-3, 0, 4, 7, -5,10, 3};
    
    std::array<Fighter, 2> roster{
        Fighter
        {"Lü Bu", 400, 60},
        {"Thor", 500, 70}
    };
    
    auto strongest = *max_value(roster.cbegin(), roster.cend(), cmpFighter);
    std::cout << ">>> Max value is: " << *max_value(arr.cbegin(), arr.cend(), cmpInt) << std::endl;
    std::cout << ">>> Winner is: " << strongest.m_name << std::endl;
    return 0;
}