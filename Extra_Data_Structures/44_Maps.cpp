#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<stdint.h>

using std::cout;
using std::endl;
using std::string;

struct City
{
    string name;
    long population;
    double latitude, longitude;
    
};

//hash function
namespace std{

    template<>
    struct hash<City>
    {
        size_t operator()(const City& key)
        {
            return hash<string>()(key.name);
        }
    };
}

int main(){

    std::map<string,City> cities;

    cities["Houston"] = City{"Houston", 2303000,29.7604,95.3698};
    cities["Austin"] = City{"Austin", 974447,30.2672,97.7431};
    cities["Tokyo"] = City{"Tokyo",13960000,35.6764,139.6500};
    cities["Mexico City"] = City{"Mexico City",8855000,19.4326,99.1332};
    cities["Stockholm"] = City{"Stockholm",975551,59.3293,18.0686};

    cout<<cities["Austin"].population<<endl;

    City& tokyoData = cities["Tokyo"];

    cout<<tokyoData.longitude<<endl;

    std::unordered_map<City, uint32_t> founded;//created with hash function
    

    //founded[City{"Wakanda",6000000,32.554,100.454}] = 2018;

    //iterate:
    for(auto& [name, city] : cities ){
        cout<<name<<", Population: "<<city.population<<endl;
    }








    return 0;
}
