long long power(long long x, unsigned short n) {
  for(int i = 0; i < n; i++) {
    x = x * x;
  }
  return x;
}
