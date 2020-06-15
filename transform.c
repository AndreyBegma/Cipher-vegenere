#include <unistd.h>
void decryption (char* str, int k ,int strl)
{
  char* alph[54]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",};
  char* big_alph[54] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
  int s=0;
  for (int i=0 ; i<strl; i++)
  {
    if (str[i] == 'a' || str[i] == 'A')
    {
      s = 0 + k-(26*(k/26));
      if (str[i] == 'A')
      {
        write(1,big_alph[s],1);
      }
      else
        write (1,alph[s],1);
    }
    else
      if (str[i] == 'b' || str[i] == 'B')
      {
        s = 1 + k - (26*(k/26));
        if (str[i] == 'B')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'c' || str[i] == 'C')
      {
        s = 2 + k - (26*(k/26));
        if (str[i] == 'C')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'd' || str[i] == 'D')
      {
        s = 3 + k - (26*(k/26));
        if (str[i] == 'D')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'e' || str[i] == 'E')
      {
        s = 4 + k - (26*(k/26));
        if (str[i] == 'E')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'f' || str[i] == 'F')
      {
        s = 5 + k - (26*(k/26));
        if (str[i] == 'F')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'g' || str[i] == 'G')
      {
        s = 6 + k - (26*(k/26));
        if (str[i] == 'G')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'h' || str[i] == 'H')
      {
        s = 7 + k - (26*(k/26));
        if (str[i] == 'H')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'i' || str[i] == 'I')
      {
        s = 8 + k - (26*(k/26));
        if (str[i] == 'I')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'j' || str[i] == 'J')
      {
        s = 9 + k - (26*(k/26));
        if (str[i] == 'J')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'k' || str[i] == 'K')
      {
        s = 10 + k - (26*(k/26));
        if (str[i] == 'K')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'l' || str[i] == 'L')
      {
        s = 11 + k - (26*(k/26));
        if (str[i] == 'L')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'm' || str[i] == 'M')
      {
        s = 12 + k - (26*(k/26));
        if (str[i] == 'M')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'n' || str[i] == 'N')
      {
        s = 13 + k - (26*(k/26));
        if (str[i] == 'N')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'o' || str[i] == 'O')
      {
        s = 14 + k - (26*(k/26));
        if (str[i] == 'O')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'p' || str[i] == 'P')
      {
        s = 15 + k - (26*(k/26));
        if (str[i] == 'P')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'q' || str[i] == 'Q')
      {
        s = 16 + k - (26*(k/26));
        if (str[i] == 'Q')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'r' || str[i] == 'R')
      {
        s = 17 + k - (26*(k/26));
        if (str[i] == 'R')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 's' || str[i] == 'S')
      {
        s = 18 + k - (26*(k/26));
        if (str[i] == 'S')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 't' || str[i] == 'T')
      {
        s = 19 + k - (26*(k/26));
        if (str[i] == 'T')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'u' || str[i] == 'U')
      {
        s = 20 + k - (26*(k/26));
        if (str[i] == 'U')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'v' || str[i] == 'V')
      {
        s = 21 + k - (26*(k/26));
        if (str[i] == 'V')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'w' || str[i] == 'W')
      {
        s = 22 + k - (26*(k/26));
        if (str[i] == 'W')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'x' || str[i] == 'X')
      {
        s = 23 + k - (26*(k/26));
        if (str[i] == 'X')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'y' || str[i] == 'Y')
      {
        s = 24 + k - (26*(k/26));
        if (str[i] == 'Y')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
    else
      if (str[i] == 'z' || str[i] == 'Z')
      {
        s = 25 + k - (26*(k/26));
        if (str[i] == 'Z')
        {
          write(1,big_alph[s],1);
        }
        else
          write(1,alph[s],1);
      }
      if (str[i] == 32)
      {
        write(1," ",1);
      }
      else
      if (str[i] == '.')
      {
        write(1,".",1);
      }
      else
      if (str[i] == ',')
      {
        write(1,",",1);
      }
      else
      if (str[i] == '-')
      {
        write(1,"-",1);
      }
  }
}
