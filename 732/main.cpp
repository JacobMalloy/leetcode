class MyCalendarThree {
public:
    map<int,int> my_map;
    MyCalendarThree() {

    }

    int book(int start, int end) {
        map<int,int>::iterator it;

        it = my_map.find(start);
        my_map[start]++;
        my_map[end]--;
        int count = 0;
        int max_count = 0;
        for(it = my_map.begin();it!=my_map.end();it++){
            count += it->second;
            if(count > max_count){
                max_count=count;
            }
        }
        return max_count;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
