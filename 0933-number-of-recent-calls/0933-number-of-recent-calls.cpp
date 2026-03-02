// 2nd solutions using queue
#include <queue>
class RecentCounter {
    std::queue<int> q;
public:
    int ping(int t) {
        q.push(t);
        while (q.front() < t - 3000) q.pop();
        return q.size();
    }
};

// // 1st solution using queue.
// #include <queue>
// class RecentCounter {
// private:
//     // This is our "notebook" to store timestamps
//     std::queue<int> records;
// public:
//     RecentCounter() {
//         // No special setup needed, the queue starts empty
//     }
//     int ping(int t) {
//         // Step 1: Record the new ping at time 't'
//         records.push(t);   
//         // Step 2: Look at the oldest pings at the front.
//         // If they are older than t - 3000, they are out of the window.
//         // We use a 'while' loop because multiple pings might expire at once.
//         while (!records.empty() && records.front() < t - 3000) {
//             records.pop();
//         }
//         // Step 3: The size of the queue is the number of pings 
//         // that happened within [t - 3000, t].
//         return records.size();
//     }
// };


// //
// class RecentCounter {
// public:
//     RecentCounter() {
        
//     }
    
//     int ping(int t) {
        
//     }
// };

// /**
//  * Your RecentCounter object will be instantiated and called as such:
//  * RecentCounter* obj = new RecentCounter();
//  * int param_1 = obj->ping(t);
//  */