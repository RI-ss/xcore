#pragma once
#include <unordered_map>
#include <string>
#include <vector>
class System{
public:
    using Station=std::vector<uint32_t>;
    using Station_Map=std::unordered_map<std::string, Station>;
    bool create_station(std::string_view name){
        if(stations_.find(name.data())!=stations_.end()){
            return false;
        }
        auto a="asdasd";
        stations_.emplace(name.data(), Station());
        return true;
    }
    Station& get_station(std::string_view name){
        return stations_[name.data()];
    }
    
    

private:
    Station_Map stations_{};
};