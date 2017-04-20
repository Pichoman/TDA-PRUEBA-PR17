void mayusculas(char cad1[], char cad2[])
{
  int i;
  int conversion= 'a'-'A';
  
  for(i=0; cad2[i]!='\0'; i++)
  {
    if (cad2[i] >= 'a' && cad2[i] <=z)
    {
      cad2[i]= cad2[i]-conversion;
    }
  }
}

