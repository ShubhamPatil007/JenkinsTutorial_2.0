#include "Light.h"

Light& Light::operator= (const Light& light) {
    if ( this == &light ) return *this;
    m_brightness = light.m_brightness;
    return *this;
}

Light& Light::operator= (bool state) {
    if(true == state) {
        m_brightness = 100;
    }
    else {
        m_brightness = 0;
    }
    return *this;
}

Light& Light::operator= (int br_level) {
    if (br_level > 100) {
        m_brightness = 100;
    }
    else if(br_level < 0) {
        m_brightness = 0;
    }
    else {
        m_brightness = br_level;
    }
    return *this;
}

Light& Light::operator++ () {
    if (m_brightness == 100) {
        std::cout<<"Maximum brightness !!!"<<std::endl;
    }
    else {
        ++m_brightness;
    }
    return *this;
}

Light& Light::operator-- () {
    if (m_brightness == 0) {
        std::cout<<"Minimum brightness !!!"<<std::endl;
    }
    else {
        --m_brightness;
    }
    return *this;
}

Light& Light::operator+= (int units) {
    if (m_brightness + units > 100) {
        m_brightness = 100;
        std::cout<<"Maximum brightness reached !!!"<<std::endl;
    }
    else {
        m_brightness += units;
    }
    return *this;
}

Light& Light::operator-= (int units) {
    if (units > m_brightness) {
        m_brightness = 0;
        std::cout<<"Minimum brightness reached !!!"<<std::endl;
    }
    else {
        m_brightness -= units;
    }
    return *this;
}

bool Light::operator==(const Light& light) {
    if (m_brightness == light.m_brightness) {
        return true;
    }
    else {
        return false;
    }
}

bool Light::operator! () {
    // incomplete
    return !m_brightness;
}

Light& Light::operator~ () {
    // inverting brightness level
    // (i.e. for brightness level 87, invert value will be 100 - 87 = 13. Also for 100 unit, invert value will be 100 - 100 = 0)
    m_brightness = 100 - m_brightness;
    return *this;
}

int Light::brightnessLevel () const {
    return m_brightness;
}
