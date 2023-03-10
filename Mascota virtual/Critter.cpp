#include "Critter.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
Critter::Critter(const string& name):
    m_name(name), m_hunger(0), m_boredom(0)
{
    srand(static_cast<unsigned int>(time(0))); // inicialitzem el generador de nombres aleatoris
}

void Critter::talk() const
{
    cout << "Hola, soc el " << m_name << " i estic ";

    if (m_hunger > 7)
    {
        cout << "molta gana.\n";
    }
    else if (m_hunger > 4)
    {
        cout << "una mica famolenc.\n";
    }
    else
    {
        cout << "ben alimentat.\n";
    }

    if (m_boredom > 7)
    {
        cout << "Estic avorrit. Toca una mica!\n";
    }
    else if (m_boredom > 4)
    {
        cout << "Estic una mica avorrit. Potser podriem fer alguna cosa.\n";
    }
    
}

void Critter::eat(int food)
{
    cout << "Mmm. Gracies pel menjar, estic satisfet.\n";
    m_hunger -= food;
    if (m_hunger < 0)
    {
        m_hunger = 0;
    }
    m_boredom++;
}
void Critter::play(int fun)
{
    cout << "Juguem!\n";
    m_boredom -= fun;
    if (m_boredom < 0)
    {
        m_boredom = 0;
    }
    m_hunger++;
}

int Critter::getHunger() const
{
    return m_hunger;
}

int Critter::getBoredom() const
{
    return m_boredom;
}

int Critter::getRandNumber(int min, int max) const
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}