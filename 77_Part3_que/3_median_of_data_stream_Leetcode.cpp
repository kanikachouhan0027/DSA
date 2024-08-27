// 295. Find Median from Data Stream
// Hard

// 11977

// 244

// Add to List

// Share
// The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

// For example, for arr = [2,3,4], the median is 3.
// For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
// Implement the MedianFinder class:

// MedianFinder() initializes the MedianFinder object.
// void addNum(int num) adds the integer num from the data stream to the data structure.
// double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.
 
//is sol mai ham add hone ke baad balance kr rahe and coding ninja mai saath saath hi balance kr rahe the
//  class MedianFinder {
// public:
//     priority_queue<int> maxi;
// 	priority_queue<int,vector<int>,greater<int>> mini;
   
    
//     MedianFinder() 
//     {
     
//     }
    
//     void addNum(int num)   
// 	 {
//        if (maxi.empty() || num <= maxi.top()) {
//             maxi.push(num);
//         } else {
//             mini.push(num);
//         }

//         // Balance the heaps
//         if (maxi.size() > mini.size() + 1) {
//             //basically if maxi was n and mini was n-1 and we pushed in maxi then now maxi is n+1 and mini+1 is n that //means agr 1 ka diff hota to dono same hote but 1 add krne ke baad bhi if maxi is bada that means extra element is //pushed
//             mini.push(maxi.top());
//             maxi.pop();
//         } else if (mini.size() > maxi.size()+1) {
//             maxi.push(mini.top());
//             mini.pop();
//         }
//         }
  
//     double findMedian() 
//     {  
//        if(maxi.size()==mini.size())
//        {
//            //even
//            return (maxi.top()+mini.top())/2.0;
//        }
//         else
//         {
//             if(maxi.size()>mini.size())
//             {
//                 return maxi.top();
//             }
//             else
//             {
//                 return mini.top();
//             }
//         }
//     }
// };

// /**
//  * Your MedianFinder object will be instantiated and called as such:
//  * MedianFinder* obj = new MedianFinder();
//  * obj->addNum(num);
//  * double param_2 = obj->findMedian();
//  */