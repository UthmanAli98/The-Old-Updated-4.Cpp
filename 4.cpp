
#include < iostream > #include < string >
  using namespace std;

/* A utility function to reverse a string  */
void reverse(char str[], int length) {

  int start = 0;
  int end = length - 1;

  while (start < end)

  {

    swap( * (str + start), * (str + end));
    start++;
    end--;

  }

}

// Implementation of itoa()
char *itos(string ch, char * str) {

    int num = stoi(ch);

    int i = 0;

    bool isNegative = false;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0)

    {

      str[i++] = '0';

      str[i] = '\0';

      return str;

    }

    // In standard itoa(), negative numbers are handled only with
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0)

    {

      isNegative = true;

      num = -num;

    }

    // Process individual digits
    while (num != 0)

    {

      int rem = num % 10;
      str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
      num = num / 10;

    }

    // If number is negative, append '-'
    if (isNegative)
      str[i++] = '-';

    str[i] = '\0'; // Append string terminator

    // Reverse the string
    reverse(str, i);

    return str;

  }

int main(int argc, char * argv[]) {

  char str[100];

  string final = itos(argv[1], str);

  //int n = atoi(argv[1]);
  cout << "file" + final + ".txt" << endl;

  return 0;

}


