#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m], c[n + m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < m; j++)
    cin >> b[j];

  int aidx = 0, bidx = 0, cidx = 0;
  while (aidx < n || bidx < m) {
    if (a[aidx] <= b[bidx]) {
      c[cidx] = a[aidx];
      aidx++;
    } else {
      c[cidx] = b[bidx];
      bidx++;
    }
    cidx++;

    if (aidx == n) {
      for (int i = bidx; i < m; i++)
        c[cidx++] = b[i];
      break;
    } else if (bidx == m) {
      for (int i = aidx; i < n; i++)
        c[cidx++] = a[i];
      break;
    }
  }
  for (int i = 0; i < n + m; i++)
    cout << c[i] << " ";
  return 0;
}
