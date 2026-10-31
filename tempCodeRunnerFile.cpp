 while (n<0)
    {
        int lastdigit = n%10;
        rev = rev*10 + lastdigit ;
        n = n/10;
    }