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
    printf("%c",str_key[i]);
  }
  char* alph[26]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
  char* big_alph[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
  int k_i, s_i = 0;
  for(int i = 0; i < str_length;i++)
  {
  
  }
}
