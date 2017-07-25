// dangerously ugly code
struct X {
  void f(int x){
    struct Y {
      int f() {return 1;} int m;};
    int m;
    m=x; Y m2;   // x 未定义
    return f(m2.f()); }  // m2.f() = 1
  
  int m; void g(int m) {
    if(m) f(m+2); else{   // m未定义
      g(m+2);}}
  
  X() {} void m3() {   // 这一句(？)完全不明白
  }
  
  void main() {
    X a; a.f(2);}   
};

