#pragma once
#include <string>

class Critter {
public:
    Critter(const std::string& name = "");
    virtual ~Critter() = default;

    void talk() const;
    void eat(int food = 4);
    void play(int fun = 4);

    int getHunger() const;
    int getBoredom() const;

private:
    std::string m_name;
    int m_hunger;
    int m_boredom;

    int getRandNumber(int min, int max) const;
};
