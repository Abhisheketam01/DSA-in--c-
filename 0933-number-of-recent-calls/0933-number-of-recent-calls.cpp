
// 5th solution-
// class RecentCounter {
//     int records[3001];
//     int start = 0;
//     int end = 0;
//     int count = 0;
// public:
//     int ping(int t) {
//         records[end % 3001] = t;
//         end++;
//         count++;
        
//         while (records[start % 3001] < t - 3000) {
//             start++;
//             count--;
//         }
//         return count;
//     }
// };

// 4th solution using string
// #include <string>
// #include <cstring>

// class RecentCounter {
//     std::string buffer; // Treating string as a raw byte array
//     int head = 0;       // Points to the start of valid data
// public:
//     int ping(int t) {
//         // Append the 4 bytes of integer 't' to the string
//         char bytes[4];
//         std::memcpy(bytes, &t, sizeof(int));
//         buffer.append(bytes, 4);

//         // Check the integer at 'head' index
//         int oldest;
//         while (head < buffer.size()) {
//             std::memcpy(&oldest, &buffer[head], sizeof(int));
//             if (oldest < t - 3000) {
//                 head += 4; // Move head by 4 bytes (size of int)
//             } else {
//                 break;
//             }
//         }
//         // Count = (Total bytes - expired bytes) / 4 bytes per int
//         return (buffer.size() - head) / 4;
//     }
// };


// 3rd solution using vector

#include <vector>
#include <algorithm>

class RecentCounter {
    std::vector<int> times;
public:
    int ping(int t) {
        times.push_back(t);
        // Find the first element that is within the range [t-3000, t]
        auto it = std::lower_bound(times.begin(), times.end(), t - 3000);
        // Distance from that element to the end of the vector is our count
        return std::distance(it, times.end());
    }
};



// 2nd solutions using queue
// #include <queue>
// class RecentCounter {
//     std::queue<int> q;
// public:
//     int ping(int t) {
//         q.push(t);
//         while (q.front() < t - 3000) q.pop();
//         return q.size();
//     }
// };

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