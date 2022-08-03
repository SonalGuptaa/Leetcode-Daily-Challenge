/*In this question i am using a vector pair in which i am storing the interavls
    Ex[[], [10, 20], [15, 25], [20, 30]]
    10+-------------+-----------+20
     it.first                        it.second
                      15+-------------+-----------+25
                      start                         end
    here a if condition is written like if start < it.second (i.e 15<20) and it.first < start(i.e 10 <25) return false
    if this doesnt happen then simply push_back(start,end) in vector b and return true */
class MyCalendar {
    vector<pair<int,int>> b;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end)
    {
        for(auto it:b)
        {
            if(it.first<end && start<it.second)
            {
                return false;
            }
        }
        b.push_back({start,end});
        return true;
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar(); 
 * bool param_1 = obj->book(start,end);
 */