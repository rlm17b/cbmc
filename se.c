// the assignment would not let me submit .txt, .c, .py
int nondet();

int f(int a, int b) {
  int z = b;
  if (a > 0) z = a + z;
  return z - 1;
}

int main() {
  int x = nondet();
  int y = 0;

  int * A[5];
  for (int i = 0; i < 5; i++) A[i] = i;

  for (int i = 4; i >= 0; i--)
  {
    y = y + i;
    if (y < 10) A[i] = f(A[i], y);
    else A[i] = x;
  }
  
  //assert (x < 5);
  // assert( ... any holding expression ...);
  assert (y > 0);
  // assert( ... any failing expression ...);
  assert (y < 4);
  return 0;
}

