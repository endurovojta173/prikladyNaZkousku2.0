#include <iostream>
#include <string>
int main()
{
    char znak;
    char predeslyZnak;

    std::string radek;
    int prazdneRadky=0;
    int bileZnaky=0;
    int maleZnaky=0;
    std::string radekSNejvetsimPoctemZnaku="";
    int nejvetsiPocetAnglZnaku = -1;
    while (std::getline(std::cin, radek))
    {
        if (radek.empty())
        {
            prazdneRadky++;
            bileZnaky++;
        }
        else
        {
            int delkaRadku = radek.length();

            for (int i = 0; i < delkaRadku; i++)
            {
                if (radek[i] >= 'a' and radek[i] <= 'z')
                {
                    maleZnaky++;
                }
                if (radek[i] ==' ' or radek[i] == '\t' or radek[i] == '\n')
                {
                    bileZnaky++;
                }
            }
            bileZnaky++;
            if (maleZnaky>nejvetsiPocetAnglZnaku)
            {
                nejvetsiPocetAnglZnaku = maleZnaky;
                radekSNejvetsimPoctemZnaku = radek;
            }
        }
        std::cout<<"Pocet prazdnych radku: "<<prazdneRadky<<std::endl;
        std::cout<<"Pocet bilych znaku: "<<bileZnaky-1<<std::endl;
        std::cout<<"Radek s nejvetsim poctem angl. znaku: "<<radekSNejvetsimPoctemZnaku<<std::endl;
    }

    return 0;
}