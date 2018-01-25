#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int,int> fibonacci_memory; 
unordered_map<int,int>::iterator it;

int fibonacci(int n) {
    it = fibonacci_memory.find(n);
    if (it != fibonacci_memory.end())
        return it-> second;
    
    else{
        int temp = fibonacci(n-1) + fibonacci(n-2);
        fibonacci_memory.insert({n,temp});
        return temp;
       }

}
int main() {
    int n;
    cin >> n;
    fibonacci_memory.insert({0,0});
    fibonacci_memory.insert({1,1});
    cout << fibonacci(n);
    return 0;
}
