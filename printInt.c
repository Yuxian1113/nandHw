void PrintInt(int number) {
  char buf[12];
  int len = 0;
  int tmp = number;
  if (tmp < 0) {
    buf[len++] = '-';
    tmp = -tmp;
  }
  do {
    buf[len++] = '0' + tmp % 10 ;
    tmp /= 10;
  } while (tmp != 0);

  for (int i = 0; i < len/2; ++i) {
    if (buf[i] == '-'){
      ++i;
      continue;
    }
    char c = buf[i];
    buf[i] = buf[len - i - 1];
    buf[len - i - 1 ] = c;
  }

  write(1, buf, len);
  write(1, "\n", 1);
}

