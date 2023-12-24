class Solution {
public:
    int reverse = 0,rem;

    int reversed(int n){

        while(n != 0) {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n /= 10;
  }
  return reverse;

    }

    int nextGreaterElement(int n) {
        
        int rev = reversed(n);

        if(rev>=n)
        return rev;

        else
        return -1;
    }
};
