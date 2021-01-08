void findLargestSubArraySum(vector<int> arr , int s){
	n = arr.size()
	vector<int> result(2);
	sum = 0;
	right = 0;
	left = 0;
	while(right < n){
		sum += right;
		while(left < right && sum > s ){
			sum -=  arr[left++]; //// sum -= arr[left]; left++ ;
						
		}
		if( sum == s && (result.size() || result[1]-result[0] < right - left)){
			result[0] = left + 1;
			result[1] = right - 1;
			
		} 
		right++;  
	}
	return result;
}
