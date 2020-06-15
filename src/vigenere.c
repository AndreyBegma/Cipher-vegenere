void vigenere_transform(const char* str, const char* key, int key_length, int str_length)
{
  char str_key[99];
  int key_i = 0;
  int f=0;
  //printf("%c\n",key[0]);
  //printf("%d\n",key_length);
  for (int i=0; i< str_length;i++)
  {
    if (key_i >=  key_length)
    {
      key_i = 0;
      str_key[i] = key[key_i];
      key_i++;
    }
    else
    {
      str_key[i] = key[key_i];
      key_i++;
    }
  //  printf("%c",str_key[i]);
  }
  char* alph[26]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
  char* big_alph[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
  int k_i, s_i = -1;
  int final=-1;
  int k_status = 0;
  int another_char = 0;
  int number_another_char = 0;
  for(int i = 0; i < str_length;i++)
  {
    for(int j = 0; j <=26; j++)
    {
      if (str[i] == *alph[j])
      {
        k_i = j;
        break;
      }
      else
      if (str[i] == *big_alph[j])
      {
        k_i = j;
        k_status = 1;
        break;
      }
      else
      {
        another_char=1;
        number_another_char = j;
      }
    }
    for (int f = 0; f<=26; f++)
    {
      if(str_key[i] == *alph[f])
      {
        s_i = f;
        break;
      }
      else
      if (str_key[i] == *big_alph[f])
      {
        s_i = f;
        break;
      }
    }
      if (another_char!=1)
      {
        printf("%c\n",str[i]);
      }
      else
      {
      final = k_i + 26 - s_i;
      if (final >=26)
      {
        final = final-26*(final/26);
      }
      if (k_status == 0)
      {
      printf("%s",alph[final]);
      }
      else
      {
        printf("%s",big_alph[final]);
      }
      k_status = 0;}
  /*  printf("\n");
    printf("%d",k_i);printf("%s"," "); printf("%d",s_i); printf("%s","="); printf("%d",final);
    printf("\n");*/
  }
}
