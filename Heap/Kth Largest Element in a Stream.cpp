class KthLargest {
    public:
        priority_queue<int,vector<int>,greater<int>> minHeap;
        int k;
        KthLargest(int k, vector<int>& nums) {
            this->k=k;
            for (int num:nums){
                minHeap.push(num);
                if(minHeap.size()>k){
                    minHeap.pop();
                }
            }
        }
        
        int add(int val) {
            minHeap.push(val);
            if(minHeap.size()>k){
                minHeap.pop();
            }
            return minHeap.top();
        }
    };
    