int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a , int b){
    return (a * b / gcd(a, b));
}
void addFraction(int num1, int den1, int num2,int den2)
{
    int d = lcm(den1 ,den2);
    int n = ((d / den1) * num1 ) + ((d/ den2) * num2);
    int g = gcd(n ,d);
    cout << (n/g)  << "/" << (d/g) <<endl ;

} 
