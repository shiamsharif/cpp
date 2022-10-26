#include <iostream>


class ShiamClass
{
    float cpp;
    float ds;
    float phy;

    public:
    ShiamClass(float i,float j,float k)
    {
        cpp = i;
        ds = j;
        phy = k;
    }
    float get_cpp()
    {
        return cpp;
    }
    float get_ds()
    {
        return ds;
    }
     float get_phy()
    {
        return phy;
    }


};

float avg(ShiamClass ob)
{
    float sum = ob.get_cpp() + ob.get_ds ()+ ob.get_phy();
    float avg = sum/3;
    return avg;
}

int main()
{
    ShiamClass ob1(78,95,71);
    ShiamClass ob2(68,95,61);
    std::cout<< avg(ob1) << std::endl;
    std::cout<< avg(ob2) << std::endl;
    return 0;
}