bool isPalindrome(int x){
    if(x < 0) return false;
    long a = x, sum = 0;
    while(a){
        int temp = a % 10;
        a /= 10;
        sum *= 10;
        sum += temp;
    }
    if(sum == x) return true;
    else return false;
}