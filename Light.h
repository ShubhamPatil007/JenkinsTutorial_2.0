#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED

#include <iostream>

class Light {
    int m_brightness;
public:

    // default constructor, will initialize object with light off.
    Light () : m_brightness(0) {}

    // constructor will initialize light with certain brightness level
    Light (int br_level) : m_brightness (br_level) { if (br_level > 100) m_brightness = 100; }

    // copy one light status into another light
    Light (const Light& light) : m_brightness(light.m_brightness) {}

    // assign one light status to another light
    Light& operator= (const Light&);

    // state ON/OFF
    Light& operator= (bool state);

    // set brightness level
    Light& operator= (int br_level);

    // increase brightness with one unit
    Light& operator++ ();

    // decrease brightness with one unit
    Light& operator-- ();

    // add units in current brightness
    Light& operator+= (int units);

    // subtract units from current brightness
    Light& operator-= (int units);

    // compare two light status
    bool operator== (const Light&);

    // toggle light
    bool operator! ();

    //
    Light& operator~ ();

    int brightnessLevel() const;

};

#endif // LIGHT_H_INCLUDED
