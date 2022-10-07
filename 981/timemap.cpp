#include <map>
#include <string>


class TimeMap {
public:

    std::map<std::string,std::map<int,std::string> > data;
    TimeMap() {
    }

    void set(std::string key, std::string value, int timestamp) {
        data[key][timestamp]=value;
    }

    std::string get(std::string key, int timestamp) {
        std::map<int,std::string>::iterator it;
        std::map<std::string,std::map<int,std::string> >::iterator it2;


        if((it2 = data.find(key))==data.end()){
            return "";
        }
        it = it2->second.upper_bound(timestamp) ;
        if(it == it2->second.begin()){
            return "";
        }
        it--;
        return it->second;
        return "";
    }
};
