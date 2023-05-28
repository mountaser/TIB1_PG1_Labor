#include <stdio.h>

struct bruch {
  float z;
  float n;
};

struct bruch mul(struct bruch a, struct bruch b) {
  struct bruch result;
  result.z = a.z * b.z;
  result.n = a.n * b.n;
  return result;
}

struct bruch div(struct bruch a, struct bruch b) {
  struct bruch result;
  result.z = a.z * b.n;
  result.n = a.n * b.z;
  return result;
}

int main(void) {
  struct bruch a, b;
  scanf("%f/%f", &a.z, &a.n);
  scanf("%f/%f", &b.z, &b.n);

  struct bruch mal = mul(a, b);
  struct bruch teil = div(a, b);
  printf("(%.1f/%.1f)*(%.1f/%.1f)=(%.1f/%.1f)\n", a.z, a.n, b.z, b.n, mal.z, mal.n);
  printf("(%.1f/%.1f)/(%.1f/%.1f)=(%.1f/%.1f)\n", a.z, a.n, b.z, b.n, teil.z, teil.n);

  return 0;
}