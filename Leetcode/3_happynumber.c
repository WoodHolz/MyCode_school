int mypart(int n){
    if((n > 1 && n < 10 && n != 7) || n < 1) return false;
    int x = n, sum = 0;
    while(x){
        int temp = x % 10;
        x /= 10;
        temp *= temp;
        sum += temp;
    } 
    if(sum - 1 == 0) return true;
    return mypart(sum);
}

bool isHappy(int n){
    return mypart(n);
}