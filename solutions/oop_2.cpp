int Max() {
  int maxVal = t[0];
  for (int i = 1; i < n; i++) {
    if (t[i] > maxVal) {
      maxVal = t[i];
    }
  }
  return maxVal;
}

int Cauta(int val) {
  for (int i = 0; i < n; i++) {
    if (t[i] == val) {
      return i;
    }
  }
  return -1;
}