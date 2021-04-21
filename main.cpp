#include <iostream>

#include "Light.h"

using namespace std;

int main()
{
    Light light1(50);
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  50

    ++light1;
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  51

    light1 += 20;
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  71

    light1 -= 10;
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  61

    light1 = false;
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  0

    --light1;                                                                                                       // Minimum brightness !!!
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  0

    light1 = 30;
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  30

    ~light1;
    cout<<"light 1: Brightness level:  "<<light1.brightnessLevel()<<endl<<endl;   // light 1: Brightness level:  70

    Light light2;   // Light 2 initiated

    light2 = light1;
    cout<<"light 2: Brightness level:  "<<light2.brightnessLevel()<<endl<<endl;   // light 2: Brightness level:  70

    --light2;
    cout<<"light 2: Brightness level:  "<<light2.brightnessLevel()<<endl<<endl;   // light 2: Brightness level:  69

    if(light1 == light2) {                                                                                     // Different brightness level
        cout<<"Same brightness level"<<endl<<endl;
    }
    else {
        cout<<"Different brightness level"<<endl<<endl;
    }

    return 0;
}
