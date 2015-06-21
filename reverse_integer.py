
#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
def reverse(x) {
  while x != 0 :
      n = x % 10
        
      if y > INT_MAX/10 or y < INT_MIN/10 :
        return 0;
      
      y = y * 10 + n;
      x /= 10;
    
  return y;
}
