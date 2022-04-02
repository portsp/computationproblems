
// using fibonacci calculating program to understand dp
// calculating fibonacci numbers is better calculated iteratively, but it is an easy example to learn recursion then dp

#include <iostream>
#include <vector>


//recursive solution
// caculates the nth fibonacci number(not 0 indexed)
// is inefficient becuase it is recalculating values that it has already found before 
//e.g f(4) will caculate f(3) ... f(0) then f(5) will calculate f(4) ... f(0)
// dp optimizes this by saving values that have already been computed. This is termed memoization, which is -- im guessing -- opimizaion + memory.

int num1 = 0;
int num2 = 1;
int fib_rec(int n){
    int ans;
    
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    ans = fib_rec(n - 1) + fib_rec(n - 2);
    
    return ans;
}

// dynamic programmning solution
// save already-computed values

//int fib_dp(int n, std::vector<int> fib_vals) {
//    int ans;
//
//    if(n == 0){
//        return 0;
//    }
//    if(n == 1) {
//        return 1;
//    }
//    
//    if(n >= 2) {
//        fib_vals.push_back(fib_dp(n - 1, fib_vals) + fib_vals[n - 2]); 
//    }
//    
//    return fib_vals[n];
//}


// iterative
// better time and space complexity for this problem

int fib_iter(int n) {
    int ans;
    int tmp1 = 0;
    int tmp2 = 1;

    for(int i = 1; i < n; i++){
        ans = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = ans;
    }
    
    return ans;
}



int main(int argc, char const *argv[])
{
    
    // dp is increasingly faster as n gets larger compared to plain recursion
    // the iterative solution is linear 
    
    //std::cout << fib_rec(40) << std::endl;
    
    std::vector<int> fib_vals;
    //fib_vals.push_back(0);
    //fib_vals.push_back(1);
    //std::cout << fib_dp(5, fib_vals) << std::endl;

    //std::cout << fib_iter(45) << std::endl;
    
    return 0;
}
