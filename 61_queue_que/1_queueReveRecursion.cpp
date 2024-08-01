// class Solution
// {   private:
//   void Reve(queue<int> &q)
//   {
//       if(q.empty())
//       {
//           return;
//       }
//       int top=q.front();
//       q.pop();
//       Reve(q);
//       q.push(top);
//   }
//     public:
//     queue<int> rev(queue<int> q)
//     {
//        Reve(q);
//        return q;
//     }
// };